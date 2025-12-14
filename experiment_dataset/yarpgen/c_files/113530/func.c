/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113530
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
    var_19 = ((/* implicit */unsigned int) (unsigned short)2180);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 7; i_2 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 1]))))) % (var_6)));
                    arr_8 [i_0] = ((/* implicit */signed char) (unsigned short)17245);
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_6 [i_0])))) ^ (((unsigned long long int) arr_1 [i_0 + 1]))));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_0 [i_0 - 1] [i_0 + 1])))));
                    arr_11 [1U] [1U] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
                }
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [i_0])) - (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [4ULL] [i_0]))));
                            arr_16 [i_0] = ((/* implicit */long long int) arr_3 [i_0 + 1]);
                            var_24 -= ((/* implicit */signed char) (unsigned short)25448);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
}
