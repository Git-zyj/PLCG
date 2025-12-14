/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144320
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
    var_12 += ((/* implicit */unsigned short) min((((var_10) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) (signed char)31))))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1))));
    var_13 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = (-(((((((/* implicit */_Bool) arr_3 [(short)1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_1 [(short)9] [(short)9])))) / (((/* implicit */int) var_1)))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (short)31268)) > (((arr_2 [i_0 + 2] [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (min((279501734), (-1598378016))))))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 1]))) ? (((/* implicit */int) min((arr_1 [i_0 + 4] [3LL]), ((short)-28884)))) : (((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_2 [(signed char)6] [(_Bool)1]))))) ? (((((/* implicit */int) arr_1 [(signed char)10] [i_1])) + (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) : (((arr_3 [(signed char)10] [(signed char)10] [(signed char)10]) + (((/* implicit */int) (_Bool)1))))))));
                var_16 |= (((((_Bool)1) ? (-1913914157) : (((/* implicit */int) (short)-32761)))) & (-340873274));
            }
        } 
    } 
}
