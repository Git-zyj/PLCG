/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106472
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) max((arr_5 [i_3]), (((unsigned char) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [(_Bool)1]))) : (9163895011414880307LL)))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [(signed char)21])))) : (((/* implicit */int) max(((signed char)-26), (arr_10 [i_0 - 3] [(signed char)14] [i_0] [(signed char)8] [i_3])))))) : ((+(((/* implicit */int) ((unsigned char) arr_6 [i_3])))))))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_3 [i_0 - 3]))))) >= (((/* implicit */int) ((short) arr_4 [i_0 + 1] [i_4 + 4]))))))));
                                arr_12 [i_0] = arr_4 [i_1] [i_2];
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_4 [i_1] [i_0 - 1]) >= (arr_4 [i_0 - 2] [i_0 - 2])))) >= ((+(((/* implicit */int) (signed char)-41))))));
                    arr_13 [i_2] [i_0] [19LL] = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_5)))) >= (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_6 [i_0])))))))));
                }
            } 
        } 
    } 
}
