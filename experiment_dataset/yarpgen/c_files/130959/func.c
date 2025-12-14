/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130959
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) arr_7 [(short)5] [(unsigned short)6] [7ULL] [5ULL]);
                        var_16 = -8647982196317353113LL;
                    }
                    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)65), (((/* implicit */signed char) arr_4 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)))), (max((((/* implicit */unsigned long long int) arr_10 [4ULL] [i_0] [8ULL] [(short)4])), (arr_8 [i_0])))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [0ULL] [i_0] [9LL])) ? (arr_10 [i_2 - 2] [i_0] [i_2 - 1] [i_2 + 1]) : (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) var_8)))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? ((-(((/* implicit */int) arr_1 [i_5] [i_5])))) : ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [2ULL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)4] [i_5]))) : (min((((/* implicit */unsigned long long int) arr_11 [i_2] [(_Bool)1] [0LL])), (15976901575402509325ULL))))))));
                        var_21 &= ((/* implicit */unsigned int) ((arr_15 [i_0 + 2] [i_5] [i_2 - 1]) > (arr_15 [i_0 + 2] [i_5] [i_2 + 1])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) (unsigned char)37)) ? (var_10) : (max((15976901575402509334ULL), (((/* implicit */unsigned long long int) var_3)))));
                        var_23 = ((/* implicit */unsigned long long int) var_11);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 4; i_7 < 8; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 6; i_8 += 3) 
                        {
                            {
                                var_24 |= ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (signed char)-77)), (1873242662481110411ULL)))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) -4905697487778606615LL))));
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */unsigned int) arr_21 [i_0] [i_7])))))));
                                var_27 = ((/* implicit */unsigned int) 15788831217958718327ULL);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) 168414855);
                    var_29 = ((/* implicit */signed char) max((arr_12 [i_0] [0] [(unsigned char)1] [i_2] [8LL] [0U]), (((/* implicit */unsigned long long int) var_13))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) var_14);
}
