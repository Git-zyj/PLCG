/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138850
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned int) ((unsigned short) max((var_17), (((/* implicit */unsigned long long int) (unsigned short)31232)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_21 *= ((arr_0 [i_0]) > (min((((/* implicit */long long int) var_7)), (min((arr_0 [i_1 - 2]), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3])))))));
                                arr_13 [i_0] [(signed char)15] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((var_16), (var_12))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (~(((/* implicit */int) var_18)))))))) ? ((-(((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)65535)))))) : ((+(((((/* implicit */int) (unsigned short)7)) & (((/* implicit */int) (unsigned char)19))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) var_15);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_13);
}
