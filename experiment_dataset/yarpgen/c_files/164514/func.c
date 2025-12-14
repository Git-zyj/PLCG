/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164514
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (arr_0 [i_0]))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0]) : (var_2)))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2511717857311216337LL))))));
    }
    for (signed char i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        arr_6 [i_1] = arr_2 [(unsigned char)13];
        arr_7 [i_1 - 3] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_0))))))), (225846228U)));
    }
    for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        arr_10 [i_2 + 1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_11)))) == (((/* implicit */int) (_Bool)0))));
        var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_2 - 3]) : (((/* implicit */unsigned long long int) var_9))))));
    }
    var_17 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_5] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) ((unsigned int) var_1));
                                arr_26 [i_3] [i_7] [i_5] [i_6] [17ULL] [10ULL] = ((/* implicit */long long int) arr_18 [i_6 + 1] [i_6 + 1] [i_6] [i_3]);
                                var_18 = ((/* implicit */long long int) 18446744073709551615ULL);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((_Bool) arr_20 [i_4 + 4] [i_4 + 4] [i_4 - 1])))));
                    var_20 = ((/* implicit */long long int) ((arr_18 [i_4] [i_4] [i_4 + 3] [i_3]) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_4 + 2] [i_3])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4 + 4] [i_3]))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (unsigned char)76)))) : (((/* implicit */int) var_11)))))));
    }
    var_22 = min((((/* implicit */long long int) 4294967295U)), (min(((+(-4413468474582131022LL))), (((/* implicit */long long int) var_0)))));
}
