/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106121
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
    var_12 += ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_1 + 3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (unsigned char)252))))) ? (((/* implicit */int) min(((unsigned char)252), ((unsigned char)3)))) : (((/* implicit */int) min(((unsigned char)249), (((/* implicit */unsigned char) (signed char)-109)))))))) : (min((((/* implicit */long long int) var_1)), (-1630859504918318223LL))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 2]))) : (-1630859504918318217LL))))));
                        var_15 = ((int) arr_9 [i_0 + 1] [i_0 + 1]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((((/* implicit */int) ((signed char) 1630859504918318222LL))) < (((((var_6) ? (((/* implicit */int) (unsigned short)41342)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_7))))))));
                        arr_14 [i_2] [i_2] = ((/* implicit */signed char) (~(((int) arr_11 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
                        var_17 |= ((/* implicit */unsigned char) ((max((var_3), (((/* implicit */long long int) ((((-455194567) + (2147483647))) << (((((/* implicit */int) var_8)) - (181)))))))) >> (((-1058476429) + (1058476443)))));
                        var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) + (((/* implicit */int) ((unsigned char) var_8))))));
                    }
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned short) (((~((~(((/* implicit */int) (signed char)0)))))) ^ (((((/* implicit */int) var_4)) | (arr_4 [i_0 + 1] [(_Bool)1] [i_1 + 3])))));
                        arr_18 [i_0] [i_2] [i_2] [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_16 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */int) (unsigned short)12088)))) : (((arr_16 [i_0] [i_0] [i_0] [i_2]) << (((((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 3])) - (230)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 11; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) ((signed char) (unsigned char)6)))));
                                var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1] [i_6 - 1])) ? ((+(var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_1 - 1] [i_1 + 2] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_7])))))));
                                var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)3)) : (((((/* implicit */_Bool) (unsigned short)12077)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */_Bool) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_31 [i_0] [i_0] = ((min((((/* implicit */int) arr_11 [i_0] [i_8] [(_Bool)1] [i_9])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_10))))) / (((/* implicit */int) ((signed char) 2026644436))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) var_4);
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0 + 1] [i_0 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_8] [i_9])) : (max((((/* implicit */int) var_4)), (var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_0 + 1] [i_11 + 1] [i_11 + 1])) ^ (((/* implicit */int) var_4))))) : ((~(((arr_9 [i_9] [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))))));
                                arr_37 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)13)))) ? (-1630859504918318223LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)215)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)38))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (int i_14 = 1; i_14 < 12; i_14 += 2) 
                {
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (arr_28 [i_0 + 1])))) ? (var_9) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)145))))))));
                        var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0 + 1] [i_14 + 1]))) & (11LL)))));
                        arr_46 [13LL] [13LL] [i_14 + 2] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) arr_25 [i_14] [i_0] [i_13]))), (((((/* implicit */_Bool) arr_40 [i_0 + 1] [i_12] [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */long long int) ((arr_12 [i_0] [i_12] [i_14 + 2]) & (((/* implicit */int) (unsigned char)143))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_14] [i_13]))) : (var_3)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            for (unsigned char i_16 = 4; i_16 < 11; i_16 += 1) 
            {
                {
                    var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_20 [i_16 + 2] [i_16] [i_16 - 1] [i_16] [i_16] [i_16 + 2])) : (((/* implicit */int) arr_20 [i_16] [i_16] [(_Bool)1] [i_16 - 4] [11LL] [i_16 - 3]))))) ? (((/* implicit */int) ((arr_20 [12] [(unsigned char)10] [i_16 + 3] [i_16 + 3] [i_16] [i_16 + 3]) || (arr_20 [i_16 - 1] [i_16] [12] [6] [8] [i_16 - 1])))) : (((/* implicit */int) max(((unsigned char)16), (arr_36 [(_Bool)1] [i_16 - 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_28 [i_18])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (signed char)82)))), ((-(((/* implicit */int) var_6))))));
                                var_30 += ((/* implicit */signed char) ((_Bool) ((((_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_55 [i_15] [i_17] [i_18])) : (((/* implicit */int) (!(var_6)))))));
                            }
                        } 
                    } 
                    arr_56 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)83)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)170)) % (((/* implicit */int) (unsigned char)240))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_22 [(_Bool)1] [(_Bool)1] [i_16] [i_16] [i_16]))) : (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_16 + 1]))))));
                    arr_57 [i_15] = ((/* implicit */_Bool) var_11);
                }
            } 
        } 
    }
}
