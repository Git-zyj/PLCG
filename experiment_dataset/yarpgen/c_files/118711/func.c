/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118711
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
    var_19 += ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_5) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) arr_3 [i_1] [i_0]))))) ? (var_18) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43674)))))))));
                var_21 = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_7 [i_2])))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (var_0))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_11 [i_5] [i_3] [i_5] [i_3]), (arr_11 [i_5] [i_5] [i_5] [i_3])))) ? (((((/* implicit */_Bool) arr_2 [i_4] [i_2])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_9)) ? (arr_15 [(unsigned char)9] [i_4] [i_4] [i_5] [i_3]) : (((/* implicit */int) var_4)))))) : ((+(((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_4] [i_4] [i_5])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_17))))))));
                        var_24 = ((/* implicit */int) arr_12 [i_3]);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_3])))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) arr_13 [i_3]))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) arr_8 [(short)6]);
    }
}
