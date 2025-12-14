/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186435
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)4096)) & (((/* implicit */int) (short)-4096))));
                            var_10 += ((/* implicit */long long int) max(((_Bool)1), (((((arr_8 [i_0] [i_1] [i_0 + 1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [4] [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_11 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) arr_4 [i_0])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13086))))))))));
                        }
                    } 
                } 
                arr_13 [i_0 + 2] [i_0 + 2] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)52450)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3884774296U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))))))));
                var_12 = ((/* implicit */short) arr_3 [i_0 + 3] [(unsigned char)8] [i_0]);
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned char) min((var_0), (var_4)));
    var_14 = ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
}
