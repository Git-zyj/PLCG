/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141232
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) 15940638483385016146ULL);
                arr_6 [i_1] = ((int) min((var_4), (((/* implicit */unsigned int) arr_2 [i_0]))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) var_18)) | (((/* implicit */int) (!(((/* implicit */_Bool) 1263698578U))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */_Bool) (+(((long long int) ((arr_10 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_21 -= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (unsigned short)22928)), ((-(var_4))))), (((/* implicit */unsigned int) max((arr_7 [i_0] [6ULL] [i_2] [1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (var_15)))))))));
                                arr_14 [2] [i_1] [6LL] [3LL] [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(signed char)8] [(unsigned short)6] [i_0])) ? (((/* implicit */long long int) ((int) var_12))) : (max((((/* implicit */long long int) var_15)), (var_1)))))));
                            }
                            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_1])) ? (max((var_10), (((/* implicit */int) var_14)))) : (((((/* implicit */int) arr_13 [i_1] [i_1])) + (((/* implicit */int) arr_1 [(signed char)6] [(signed char)6]))))))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */_Bool) (-(((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */_Bool) var_10);
}
