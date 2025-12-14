/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142918
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
    var_13 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_3)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
    var_14 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_15 = min((((/* implicit */int) ((arr_0 [i_0]) == (arr_0 [i_0])))), ((+(((/* implicit */int) min((((/* implicit */signed char) arr_6 [15ULL] [i_0 + 1] [i_1] [i_2])), (var_9)))))));
                    var_16 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) -5835131436675048120LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_2] [i_1] [i_0 - 1] [i_0 + 1]))))), (((/* implicit */unsigned long long int) max((min((var_2), (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))))))))));
                    var_17 += ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [(short)18] [4ULL] [i_1]))));
                                arr_13 [i_2] [i_1] [2ULL] [i_0] [i_4] [i_1] = ((/* implicit */unsigned int) max((arr_11 [i_0] [i_0]), (var_8)));
                                arr_14 [i_0] [i_0] [i_0] [5ULL] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0])) ? ((-(((/* implicit */int) arr_12 [16ULL] [16ULL] [i_2] [i_2] [i_0])))) : (((/* implicit */int) var_0))))) || (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_10))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) + (min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (arr_7 [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned int) var_1);
                arr_15 [i_1] [i_0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_1]))))))));
                var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_0]) : (((((/* implicit */int) arr_10 [12] [i_1] [i_0] [10ULL] [10ULL])) | (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (arr_0 [i_0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_2);
}
