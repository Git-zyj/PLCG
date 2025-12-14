/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126812
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)15)), (var_2)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) min((min(((unsigned short)6987), (((/* implicit */unsigned short) var_4)))), (min((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)31983)))))), (((((/* implicit */_Bool) (+(var_2)))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (3444690595U))))))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)47391)))) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)45559)) - (45530))))))))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_14 = ((/* implicit */signed char) (((+(((/* implicit */int) ((_Bool) arr_5 [i_1] [i_2]))))) | (((/* implicit */int) arr_3 [i_1]))));
                    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)31983))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_16 = (((+(-377827075))) & (((/* implicit */int) ((signed char) var_0))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+((+(377827081))))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (18378894704452185670ULL))), (((/* implicit */unsigned long long int) var_4))))) ? ((~(((unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) var_0)))))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_4]))) ? (((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_0 [i_2])))) >> (((2761933166U) - (2761933140U))))) : ((+(((/* implicit */int) arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (signed char)-113)))), (((((/* implicit */int) arr_14 [i_5] [i_5] [i_2] [i_5] [i_2])) + (((/* implicit */int) (short)10))))))) ? ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16978))) : (var_9))))) : (((/* implicit */long long int) (~((-(-1848556135))))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max(((unsigned short)33552), (((/* implicit */unsigned short) var_3)))))));
                        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */int) (short)-23256)) + (2147483647))) >> ((((~(((/* implicit */int) ((_Bool) var_8))))) + (12)))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)20))));
                        var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)20724)) ? (377827081) : (((/* implicit */int) (signed char)22)))));
                    }
                    var_25 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) 3938492430U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-32764))))))), (((/* implicit */long long int) (((_Bool)1) ? (max((((/* implicit */int) arr_15 [i_2] [i_1] [i_0] [i_0])), (arr_5 [i_0] [i_2]))) : (arr_5 [i_0 + 1] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                                var_27 = ((/* implicit */unsigned long long int) arr_23 [i_9] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned char) (-(var_9)));
                    var_29 += ((/* implicit */short) (+(((unsigned long long int) var_5))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (unsigned short)58269);
                            var_31 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_11] [i_10] [i_7] [i_1] [i_0]))))));
                        }
                        for (short i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) (-(arr_7 [i_7 + 4] [i_12 - 1])));
                            var_33 = ((/* implicit */unsigned short) ((79708652U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45563)))));
                            var_34 = ((/* implicit */unsigned short) var_0);
                        }
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)8570)) ? (((((((/* implicit */int) arr_30 [i_0] [i_0] [i_1] [i_7] [i_10] [i_13] [i_13])) + (2147483647))) >> (((var_9) + (7486961921016583074LL))))) : (((/* implicit */int) arr_20 [i_10] [i_13])))))));
                            var_36 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                            var_37 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        }
                        var_38 = ((((/* implicit */_Bool) (unsigned short)30825)) || (((/* implicit */_Bool) var_9)));
                    }
                    var_39 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_0 + 1] [i_1] [i_7] [i_1] [i_7 + 1] [i_7] [i_1])) >> (((1301606300U) - (1301606280U)))));
                }
            }
        } 
    } 
}
