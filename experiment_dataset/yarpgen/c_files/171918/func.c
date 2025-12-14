/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171918
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
    var_13 -= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)18442)) == (((/* implicit */int) (unsigned short)18442))));
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) max((((arr_4 [i_0] [i_1 + 3] [i_0]) - (arr_4 [i_0] [i_1 + 1] [i_0]))), (((((/* implicit */_Bool) (unsigned short)18460)) ? (arr_4 [i_0] [i_1 - 1] [i_0]) : (arr_4 [i_0] [i_1 + 2] [i_0])))));
                        }
                    } 
                } 
                var_14 -= ((/* implicit */unsigned short) 286818850);
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned char) var_5);
    var_16 = ((/* implicit */long long int) var_3);
}
