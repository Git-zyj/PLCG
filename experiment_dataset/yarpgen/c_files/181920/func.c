/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181920
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) ((arr_1 [i_0 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))));
            arr_7 [i_0 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65509)))))));
            var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 + 2]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (var_11)));
            arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_3 [i_0 - 1] [i_2] [i_0 - 1])) - (((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6924))) : (arr_8 [i_0] [i_2] [i_2])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_1 [i_0 + 2]))));
            /* LoopNest 2 */
            for (short i_4 = 4; i_4 < 10; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned short) var_5);
                        arr_21 [i_0] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((1233047130895477687ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                        arr_22 [i_0] [i_0] [i_4] &= ((/* implicit */unsigned int) (_Bool)1);
                        var_18 = ((((/* implicit */int) arr_15 [i_0 + 2])) - (((/* implicit */int) (signed char)101)));
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) arr_5 [i_0 - 2]);
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1876374640954404748LL)))))));
            var_21 += arr_13 [i_0];
        }
        arr_23 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) - (1233047130895477682ULL)));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 22; i_6 += 1) 
    {
        var_22 -= ((/* implicit */long long int) arr_25 [0LL]);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_26 [i_6 - 1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (9223372036854775807LL)))));
        var_24 = ((/* implicit */long long int) ((short) (signed char)(-127 - 1)));
    }
    var_25 &= var_3;
}
