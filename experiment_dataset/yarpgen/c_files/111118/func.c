/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111118
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_5))))) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (var_4))) - (((/* implicit */unsigned long long int) var_6))))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 |= ((/* implicit */unsigned short) (short)0);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) : (((long long int) (short)4)))) <= ((+(((long long int) arr_5 [(signed char)4] [i_1] [i_1]))))));
                arr_7 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1533873372068725833ULL), (((/* implicit */unsigned long long int) (signed char)-38))))) ? (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned short)5761)) : (((/* implicit */int) (unsigned short)5759)))) : ((+(((/* implicit */int) arr_3 [i_0 - 2]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = arr_8 [i_0] [i_2] [i_2];
                                arr_15 [i_1] [(short)6] [2] [10] [i_0] |= ((/* implicit */long long int) ((_Bool) (short)9));
                                var_19 = ((/* implicit */signed char) 5166906729681330761LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
