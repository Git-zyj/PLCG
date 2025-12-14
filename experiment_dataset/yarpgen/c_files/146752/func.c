/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146752
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned char) var_10);
                    var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? ((+(0))) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) (short)7823)) - (7820)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 = ((arr_14 [(unsigned char)15] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 1]) >= (var_3));
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [(signed char)4] [i_1 + 1] [i_4] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3])) : (-1583580584)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 0U)) ? (-7575509337220216684LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
        var_20 = ((/* implicit */unsigned int) ((-6511413897854350493LL) >= (((long long int) var_0))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        arr_19 [1] [i_5] = ((/* implicit */unsigned char) 0U);
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (short)-16072))));
    }
    for (short i_6 = 3; i_6 < 16; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */_Bool) ((long long int) ((long long int) ((((/* implicit */long long int) arr_22 [i_6])) < (-2744000825132013415LL)))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_27 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2744000825132013414LL)) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((((/* implicit */_Bool) 4294967295U)) ? (-1496420567) : (1496420567))))))));
            var_21 = (short)-16072;
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)102))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (1006632960U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ^ (min((-2744000825132013415LL), (((/* implicit */long long int) 38272684U))))))) : (arr_10 [i_6] [i_6] [i_6] [(signed char)15])));
        arr_28 [i_6 + 4] [i_6] = ((/* implicit */short) (-(max((1034159618U), (((/* implicit */unsigned int) arr_24 [i_6 + 1] [i_6 + 1]))))));
    }
    var_23 ^= ((/* implicit */_Bool) var_12);
    var_24 = ((short) max((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) (unsigned char)185)))), (((27579184) / (1496420567)))));
}
