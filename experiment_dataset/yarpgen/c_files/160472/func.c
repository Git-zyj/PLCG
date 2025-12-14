/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160472
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((((/* implicit */int) arr_0 [i_0 + 2])) % (-518480524));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) (~(arr_11 [i_0 + 1] [i_2 - 1] [i_3 - 1])));
                        var_14 = ((/* implicit */unsigned char) (-(518480523)));
                        arr_13 [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) 2936538371848059019LL));
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_2 - 1] [i_3 - 1]))));
                    }
                } 
            } 
            var_16 ^= ((/* implicit */_Bool) ((short) arr_1 [i_0] [(unsigned char)17]));
            arr_15 [i_1] = ((((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 1] [i_0] [i_1 + 2])) < (518480523));
        }
        for (int i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
        {
            var_17 |= ((/* implicit */short) (+(((/* implicit */int) arr_16 [i_0 - 1] [i_0]))));
            arr_18 [2ULL] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-518480523) / (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) 0))));
        }
        for (int i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
        {
            arr_22 [i_5] [i_5] = ((/* implicit */signed char) arr_4 [i_0 + 2]);
            arr_23 [i_5] [i_0] [i_5] = arr_21 [i_5] [i_5] [i_5];
            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [16] [i_5 + 2] [i_5 + 1] [i_5 - 1]))));
        }
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0 + 1])) + (((/* implicit */int) arr_7 [i_0 + 1]))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55843)) ? ((((-(9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) (short)-14))));
}
