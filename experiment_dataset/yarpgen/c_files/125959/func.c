/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125959
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            var_20 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) var_9);
            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_2]))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) 3605840545U));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(689126764U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1996))) > (var_15)))), (arr_5 [i_0] [i_0]))))) : (((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_2 [i_0] [i_3])))) ? (689126750U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_18)))))))));
            var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_3] [i_0]))))) ? (((-8250995480744216743LL) % (-8250995480744216769LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1998)) || (((/* implicit */_Bool) 72057044282114048ULL)))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (min((4294967295U), (((/* implicit */unsigned int) (short)-13977)))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)91)), (arr_9 [i_0]))))) | ((+(max((((/* implicit */unsigned long long int) var_17)), (var_15))))));
            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_4]), (3605840566U)))) ? (((((/* implicit */int) (unsigned char)200)) ^ (((/* implicit */int) var_12)))) : (((((/* implicit */int) var_16)) | (((/* implicit */int) (short)11839))))))) ? (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)27395)) : (((/* implicit */int) (_Bool)1))))), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) var_19))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_13))));
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) min((((arr_14 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0]))) : (8547177838197240342LL))), (((/* implicit */long long int) min((((/* implicit */short) arr_14 [i_0])), (var_16))))));
            arr_17 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_0] [i_4] [i_0])), (1570265856U)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned short) 8547177838197240364LL)))))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_23 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_1)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (18374687029427437569ULL)))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(min((arr_0 [(unsigned short)4] [i_5]), (((/* implicit */unsigned int) var_18)))))))));
                    var_26 ^= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) var_16))))), (((unsigned int) 18446744073709551612ULL)))), (((/* implicit */unsigned int) ((short) max((var_2), (((/* implicit */unsigned int) (signed char)91))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_25 [i_7] [i_8]), (((/* implicit */short) arr_18 [i_0])))))))) << (min((((((/* implicit */_Bool) 1570265856U)) ? (arr_11 [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_21 [i_0] [i_0])))))))));
                                var_27 = arr_0 [i_0] [i_0];
                                var_28 = ((/* implicit */short) arr_10 [i_5] [i_5] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) + (min((((/* implicit */long long int) arr_20 [i_0])), (((((/* implicit */_Bool) var_6)) ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 3605840556U))) ? (((/* implicit */int) (_Bool)1)) : ((+(var_19)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        arr_40 [i_9] [i_10] [i_11] [i_12] [i_11] = ((/* implicit */_Bool) var_0);
                        var_31 = ((/* implicit */long long int) ((short) (signed char)-106));
                        var_32 = ((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) (_Bool)0))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_11] [i_10] [i_11] [i_9 + 1])) ? (((/* implicit */int) arr_2 [i_10] [i_12])) : (((/* implicit */int) var_16))))) >= (72057044282114048ULL)));
                    }
                }
            } 
        } 
        arr_41 [i_9] = ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_9 + 1])) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 1]))));
        arr_42 [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) var_18))));
        arr_43 [i_9 + 1] = ((/* implicit */int) var_8);
    }
    /* vectorizable */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        arr_47 [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_45 [i_13])) <= (((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)232)))))))));
    }
    var_35 = ((/* implicit */int) var_2);
    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) var_12))))) >> (((((var_3) ? (-1500602868) : (((/* implicit */int) (unsigned char)214)))) - (204))))) != (((/* implicit */int) var_5))));
}
