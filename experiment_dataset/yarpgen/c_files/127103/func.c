/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127103
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
    var_20 = ((/* implicit */short) ((min((((((-6177519559043772379LL) + (9223372036854775807LL))) << (((8738662681215544956LL) - (8738662681215544956LL))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)4255))))))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]) <= (arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]))))) > (((((arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]) + (9223372036854775807LL))) >> (((arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]) + (2811602725390021756LL))))))))));
                                arr_11 [i_0 + 1] [(unsigned char)2] [i_2] [i_3] [i_4 - 2] &= ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_14)) ? (arr_7 [i_2] [i_2] [i_2] [(signed char)14] [i_2]) : (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)26420))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(min((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), ((-(9223372036854775807LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (((+(((/* implicit */int) var_16)))) > (((/* implicit */int) var_13))))))))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) ((var_14) & (((/* implicit */long long int) var_5))))) ? ((~(((/* implicit */int) (short)-4253)))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_16))));
    var_26 = ((/* implicit */long long int) ((unsigned short) (signed char)127));
}
