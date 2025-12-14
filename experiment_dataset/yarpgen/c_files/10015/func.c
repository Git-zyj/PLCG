/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10015
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_12))))))));
        var_15 ^= ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (short)31029)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (arr_7 [i_1])));
        var_17 = var_1;
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) min(((short)25141), ((short)-20649)))) : (((/* implicit */int) arr_6 [i_2])))) * (((/* implicit */int) var_7)))))));
        arr_10 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_1), (max((var_12), (arr_8 [(short)8]))))))));
        var_20 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))));
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_5 [i_3] [i_3]), (arr_5 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    var_21 = arr_9 [i_4];
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_22 = arr_15 [i_3] [i_4];
                        arr_21 [i_3] [(unsigned char)2] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_6]))))) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) ((short) (unsigned char)204)))));
                    }
                }
            } 
        } 
        arr_22 [i_3] = ((/* implicit */short) max((((/* implicit */int) arr_9 [(short)10])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20630)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (short)20610))))) ? (((((/* implicit */_Bool) (short)29112)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))))));
        var_23 = var_2;
    }
    var_24 *= (short)-31030;
}
