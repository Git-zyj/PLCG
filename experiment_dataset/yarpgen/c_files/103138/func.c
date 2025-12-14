/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103138
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_10))));
                                arr_11 [i_2] [i_4] [(_Bool)1] [i_2] [i_2] [(signed char)12] = ((/* implicit */int) arr_0 [i_1]);
                            }
                            var_21 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_1])), (((long long int) var_5))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) var_12);
                var_23 = ((/* implicit */unsigned short) var_17);
                arr_12 [21LL] [i_1] = ((_Bool) max((1122198051186629790ULL), (((/* implicit */unsigned long long int) (unsigned char)194))));
                var_24 *= arr_3 [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        arr_15 [i_5] = ((/* implicit */short) max(((unsigned short)15), (((/* implicit */unsigned short) (short)-11319))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned char i_8 = 4; i_8 < 23; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (var_9)));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [(signed char)18] [i_6] [(unsigned char)14] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [16U] [i_6] [4] [i_7] [i_8] [i_9]))) : (((unsigned int) ((unsigned short) var_9))))))));
                            arr_28 [(signed char)1] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */int) arr_20 [16]);
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((12496915239106536247ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7])))))) : (((/* implicit */int) arr_24 [i_8])))))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_17 [i_5] [i_5] [i_5]))));
                    }
                } 
            } 
        } 
        var_29 |= ((/* implicit */_Bool) var_5);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    var_30 = ((((max((arr_13 [i_11] [15LL]), (arr_23 [i_5] [i_5] [i_5] [i_5]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [(unsigned char)14] [i_5] [i_5]))))) * (((/* implicit */unsigned int) max((((/* implicit */int) arr_24 [i_5])), (((((/* implicit */int) arr_31 [i_5])) / (((/* implicit */int) arr_18 [i_10]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                arr_41 [i_5] [i_5] [(signed char)19] [15] [6U] [15] = ((/* implicit */signed char) max((arr_37 [i_5] [i_5] [19] [3]), (((/* implicit */unsigned long long int) arr_14 [i_5]))));
                                arr_42 [i_5] [i_10] [i_11] [i_5] [(unsigned char)14] [i_12] [i_10] = ((/* implicit */unsigned long long int) max((((unsigned int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_22 [i_5] [(_Bool)1] [i_11] [i_12]) : (arr_32 [i_5] [i_13])))), (arr_30 [i_10] [i_10] [i_11])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        var_31 = ((long long int) max((arr_13 [i_14] [i_14]), (((/* implicit */unsigned int) arr_14 [i_14]))));
        var_32 = ((/* implicit */long long int) max((var_32), (var_6)));
        /* LoopSeq 3 */
        for (short i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            var_33 ^= ((/* implicit */short) ((((((/* implicit */int) arr_31 [i_14])) << (((arr_5 [i_14] [8ULL] [i_15]) + (937842489))))) >= (((/* implicit */int) arr_46 [i_14] [(_Bool)1] [0]))));
            arr_48 [i_14] = ((/* implicit */unsigned char) ((((unsigned int) arr_46 [i_14] [(signed char)18] [(signed char)18])) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_14] [i_14] [20] [20])))));
            var_34 = ((/* implicit */int) var_5);
            var_35 ^= ((/* implicit */unsigned short) ((arr_21 [i_14] [i_14] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_17 [i_14] [i_14] [i_14])), (arr_8 [i_14] [i_14] [i_14] [i_14] [i_14])))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_46 [3U] [i_15] [(unsigned char)15])) : (((/* implicit */int) arr_2 [(unsigned char)0] [(unsigned char)0])))))))) : (arr_37 [15ULL] [(unsigned char)6] [10U] [i_14])));
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            var_36 = ((/* implicit */int) arr_47 [i_14] [11]);
            arr_53 [i_16] = ((/* implicit */unsigned char) arr_30 [i_14] [i_16] [i_16]);
        }
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                for (long long int i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        {
                            arr_67 [8U] [i_18] [(signed char)18] [i_18] [i_14] = var_1;
                            arr_68 [i_20] [i_18] [i_17] [i_18] [i_18] [i_14] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_39 [i_14] [(unsigned char)2] [(unsigned short)8])), (arr_23 [i_20] [i_18] [i_18] [i_14])));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_23 [i_14] [i_14] [i_14] [16ULL]))));
        }
    }
}
