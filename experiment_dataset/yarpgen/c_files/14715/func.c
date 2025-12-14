/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14715
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 720732883U)) ? (((/* implicit */int) ((signed char) min((8986797755206755649LL), (((/* implicit */long long int) var_0)))))) : (((/* implicit */int) var_14))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) 8U);
        var_18 = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) (short)-14342)) : (((((/* implicit */_Bool) (short)-14341)) ? (((/* implicit */int) (short)-25796)) : (((/* implicit */int) (short)-25773)))))))));
        var_19 *= min((var_5), (((/* implicit */short) ((min((((/* implicit */long long int) arr_1 [i_0])), (var_7))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)16] [(signed char)16])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))));
        arr_2 [(short)4] [i_0] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (var_11))), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [3U])) ? (-1LL) : (5899576669529299701LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1]);
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_20 = (short)14342;
            var_21 = ((/* implicit */signed char) ((short) var_15));
        }
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((((unsigned int) var_13)) >> ((((~(var_10))) + (8822290712801930205LL))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [(short)8] [i_2] [i_5 - 2] [i_2])))))));
                    arr_16 [i_2] [i_4] [i_2] [i_5] = -5899576669529299702LL;
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_15 [(short)5] [i_2] [(short)12] [(short)1])))));
    }
}
