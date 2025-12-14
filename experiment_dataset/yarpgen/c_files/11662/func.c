/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11662
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
    var_10 |= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_1] = ((/* implicit */long long int) ((max(((~(0ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_2]))))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_1 - 3] [i_0 - 1])), (-7LL))))));
                            arr_14 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_10 [i_2] [i_1]), (arr_10 [i_2] [i_1])))), (18446744073709551599ULL)));
                            arr_15 [i_0 + 1] [i_0 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)9152))));
                        }
                    } 
                } 
                arr_16 [i_1] [12] [i_1 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)9152))));
            }
        } 
    } 
}
