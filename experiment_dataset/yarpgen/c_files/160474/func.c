/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160474
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) 269719000U))))))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28365))))) : (var_10))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) (((_Bool)1) ? (130816U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152)))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_18 [i_1] [i_3 - 2] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)224)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_16)), (arr_17 [i_0 - 1] [(short)16] [i_3] [i_3] [i_4] [i_1]))))) : (max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 3] [i_2] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)17] [i_0 - 1]))) : (var_6)))));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                    } 
                } 
            } 
            arr_20 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_2 [i_0])), (-5134602140385645490LL))) >= (((/* implicit */long long int) (-(((/* implicit */int) min((arr_4 [i_0 + 1] [i_1 + 2] [i_1]), (((/* implicit */signed char) (_Bool)1))))))))));
        }
    }
    for (int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [(short)19])))))));
        var_21 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_0 [2ULL] [i_5])), (max((((/* implicit */unsigned long long int) 5134602140385645483LL)), (14578061913613647369ULL))))), (((/* implicit */unsigned long long int) (signed char)63))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_30 [i_5] [i_5] [i_7] = ((/* implicit */_Bool) ((short) (unsigned short)7));
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        arr_33 [i_5 + 1] [i_5 + 3] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)152))));
                        var_22 |= ((/* implicit */signed char) var_4);
                    }
                    for (int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_4 [i_5] [(signed char)6] [i_9]);
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_5 + 3] [i_6 - 1] [i_7] [i_5 - 1] [i_9 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5 - 1] [i_6 + 1] [i_7] [i_9] [i_9 - 1] [i_7])))), ((+(((/* implicit */int) (unsigned char)0)))))))));
                        var_25 = ((/* implicit */unsigned short) ((_Bool) (short)480));
                        arr_37 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_5] [i_5 - 1] [i_6 - 1] [i_6 - 3])))) & (((unsigned long long int) ((((/* implicit */int) var_9)) << (((arr_36 [i_5] [i_5] [(_Bool)1] [i_6 - 2] [i_5 + 2] [i_5]) - (293298985531037346LL))))))));
                    }
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        var_26 = ((/* implicit */short) 0LL);
        arr_42 [i_10] [i_10] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4543344875331801121LL))) >= (max((arr_39 [i_10]), (arr_39 [i_10])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 1) 
        {
            var_27 ^= ((((/* implicit */int) ((unsigned char) min((1482524447U), (((/* implicit */unsigned int) (_Bool)1)))))) >= (((/* implicit */int) var_2)));
            var_28 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_38 [i_11 - 1])) + (((/* implicit */int) arr_38 [i_11 - 1])))));
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 24; i_12 += 1) 
            {
                for (unsigned char i_13 = 3; i_13 < 24; i_13 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_50 [i_13]);
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            arr_53 [i_14] [i_12 - 1] [i_10] = ((/* implicit */short) arr_46 [i_13] [i_13] [i_13 - 3] [i_13]);
                            var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 1947725198U)) ? (((/* implicit */int) (short)15032)) : (((/* implicit */int) (unsigned short)49154)))), (((/* implicit */int) arr_52 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13 + 1])))))));
                            arr_54 [i_10] [(unsigned char)0] [(short)12] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) ((signed char) var_0)))))) ? (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_41 [i_12])), (58720256U)))), (max((((/* implicit */long long int) var_11)), (var_8))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (signed char)57))))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 23; i_15 += 3) 
                        {
                            arr_57 [i_15] [i_11] = ((/* implicit */unsigned long long int) ((596506945U) >> (((15872ULL) - (15870ULL)))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_46 [i_10] [i_11] [i_12] [(unsigned char)17]))) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) arr_55 [i_15] [i_15] [i_15] [i_15] [i_11 + 1] [i_11 + 1]))));
                            arr_58 [i_15] [i_13] [i_13] [i_15] [i_12] [i_11] [i_10] = ((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_11 + 1] [i_12 + 1] [i_12 + 1] [i_15] [(_Bool)1] [i_12]))) < (var_1));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            arr_62 [(_Bool)1] [i_13 - 2] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [(unsigned char)23] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_12 - 2]))) : (9ULL)));
                            var_32 = ((/* implicit */int) var_17);
                        }
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_8) / (max((arr_39 [i_10]), (((/* implicit */long long int) (signed char)-29))))))))))));
    }
    var_34 = ((/* implicit */unsigned long long int) ((var_12) >= (((/* implicit */int) var_11))));
}
