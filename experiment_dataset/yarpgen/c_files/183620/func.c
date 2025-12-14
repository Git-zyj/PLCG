/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183620
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
    var_10 -= ((/* implicit */unsigned long long int) min(((signed char)-98), ((signed char)(-127 - 1))));
    var_11 = ((/* implicit */unsigned long long int) max((var_0), ((signed char)127)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-127)))) ^ (arr_1 [5ULL]))), (min((arr_7 [i_1] [i_4]), ((-(576460752303423488ULL)))))));
                                var_13 = ((/* implicit */signed char) max((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 2688329512123016786ULL))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1067266234378751667ULL)))))))));
                            }
                        } 
                    } 
                    var_14 |= arr_5 [i_0] [i_0] [(signed char)21] [4ULL];
                    arr_13 [i_2] [i_1 - 3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_11 [i_0] [(unsigned short)17] [(unsigned short)17] [i_0 + 1] [i_1 - 3] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_1] [i_1]), (arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_2 - 1]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((arr_11 [24ULL] [24ULL] [24ULL] [i_0] [i_1] [16ULL] [(signed char)16]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1 - 3])))))), (arr_3 [i_0 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_18 [i_5] [i_1] [i_2 - 1] [i_5] [i_6] = ((/* implicit */unsigned long long int) min(((signed char)-125), (((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1 - 1] [i_1] [20ULL] [i_5 - 1] [1ULL])))), (((((/* implicit */_Bool) arr_16 [(signed char)17] [i_1 - 3] [i_2 + 1] [(signed char)17] [i_6])) || (((/* implicit */_Bool) (unsigned short)59818)))))))));
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)44220))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 1] [(unsigned short)8] [i_2] [(signed char)6])) >> (((((/* implicit */int) arr_16 [i_2 + 1] [i_1 - 3] [i_1 - 1] [(signed char)10] [i_0 - 1])) - (54564)))))) && ((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                }
            } 
        } 
    } 
}
