/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158733
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_12)), (var_15)))))) ? (((((/* implicit */unsigned long long int) ((arr_2 [i_0]) << (((/* implicit */int) (_Bool)1))))) + (max((var_0), (((/* implicit */unsigned long long int) arr_3 [2ULL] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (1010649529U))) * ((-(1010649527U))))))));
                arr_6 [(short)14] [i_1] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */int) var_8))))))));
                var_20 *= ((/* implicit */short) (-(((int) (_Bool)1))));
            }
        } 
    } 
    var_21 *= max((min(((((_Bool)1) ? (((/* implicit */unsigned long long int) -1698547525)) : (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_17)))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)32761)))));
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1057607157)))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_1))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))));
        arr_11 [2LL] &= ((/* implicit */long long int) min((((/* implicit */int) var_4)), (max((((/* implicit */int) (_Bool)1)), (arr_7 [i_2])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = min((((/* implicit */int) arr_0 [i_3])), ((-(((/* implicit */int) (short)28685)))));
        arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(arr_14 [i_3])))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (695358270U)))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */long long int) max((((arr_19 [i_4] [i_4]) ^ (arr_19 [i_4] [i_4]))), (((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (arr_19 [i_4] [i_4]) : (((/* implicit */unsigned int) var_9))))));
        var_22 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((9223372036854775807LL) / (((/* implicit */long long int) var_9)))))) < (((/* implicit */long long int) min((var_17), (4294967286U))))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_15)))));
                    var_24 = max((min((94121621U), (arr_27 [i_7]))), (((/* implicit */unsigned int) (_Bool)1)));
                    /* LoopSeq 1 */
                    for (short i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        arr_32 [i_6] [i_6] [i_7] [i_8 - 2] = ((/* implicit */int) 1015666758933762881LL);
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_5] [i_8] [i_7] [i_6] [i_5] &= ((/* implicit */short) (-(min(((-(var_16))), (((/* implicit */long long int) 4294967295U))))));
                            var_25 *= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((unsigned int) (short)-22634))), (max((((/* implicit */long long int) var_8)), (var_16))))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (arr_31 [i_8 + 1] [i_8] [1U] [i_8 - 2]))))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(((/* implicit */int) var_6)))))));
                            arr_38 [i_5] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1])) < (((((/* implicit */_Bool) 4294967292U)) ? (var_12) : (((/* implicit */int) (short)-7042)))))))));
                        }
                        var_27 = ((/* implicit */int) var_18);
                        arr_39 [i_6] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_12)) : (arr_25 [i_6] [i_8])))) ^ (((arr_37 [i_5] [i_6] [i_6] [i_7] [i_6]) & (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((_Bool) var_10)), ((_Bool)1))))) : (((((((/* implicit */unsigned long long int) var_17)) & (var_0))) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (4200845653U) : (94121643U))))))));
                    }
                    var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 4294967295U)) % (3353673811882552362ULL))) << (((max((((/* implicit */unsigned long long int) 2147483647)), (18446744073709551612ULL))) - (18446744073709551605ULL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (94121604U) : (4294967294U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6])))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1681094521))))) : (max((var_3), (((/* implicit */int) var_5))))))) && (((((((/* implicit */_Bool) arr_24 [15ULL])) || (((/* implicit */_Bool) var_7)))) && ((_Bool)1)))));
    }
}
