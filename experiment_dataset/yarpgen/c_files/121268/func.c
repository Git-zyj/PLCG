/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121268
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)241))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (arr_3 [i_3] [i_1]) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_7 [12U] [i_1] [i_2 - 2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_0]))))))) : (min((8388607U), (((/* implicit */unsigned int) arr_6 [i_2 - 1]))))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [12LL] = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((/* implicit */int) (short)7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (var_7)));
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            arr_23 [i_4] [i_4] [i_4] [(short)15] = ((/* implicit */_Bool) (unsigned short)65535);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) var_15)) : (min((0ULL), (((/* implicit */unsigned long long int) var_17))))))) ? (((((/* implicit */_Bool) var_19)) ? (min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) : ((~(18446744073709551612ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_6])) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65526)) << (((((/* implicit */int) (unsigned char)251)) - (250)))))))))));
                        }
                    } 
                } 
                arr_24 [i_4 - 1] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (arr_19 [i_4 - 1] [(unsigned short)5] [i_4 - 1]))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) ((short) arr_22 [i_5] [i_5] [i_4 - 1]))) ? (((((/* implicit */int) var_16)) - (((/* implicit */int) var_12)))) : (arr_13 [i_5] [i_5 - 1])))));
                arr_25 [7U] [i_5 - 2] = ((/* implicit */unsigned char) max((min((arr_14 [i_4 - 2]), (((4294967285U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_15)), (var_13))) > (((/* implicit */long long int) arr_13 [i_5 - 1] [i_4 + 1])))))));
            }
        } 
    } 
}
