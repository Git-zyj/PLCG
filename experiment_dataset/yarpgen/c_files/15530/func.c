/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15530
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (signed char)-6))) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)31)) % (((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */int) min((var_9), (var_3)))) : (((/* implicit */int) min((var_11), (var_11))))))));
    var_13 |= ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (short)-38)))) + (((/* implicit */int) ((short) (short)37))))));
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */short) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_4 [i_1])))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0])), (var_0)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) arr_3 [(unsigned char)18]))));
                    arr_9 [i_0] [(unsigned char)5] [i_2] = ((/* implicit */short) min((((/* implicit */int) (short)-29)), (((((arr_4 [i_2]) ? (((/* implicit */int) arr_1 [(short)1])) : (((/* implicit */int) arr_0 [i_2])))) - (((/* implicit */int) arr_0 [i_0]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            for (short i_4 = 3; i_4 < 21; i_4 += 2) 
            {
                {
                    var_17 *= ((/* implicit */short) max((((/* implicit */signed char) ((((arr_11 [i_4]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-14226)))) != (((/* implicit */int) max((arr_5 [(short)16]), (var_5))))))), (((signed char) (-(((/* implicit */int) (signed char)-16)))))));
                    var_18 = ((/* implicit */short) arr_4 [i_0]);
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        arr_16 [i_0] [(short)1] [(short)1] [(short)11] [i_5] [i_3] = ((/* implicit */_Bool) (short)39);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)130))))), ((-(((/* implicit */int) (unsigned char)230))))))) * (((((-4672884880975528323LL) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0]))))))));
                    }
                    arr_17 [i_4] [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned char) arr_7 [i_4 - 1] [i_3 + 1] [(signed char)17] [(signed char)17])), (min((((/* implicit */unsigned char) arr_7 [i_4 + 1] [i_3 + 4] [i_3] [i_3])), (arr_14 [i_3] [i_3 + 4] [i_0] [i_3])))));
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) arr_3 [i_6]))))));
        arr_22 [i_6] |= ((/* implicit */short) arr_14 [(short)18] [i_6] [i_6] [(unsigned char)18]);
    }
    for (short i_7 = 3; i_7 < 20; i_7 += 4) 
    {
        var_21 = arr_23 [i_7];
        var_22 |= ((/* implicit */unsigned char) var_6);
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_7 - 2])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7])))))))) ? (((((/* implicit */_Bool) arr_19 [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_5 [i_7 - 3])) : (((/* implicit */int) arr_5 [i_7 + 1])))) : (((((/* implicit */int) (unsigned char)144)) % (((/* implicit */int) ((short) (unsigned char)14)))))));
        var_24 = ((/* implicit */_Bool) max((max((arr_10 [i_7 - 3] [(short)4] [i_7]), (arr_10 [i_7 + 1] [i_7] [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-10744)))))));
        var_25 |= ((/* implicit */signed char) var_5);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_23 [i_8]))));
        var_27 |= ((/* implicit */_Bool) (+(arr_2 [i_8])));
    }
}
