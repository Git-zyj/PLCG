/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135388
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [11] [i_1] = ((/* implicit */short) max((((arr_3 [i_0] [i_0]) * (arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) (unsigned short)28730)));
                var_10 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) * (((int) 1280939951U))));
                arr_6 [i_0] = ((/* implicit */_Bool) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2 + 3] [(signed char)12] = (~(arr_11 [i_0] [i_1]));
                            arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 += ((/* implicit */unsigned short) ((unsigned long long int) var_4));
}
