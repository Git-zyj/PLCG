/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161983
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) 1436917843U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [5LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (17592186044415ULL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_17 = ((unsigned char) ((unsigned long long int) var_6));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) arr_15 [2LL] [i_1] [(short)4] [i_1 - 1])) ? (((/* implicit */long long int) arr_16 [i_2] [i_5] [i_2] [i_1] [i_2])) : (var_4))), ((+(6969214324293702494LL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551615ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30930))) : (var_7))))))), ((unsigned char)6))))));
        arr_20 [i_0] = ((/* implicit */long long int) var_3);
        arr_21 [7LL] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])))))));
        var_20 ^= ((/* implicit */long long int) var_2);
    }
    /* vectorizable */
    for (short i_7 = 3; i_7 < 17; i_7 += 3) 
    {
        var_21 = ((/* implicit */int) (~(((18394475120449917688ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        var_22 = ((/* implicit */long long int) ((arr_9 [i_7 + 1] [i_7 - 3] [i_7] [i_7] [i_7 - 1]) >= (arr_9 [i_7] [i_7 - 1] [(unsigned char)6] [i_7 + 1] [i_7 - 3])));
    }
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */long long int) arr_26 [i_8] [i_8]);
        var_23 = ((/* implicit */unsigned long long int) arr_26 [i_8] [i_8]);
    }
    var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (var_6))))) % ((+(var_4)))));
}
