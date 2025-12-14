/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180194
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] |= ((/* implicit */short) ((unsigned int) ((long long int) 0ULL)));
                                var_16 = ((/* implicit */unsigned int) ((unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) var_14)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [3ULL] = ((/* implicit */unsigned char) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((288212783965667328ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) arr_17 [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_5 - 3]))) > (13345411765803904304ULL))))))))))));
                        arr_20 [i_5] [i_2] [i_1] [i_1] [i_0 + 4] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) | (var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [9U] [(_Bool)0] [i_1])))))), (((int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) min((((_Bool) var_10)), ((_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */signed char) var_3);
}
