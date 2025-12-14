/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182464
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_2 + 1] [i_2] [i_3 + 3] = ((/* implicit */short) (unsigned short)25553);
                            var_13 = ((/* implicit */unsigned char) (unsigned short)0);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) 180182682U);
                                var_15 = ((/* implicit */unsigned char) (signed char)34);
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                                var_17 = ((/* implicit */unsigned char) (signed char)-111);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (unsigned char)33);
}
