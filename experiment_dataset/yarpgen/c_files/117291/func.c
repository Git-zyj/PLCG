/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117291
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_11 [i_3] [i_1 - 1] [i_2] [i_3] [i_4 + 1] &= ((/* implicit */short) max((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_3 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */_Bool) ((short) var_15));
                }
            } 
        } 
    } 
    var_18 |= max((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_14)))))));
}
