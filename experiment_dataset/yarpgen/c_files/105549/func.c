/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105549
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_6)))))) ? (148194150) : (((/* implicit */int) var_4))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((0LL) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 1]))))) * (((((/* implicit */_Bool) var_9)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_5))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12302))) : (26LL)))))) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_0 + 1])));
                        var_19 &= (+(min((0LL), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_1] [i_1 - 2])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_5 [i_2]))));
                        var_21 = ((arr_11 [i_1] [i_1 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1]))) : ((+(4294967289U))));
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((var_7) <= (((/* implicit */unsigned long long int) var_10)))) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 3] [i_2] [i_4] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1 - 1] [i_4 - 1]))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [i_1] [i_2])), (((((/* implicit */int) var_11)) >> ((((+(((/* implicit */int) (signed char)-55)))) + (80)))))));
                        var_23 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1] [i_2]);
                        var_24 = ((/* implicit */unsigned int) var_11);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_21 [(unsigned short)6] [(unsigned short)6] [i_2] [i_1] [(unsigned short)5] = ((/* implicit */long long int) ((arr_6 [i_0] [i_2] [i_1] [i_7]) & (var_14)));
                                arr_22 [i_0 + 1] [i_1] [i_2] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned int) max((min((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_6] [i_7]))))), (min((((/* implicit */unsigned long long int) arr_17 [i_7] [i_1] [i_0 + 1] [i_1] [i_0 + 1])), (4779913508036060791ULL))))), (((/* implicit */unsigned long long int) (unsigned char)200))));
                            }
                        } 
                    } 
                    arr_23 [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_8));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (short)960))) + (min((13666830565673490802ULL), (((/* implicit */unsigned long long int) arr_5 [i_2])))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) var_12);
    var_27 = ((/* implicit */unsigned int) min(((unsigned short)58339), (((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) var_14))))), (var_9))))));
}
