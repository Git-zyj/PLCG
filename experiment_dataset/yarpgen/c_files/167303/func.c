/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167303
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
    var_10 = ((/* implicit */_Bool) ((var_2) - ((~(min((((/* implicit */unsigned long long int) var_6)), (var_2)))))));
    var_11 = min(((~((-(11959566767664375258ULL))))), (((/* implicit */unsigned long long int) 2067899564)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) ((min((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0]))) + (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_14 [i_3] [1LL] [i_3] [2ULL] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_1])))) ? (((/* implicit */int) min(((signed char)-5), (arr_1 [i_2])))) : ((-(((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [6U] [i_1]))) : (arr_2 [i_1] [(_Bool)1])))) * (arr_9 [i_0] [i_2] [i_0] [i_2]))));
                    var_13 = ((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [i_0] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_2] [i_2] [i_1] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))))));
                    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)4)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || (((((/* implicit */int) arr_10 [i_2] [10ULL] [i_0] [i_0])) > (((/* implicit */int) (signed char)(-127 - 1)))))))), (arr_2 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (4294967281U)))), (((((((/* implicit */_Bool) 15579828704666214401ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
}
