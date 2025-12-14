/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127604
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -4058478687181927476LL)) * (var_12))) <= (var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 - 2])))) * (((/* implicit */int) arr_2 [i_0 + 2]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((arr_6 [i_0 + 1] [i_0 + 1] [i_1] [(unsigned short)17]) <= (((arr_6 [i_0] [i_1] [(signed char)13] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [11LL])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_6 [i_3 - 1] [19] [i_0 - 2] [i_0]) <= (arr_6 [i_3 - 1] [i_1] [i_0 + 1] [i_0])))) ^ (((/* implicit */int) ((arr_6 [i_3 - 1] [i_0] [i_0 + 2] [i_0]) <= (arr_6 [i_3 - 2] [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                                var_17 = ((/* implicit */unsigned long long int) arr_2 [10]);
                                var_18 = ((((/* implicit */long long int) arr_11 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 2])) / (arr_8 [i_0 - 2] [i_0 + 1] [i_3 - 1] [7ULL] [i_3 + 1] [i_1]));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]);
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [12LL] [i_0 - 2] [i_1])) ? (((arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) * (arr_10 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 2])) ^ (((/* implicit */int) arr_7 [i_0 + 1]))))))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 2]) / (arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
            }
        } 
    } 
}
