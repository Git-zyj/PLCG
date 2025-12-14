/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157133
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) var_5)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((signed char) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((unsigned long long int) (-(arr_5 [i_3] [i_0])))), (((((((/* implicit */unsigned long long int) arr_3 [i_2])) != (arr_8 [i_0] [i_1] [i_2]))) ? (arr_9 [i_0] [i_1] [4ULL] [i_3] [11LL] [i_3]) : (arr_5 [i_0 - 4] [i_1]))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_4 [(signed char)5] [(signed char)5] [i_2])))));
                            arr_13 [i_0] [3ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((max((min((arr_8 [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) (_Bool)0)))), (((((/* implicit */_Bool) arr_4 [12LL] [10ULL] [12LL])) ? (arr_8 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) arr_6 [i_4] [i_3] [i_1])), (arr_9 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0])))));
                            var_18 &= ((/* implicit */signed char) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_9))))));
                            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) arr_4 [i_0] [7ULL] [i_0 - 2])) : (arr_4 [i_0] [i_0] [i_2])));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (arr_5 [i_0] [i_5])));
                            arr_17 [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 3]);
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)73)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_6 [(signed char)2] [i_2] [i_3]);
                            var_23 = ((/* implicit */_Bool) arr_2 [i_2] [i_2]);
                            var_24 = ((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_6 + 1]);
                        }
                        var_25 = ((/* implicit */unsigned long long int) arr_10 [i_0]);
                    }
                } 
            } 
        } 
    }
}
