/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10583
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
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (_Bool)1);
        arr_3 [(unsigned char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-70))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (16777215LL)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_0 - 1] = ((/* implicit */signed char) 16777215LL);
            arr_7 [i_0] [13ULL] = ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2])) ? (-16777216LL) : (9223372036854775807LL));
        }
        var_17 = 16777215LL;
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967265U)) || (((/* implicit */_Bool) -9099417866823244390LL))));
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_19 -= ((((((/* implicit */_Bool) arr_8 [i_4] [i_2])) && (((/* implicit */_Bool) 9099417866823244418LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 1099511627775LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1099511627776LL))));
                        var_20 = ((/* implicit */long long int) ((unsigned short) arr_10 [i_0 - 1] [i_3]));
                        arr_17 [(short)14] [i_3] [i_2] [i_2] [i_3] [(unsigned short)6] = ((/* implicit */unsigned short) (~(var_5)));
                    }
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)134)))));
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) (short)-256))));
                        var_23 = ((/* implicit */short) (-((((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_7)) ? (9099417866823244416LL) : (((/* implicit */long long int) arr_5 [i_2] [15LL])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)206)) >> (((((/* implicit */int) var_6)) - (55))))))))));
                    }
                    for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 262143U))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) ((unsigned char) arr_13 [i_3] [i_3 + 2] [i_0 + 2] [i_3]));
                            arr_27 [i_7] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */short) (-(arr_23 [i_3] [(unsigned char)0] [i_3 - 1] [i_6 + 1])));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 3286552897258481993LL)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))));
                            var_28 += ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) var_5))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 17; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (-(((-9099417866823244440LL) ^ (var_8))))))));
                            arr_30 [i_8] [i_3] [i_6] [i_3] [i_8 + 2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))) : (2438013688U))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_8 - 2] [i_8 - 1] [i_6] [i_6 - 1] [i_6])) & (((/* implicit */int) (unsigned char)170))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (((_Bool)1) ? (-7835042718284064675LL) : (((9223372036854775791LL) + (-9099417866823244390LL))))))));
                        }
                        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_33 [i_3] [(signed char)7] [i_3] = ((/* implicit */_Bool) var_14);
                            var_32 = ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_2] [12] [11LL] [i_3])) || (((/* implicit */_Bool) var_5)))))) : (-21LL));
                        }
                    }
                    var_33 = ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_2));
                }
            } 
        } 
    }
}
