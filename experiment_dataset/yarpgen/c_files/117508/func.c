/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117508
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
    var_11 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_12 &= arr_7 [i_4] [i_2 + 3];
                            var_13 = ((/* implicit */unsigned int) 9223372036854775807LL);
                        }
                        for (short i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            var_14 &= ((/* implicit */unsigned long long int) var_9);
                            arr_14 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)138)) - (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) (unsigned char)116))))) : (((((/* implicit */_Bool) 15U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_5 - 1] [i_5] [i_2 + 3])) << (((var_5) - (2492133615U)))))), (((unsigned long long int) (short)-32393))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18U)))) ? (((((/* implicit */_Bool) (short)4920)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : ((-(4294967288U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1]))))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            arr_18 [i_3] [(short)18] [i_1] [i_3] = ((/* implicit */long long int) ((27U) != (3033769292U)));
                            var_16 += ((/* implicit */unsigned int) ((long long int) 11U));
                            var_17 = ((int) arr_0 [i_6 - 1]);
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_22 [i_0] [i_1 - 1] [i_2 + 2] [i_2 - 1] [(unsigned short)7])))));
                            var_19 |= ((/* implicit */signed char) var_10);
                            var_20 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) 49163337U)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_3 [i_0] [i_0] [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((50236158U) != (4294967294U))))))));
                        }
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967281U)) ? (max((((((/* implicit */_Bool) var_2)) ? (var_4) : (arr_20 [i_0] [i_1 - 1] [i_1] [i_2] [(unsigned char)18]))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)12305)) * (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 27ULL))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_3] [i_8] = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_4 [i_1 + 1] [i_2 + 3])))));
                            arr_27 [i_8] [i_3] [i_1] [i_3] [i_8] = (-(min((((unsigned int) var_9)), (((/* implicit */unsigned int) (short)240)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((max((arr_3 [i_0] [i_0] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3450481321U)) ? (var_10) : (var_6)))))), ((((~(18446744073709551588ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38908)))))))));
                            arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) 39U)), (14457562977714791567ULL))) <= (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_1 + 1] [i_1])))))) | (((/* implicit */int) min(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_8))));
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_9] = ((/* implicit */signed char) ((long long int) (+(3450481339U))));
                        }
                    }
                    arr_32 [i_0] [i_0] [(unsigned char)20] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12)) << (((6900757829814228440LL) - (6900757829814228415LL)))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551613ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))) >= (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_9 [i_1] [i_1] [i_2] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        arr_36 [i_10] = ((/* implicit */short) ((unsigned long long int) var_3));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (12987393847428384627ULL)));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1738305603U)) ? (((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_10])) : (arr_13 [i_10] [(unsigned char)10])))) ? (var_7) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_10] [22U] [i_10] [i_10] [i_10] [i_10] [(unsigned short)6])), (((unsigned short) 8010111277556269747LL)))))));
    }
    for (short i_11 = 1; i_11 < 22; i_11 += 3) 
    {
        var_27 *= ((/* implicit */_Bool) var_5);
        arr_40 [(unsigned short)22] = ((/* implicit */short) min((min((min((((/* implicit */unsigned int) 1589733828)), (9U))), (min((((/* implicit */unsigned int) (signed char)124)), (var_6))))), (((/* implicit */unsigned int) var_3))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_38 [i_11 + 2]), (((/* implicit */unsigned int) (_Bool)1))))) ? (var_5) : (arr_38 [i_11])));
    }
    /* LoopSeq 1 */
    for (unsigned int i_12 = 1; i_12 < 14; i_12 += 3) 
    {
        arr_45 [i_12 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (min((var_4), (((/* implicit */unsigned int) ((short) 15974789810109299431ULL))))) : (min((((/* implicit */unsigned int) var_8)), (var_6)))));
    }
}
