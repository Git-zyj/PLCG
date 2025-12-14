/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135573
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
    var_20 |= ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_17))), (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])))) ? (((2532960536U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : ((~(max((arr_3 [i_0] [i_1] [16U]), (2532960524U)))))));
                var_22 += ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) arr_3 [i_2] [i_2] [i_2]);
        var_25 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) 3843534355U)) ? (1762006760U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))) != (((((/* implicit */_Bool) ((arr_1 [i_2]) ? (1762006759U) : (1762006759U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) arr_4 [i_2] [15U] [15U])) ? (2737716492U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17032)))))))));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_2]))));
        var_27 = ((/* implicit */unsigned long long int) (short)-5666);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_28 = ((/* implicit */int) 4294967295U);
            var_29 = ((/* implicit */signed char) ((((_Bool) 974532574)) ? (((/* implicit */int) (short)5666)) : ((+(((/* implicit */int) (_Bool)1))))));
            var_30 = ((((/* implicit */_Bool) (short)5666)) ? (((/* implicit */int) (_Bool)1)) : (974532573));
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_5])) : (5914911413209085579ULL)));
            var_32 = ((4159483741883822075ULL) + (var_16));
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)66)))))));
            var_34 = ((/* implicit */short) ((arr_7 [(short)10]) ? (((unsigned long long int) arr_3 [i_6] [i_6] [(signed char)2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3])))));
        }
        var_35 = ((/* implicit */int) arr_13 [(_Bool)1] [i_3]);
        var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) < ((~(arr_16 [i_3])))));
        var_37 = ((((/* implicit */int) arr_2 [i_3] [i_3])) >= (((/* implicit */int) ((signed char) arr_1 [i_3]))));
    }
}
