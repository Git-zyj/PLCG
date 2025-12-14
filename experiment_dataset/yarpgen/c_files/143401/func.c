/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143401
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
    var_14 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (-(arr_6 [i_0])));
                            arr_11 [i_2] [i_1] [i_1] [i_3] = arr_6 [i_2];
                            arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */short) (-(var_8)));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_11))));
                arr_13 [(signed char)5] = ((/* implicit */int) var_10);
                var_17 = ((/* implicit */int) (+(arr_2 [i_1])));
            }
        } 
    } 
}
