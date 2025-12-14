/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157197
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
    var_20 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(unsigned char)3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) > (((((/* implicit */int) var_13)) - (((/* implicit */int) (unsigned char)255))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_21 &= var_1;
                            arr_11 [i_0] [i_0 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0 - 2]);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [9] [(unsigned char)1] = ((/* implicit */long long int) (+(((((((((/* implicit */int) arr_4 [7] [i_2] [i_2])) + (2147483647))) >> (((arr_3 [i_0 - 1] [i_1]) + (30343086))))) & (((/* implicit */int) var_14))))));
                            var_22 &= ((/* implicit */int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
}
