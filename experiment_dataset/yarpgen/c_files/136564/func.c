/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136564
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_7 [i_0] [(short)12] [i_2] [i_3])))) - (((((/* implicit */_Bool) ((long long int) arr_1 [i_2]))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1]))) : (((/* implicit */int) arr_1 [10LL])))))))));
                        var_17 = ((/* implicit */unsigned short) (short)-1);
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) ((short) arr_7 [i_3] [8LL] [i_1] [(_Bool)1])))))) ? (((/* implicit */long long int) (-((+(arr_4 [i_0] [i_0])))))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_3])), (((long long int) var_4))))));
                    }
                    arr_14 [(short)15] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(min((((/* implicit */unsigned int) var_6)), (arr_4 [i_1] [i_2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [6U] [i_1] [i_1] [i_2])))))));
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_20 [i_5] = -1337780536;
                        arr_21 [i_5] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) (short)-6)) : (var_6)))));
                        var_19 = ((/* implicit */signed char) (-(((int) (short)-1))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_9))));
                        arr_24 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */signed char) (((~(arr_9 [i_4]))) != (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [(signed char)18] [(signed char)2]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6850077947184922106ULL)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)2774))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_4]));
                        arr_28 [i_0] [i_1] [i_7] = (+(((/* implicit */int) arr_3 [i_1])));
                    }
                    arr_29 [i_0] [i_0] [i_0] [i_4] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0]))));
                }
                for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */short) ((unsigned int) ((int) var_4)));
                    arr_32 [i_8] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) min((arr_5 [(unsigned short)13] [(unsigned short)13]), (var_12)))) : (max((arr_12 [i_1] [i_1]), (((/* implicit */int) var_12))))))) ? (max((((/* implicit */int) min((arr_7 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) (short)6))))), (((((/* implicit */int) (unsigned char)8)) >> (((205330675U) - (205330672U))))))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_14)))))));
                    var_23 -= ((/* implicit */short) arr_30 [i_8] [i_1] [i_0]);
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((arr_5 [i_8] [(unsigned char)10]), (((/* implicit */unsigned short) arr_6 [i_0] [i_1])))))));
                    arr_33 [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_8]), (arr_2 [i_0])))) / (((/* implicit */int) max((arr_2 [i_8]), (arr_2 [i_8]))))));
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) arr_23 [i_0] [i_1] [i_9] [i_1]))));
                    var_26 = ((/* implicit */unsigned int) arr_23 [i_0] [i_1] [i_9] [i_9]);
                }
                arr_38 [i_0] [i_1] = ((/* implicit */_Bool) var_8);
                var_27 += ((/* implicit */unsigned int) max((min((((arr_0 [i_0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_22 [i_1])))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_35 [i_1] [i_1] [i_0] [i_0]))));
                arr_39 [i_1] [8ULL] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_6 [i_0] [i_1]))))) ? (max((((/* implicit */unsigned int) ((int) arr_10 [i_0] [i_1] [(short)6]))), (max((1003420874U), (((/* implicit */unsigned int) (short)-6)))))) : (arr_4 [i_0] [i_1])));
                var_28 = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_29 = ((unsigned char) ((((/* implicit */unsigned int) ((int) var_6))) | (min((var_9), (((/* implicit */unsigned int) var_12))))));
}
