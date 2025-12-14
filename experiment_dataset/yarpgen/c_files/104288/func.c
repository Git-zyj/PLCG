/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104288
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                            arr_14 [i_2] &= ((/* implicit */unsigned char) var_3);
                            arr_15 [i_3] [i_3] [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 16102331887196978096ULL)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_3])))), (arr_2 [i_0] [i_2])));
                            var_17 = ((/* implicit */unsigned short) var_13);
                            arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) -1906817427);
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
}
