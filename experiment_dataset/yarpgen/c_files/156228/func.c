/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156228
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
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [16ULL])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((((/* implicit */_Bool) 2184079209U)) || (((/* implicit */_Bool) arr_0 [i_0] [10ULL])))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_10))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        var_24 &= ((/* implicit */unsigned long long int) (unsigned short)31976);
        var_25 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((signed char) var_13))), (arr_4 [i_1]))) ^ (((/* implicit */unsigned long long int) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_26 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (arr_6 [i_1 + 2] [(signed char)9] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned long long int) ((arr_2 [i_2 + 1]) % (371839014U))))));
                    var_27 ^= max((2184079209U), (3923128283U));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_28 = var_9;
                        var_29 = ((/* implicit */signed char) -2147483618);
                    }
                    var_30 = ((/* implicit */unsigned long long int) var_8);
                    arr_13 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)15342)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [(short)12] [(short)12])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)6] [i_3])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), ((unsigned short)13)))))))));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) 2110888094U);
        var_32 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_1)) | (arr_6 [i_5] [i_5] [i_5])))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
    {
        var_33 = ((/* implicit */long long int) arr_18 [i_6]);
        var_34 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned int) var_14))));
        var_35 = ((/* implicit */signed char) ((((arr_17 [i_6] [i_6 + 2]) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 2])) : (((/* implicit */int) arr_17 [6] [i_6 + 1])))) & (((/* implicit */int) arr_17 [i_6] [i_6 - 1]))));
        var_36 ^= ((/* implicit */unsigned int) var_3);
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_37 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (short)15342)) + (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(var_9))))))), (2083564891U));
        var_38 |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (unsigned short)65528))));
        var_39 = ((/* implicit */_Bool) min((var_39), (var_14)));
        var_40 -= ((/* implicit */unsigned int) (signed char)42);
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) -9200093913687812242LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_18 [i_7]))))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_42 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_10 [(unsigned short)3] [(unsigned short)3] [i_8] [i_8])) ? (max((arr_18 [(signed char)3]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((-2147483599), (2147483599)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_2))) | (min((((/* implicit */int) var_11)), ((-2147483647 - 1)))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_30 [i_8] [i_9] [(short)5] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)235)), (var_1)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */short) max((arr_4 [i_8]), ((-(arr_4 [i_8])))));
                                var_44 ^= ((/* implicit */unsigned long long int) var_9);
                                var_45 = ((/* implicit */long long int) (short)16388);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_46 *= ((/* implicit */unsigned int) (short)1698);
                                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_8 [i_14] [i_10] [i_8]) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) arr_31 [i_8] [i_9] [i_10] [i_13] [i_14] [i_14])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_48 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8] [i_8]))));
    }
    var_49 = ((unsigned long long int) var_11);
}
