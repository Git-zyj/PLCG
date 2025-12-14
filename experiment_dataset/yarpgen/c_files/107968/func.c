/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107968
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
    for (int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 ^= ((((((/* implicit */int) (signed char)-125)) >= (-1791953482))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 - 4] [i_0 + 2]))))) : (7508056062694953366LL));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_0] [(short)15] [i_0] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_2 - 2] [4]), (((/* implicit */int) arr_12 [i_2 - 2] [i_3 + 1] [(_Bool)1] [i_1 + 2]))))) ? ((~(((/* implicit */int) arr_12 [i_2 - 2] [(short)10] [16U] [i_1 + 2])))) : (((/* implicit */int) min((arr_12 [i_2 - 2] [i_1] [i_2] [i_1 + 2]), (((/* implicit */unsigned short) (short)31)))))));
                            var_20 ^= ((/* implicit */short) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_8);
    var_22 = ((/* implicit */unsigned int) var_7);
    var_23 &= ((/* implicit */unsigned int) ((var_11) - (((/* implicit */int) var_8))));
}
