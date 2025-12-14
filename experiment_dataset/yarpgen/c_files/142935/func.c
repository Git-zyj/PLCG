/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142935
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
    var_16 += var_7;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) arr_2 [(short)7] [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_18 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_14)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_3])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) ^ (var_13)))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (arr_6 [i_0] [i_0] [(short)1] [i_0]))) : ((~(arr_6 [(_Bool)1] [9U] [(_Bool)1] [(signed char)5])))))));
                        arr_9 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) var_13);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 1] [i_4 - 1])) > (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2] [i_4 - 1]))))), (arr_7 [i_1 + 1] [i_1 + 1] [i_4 - 2]))))));
                var_20 -= ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        {
                            arr_19 [i_0] [8] [7U] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) | (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((arr_10 [i_4 - 1]) == (arr_10 [i_0])))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (var_9))) + (((((/* implicit */int) arr_5 [i_6] [i_6] [4LL] [4LL])) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_17 [i_6 + 2] [i_5 + 1] [i_0] [i_4 - 2] [i_0] [i_0]), (arr_16 [i_0] [i_1] [i_4 - 1] [i_5 - 1] [i_6 + 1] [i_6] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : ((-(arr_0 [i_0])))));
                        }
                    } 
                } 
            }
            for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                var_22 &= ((((/* implicit */_Bool) ((arr_12 [i_7 + 1] [i_0]) ? (var_14) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_7 - 2]))))) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_22 [i_1] [i_1] [i_0])))), (((/* implicit */int) var_15))))) : (((min((var_2), (((/* implicit */unsigned long long int) var_0)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7))))));
                var_23 -= ((/* implicit */long long int) ((var_8) >= (((/* implicit */long long int) arr_16 [6ULL] [i_1 - 2] [i_7] [i_7 - 2] [i_1] [i_7] [(unsigned char)9]))));
                var_24 = var_7;
                arr_23 [i_7 + 1] [i_1 - 2] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_12 [i_1] [i_0]) ? (arr_17 [i_1] [i_1 - 1] [i_7] [i_1 - 1] [(unsigned char)2] [i_1]) : (var_10)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_7 + 1] [i_0] [i_7 + 1] [7ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) : (arr_18 [i_0] [i_0] [i_1] [(short)9] [i_7 - 1] [i_7 - 1])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_17 [(short)4] [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7 + 1])) : (var_7))))))));
            }
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (short i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) * (var_14)))) ? (((var_2) << (((((/* implicit */int) arr_20 [i_10] [(short)1] [i_8])) - (6869))))) : (arr_10 [i_0])))) || (((/* implicit */_Bool) (~(arr_18 [i_9] [i_9] [(unsigned char)9] [i_9] [i_9 - 1] [i_9]))))));
                            var_26 *= ((((/* implicit */_Bool) ((18346078474034874904ULL) - (((/* implicit */unsigned long long int) 3210425039893844709LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (((arr_11 [i_8] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) var_10)))))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_14)) ? (arr_27 [i_8] [(unsigned char)0] [(signed char)0]) : (arr_29 [i_0] [i_1 - 1] [i_1 - 1] [i_0]))) : (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_13 [i_0])) : (var_10)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned short) arr_18 [3U] [5ULL] [3U] [i_11] [i_0] [i_0]);
                        arr_38 [i_0] [i_11] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1021133438U)) ? (((/* implicit */int) (unsigned short)30169)) : (((/* implicit */int) (unsigned short)49483))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) arr_4 [i_0]);
        }
        var_29 = ((/* implicit */unsigned short) var_4);
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0])) ^ (var_10)))) ? (((((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */int) var_5))))) | (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) & (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_42 [(unsigned short)6] [i_14] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_41 [i_14])))) ? ((-(arr_41 [i_14]))) : (arr_41 [i_14])));
        var_31 ^= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_14] [i_14])) ? (((/* implicit */int) var_15)) : (var_3)))) / (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_40 [(unsigned short)12] [i_14]) * (var_14)))) ? (((/* implicit */int) ((arr_39 [i_14] [i_14]) <= (arr_40 [i_14] [i_14])))) : (arr_41 [i_14]))))));
    }
    for (short i_15 = 1; i_15 < 10; i_15 += 4) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((-610971830) - (((/* implicit */int) (unsigned char)46))));
        var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_40 [i_15 + 1] [i_15 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (unsigned short)49491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (10448600152523536317ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_3)))) ? (((/* implicit */unsigned long long int) (-(arr_41 [i_15 + 1])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (16727135817152643115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23737))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_15] [i_15 - 1])))))) - (((((/* implicit */_Bool) (short)27347)) ? (((/* implicit */long long int) -235330193)) : (-3210425039893844709LL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_34 = ((/* implicit */short) (((!(((((/* implicit */int) arr_43 [i_15])) > (var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [(unsigned short)0] [(unsigned short)0] [i_15] [i_18]))) : (var_13)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_46 [i_15])) : (arr_40 [i_15] [(short)8]))) : (var_14))) : (((((((/* implicit */int) (short)-32760)) > (((/* implicit */int) (short)0)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19320)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-88)))))))));
                        arr_56 [i_15] [i_16] [i_17] [i_15] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_46 [i_15]) << (((((/* implicit */int) var_5)) - (25874))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_18] [i_17] [i_16] [(short)7])) ? (((/* implicit */int) var_1)) : (arr_50 [i_15])))))))) : ((((!(((/* implicit */_Bool) var_4)))) ? ((-(arr_40 [i_15] [i_16]))) : (((/* implicit */unsigned long long int) ((arr_48 [i_17] [i_18]) ? (((/* implicit */int) arr_54 [i_18] [i_17] [8] [i_16] [i_15 - 1])) : (var_3)))))));
                    }
                } 
            } 
        } 
    }
}
