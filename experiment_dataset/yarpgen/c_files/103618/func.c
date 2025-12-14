/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103618
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)10] = ((/* implicit */unsigned char) arr_3 [i_1 - 3]);
                arr_7 [i_1] = ((/* implicit */short) ((long long int) ((unsigned short) ((signed char) var_5))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_14 [i_1] [i_0 + 1] [i_1] [i_1] [i_2 - 1] [i_3 - 1] = ((/* implicit */_Bool) var_10);
                            arr_15 [18] = ((/* implicit */int) ((_Bool) arr_12 [i_2 - 1] [i_2] [i_2 + 3] [i_2 + 2] [i_2]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 |= var_0;
}
