/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171909
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
    var_20 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    var_21 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)24018)) ? (((/* implicit */int) (unsigned short)3034)) : (45557160))) - (arr_6 [i_1 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) arr_6 [i_0] [i_3]);
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)24018))))) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_9))))) ^ (-3823505555168207061LL)));
                                var_23 |= ((/* implicit */unsigned short) arr_4 [i_2 - 4] [5LL] [i_3 + 1]);
                                arr_14 [i_4] [i_3] [i_3] [i_2 + 2] [i_1 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-21794))))) - (((arr_7 [i_2 - 1]) - (((/* implicit */unsigned long long int) var_15))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1 - 1] [i_0] = ((/* implicit */int) arr_1 [i_1 - 1]);
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-21772))));
}
