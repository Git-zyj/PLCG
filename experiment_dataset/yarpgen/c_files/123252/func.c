/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123252
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
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0 + 4] [i_0] [i_0 - 1] [i_1] &= arr_7 [i_0] [i_0 - 3] [i_0] [i_3];
                                arr_14 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) arr_6 [(unsigned char)20] [i_1] [i_2]);
                                var_20 = ((/* implicit */unsigned char) arr_10 [15LL] [i_3] [15LL] [i_3] [i_4] [i_2] [i_3]);
                                var_21 -= ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_1 [i_0])));
                                var_22 = ((/* implicit */short) (signed char)-104);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0 - 4] [i_0 - 4])) / (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 4] [i_0] [i_0 + 3] [i_0 + 3]))))) ? (min((((/* implicit */long long int) arr_3 [i_0] [i_0 + 4] [i_0 + 1])), (-9LL))) : ((+(arr_0 [i_0 + 2] [i_0 + 2])))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((min((((/* implicit */unsigned short) var_0)), (max(((unsigned short)32768), (((/* implicit */unsigned short) var_4)))))), (((/* implicit */unsigned short) var_15))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-3)) != (((/* implicit */int) (unsigned short)32774))))) >= (((/* implicit */int) min((((/* implicit */signed char) var_1)), (var_16))))))) - ((-(((/* implicit */int) (unsigned short)32780))))));
}
