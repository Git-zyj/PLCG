/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131394
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
    var_17 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (-(arr_4 [i_0])));
                    arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 - 1])) ? (((arr_0 [i_2 + 1] [i_2 - 1]) - (arr_0 [i_2 - 1] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_2 - 1] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [11] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((arr_11 [i_4] [(unsigned short)2] [i_4] [i_4] [i_4] [i_3 + 3]) >= (arr_11 [i_4] [i_4] [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2])))), ((~(arr_11 [i_4] [i_4] [i_3 + 4] [i_4] [i_4] [i_3 + 4])))));
                                arr_15 [i_0] [14U] [14U] [i_2] [i_2 - 1] [i_3] [i_4] = ((/* implicit */long long int) (-(var_11)));
                                arr_16 [i_2] = ((/* implicit */unsigned int) max((7808295335977878179ULL), (7808295335977878177ULL)));
                                var_18 = ((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2223811371U))));
    }
    var_20 = ((/* implicit */unsigned char) var_3);
}
