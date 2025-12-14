/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109154
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
    var_12 = ((/* implicit */_Bool) (unsigned short)14404);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = (_Bool)0;
                    var_14 |= ((/* implicit */unsigned short) (((+(((16853574923303944283ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_0] [(_Bool)1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_3 - 1] [8ULL] [8ULL] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1]))));
                                arr_17 [i_4] [i_0] [i_2] [(unsigned char)7] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_4 + 1] [i_0] [i_2]))))) ? (((/* implicit */int) max((arr_12 [i_0] [i_1] [i_4 + 2] [i_0] [i_4 + 1]), (arr_12 [i_0] [15ULL] [i_4 - 1] [i_0] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_10);
    var_16 = var_2;
}
