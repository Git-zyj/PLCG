/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151477
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(8388604U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 |= ((((((min(((-9223372036854775807LL - 1LL)), (9223372036854775779LL))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((min((arr_0 [i_0]), (arr_0 [i_1]))) + (764868207))) - (42))));
                var_21 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (int i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_2 - 1])))))));
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            arr_10 [i_2] = min((var_1), (min((var_15), (((/* implicit */long long int) arr_5 [i_2 + 3])))));
            arr_11 [i_3] [i_3] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_2] [i_3])), (2570934926U)));
            var_24 = (~(((((/* implicit */_Bool) (unsigned short)38153)) ? ((+(arr_3 [i_2] [i_2] [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 3]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 757234323))));
                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_3 + 1] [i_2 - 3]))));
                var_26 = ((/* implicit */unsigned short) (+(arr_0 [i_3 + 1])));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1))))) * ((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) arr_0 [i_2])))))))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : ((+(((/* implicit */int) arr_8 [i_4] [i_3]))))));
            }
            arr_15 [i_2 + 1] [i_2] = 2570934926U;
        }
    }
}
