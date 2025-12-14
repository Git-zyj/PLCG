/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178921
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
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)113)), (var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */_Bool) (unsigned char)4);
                    var_22 = ((/* implicit */signed char) arr_1 [i_1]);
                    var_23 *= ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])) : (14826999760805811209ULL));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (3575497273U)));
                    var_25 = ((/* implicit */unsigned long long int) ((signed char) ((short) 18446744073709551614ULL)));
                }
                arr_13 [i_0] = ((/* implicit */signed char) 0U);
            }
        } 
    } 
}
