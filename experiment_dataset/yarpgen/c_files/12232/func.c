/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12232
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)16383)) : (arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_3] [i_3] [i_3] [(_Bool)1] = (!(((/* implicit */_Bool) var_5)));
                    var_21 = ((/* implicit */unsigned char) ((var_5) / (((/* implicit */unsigned long long int) arr_10 [i_3] [i_2 - 2] [i_1] [i_1]))));
                }
            }
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned long long int) (((~(arr_11 [i_0 - 2] [i_4] [i_4] [1LL]))) < (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(short)3] [i_4])))))));
                var_23 = ((/* implicit */unsigned short) var_3);
                var_24 = arr_4 [i_0];
                var_25 ^= ((/* implicit */_Bool) (-(arr_10 [i_0 + 3] [i_1] [i_1] [i_4])));
            }
            for (short i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 4; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_26 ^= ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_6]))))) < (((/* implicit */int) ((short) arr_20 [i_7 - 4] [i_0] [i_5 - 1] [i_0]))));
                            var_27 = ((/* implicit */_Bool) ((short) var_8));
                            var_28 = ((/* implicit */unsigned long long int) arr_4 [i_7]);
                            var_29 = ((/* implicit */short) arr_1 [i_0 + 3]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) arr_0 [i_8]);
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((short) (+(arr_20 [i_0] [i_1] [i_1] [i_8])))))));
                }
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_32 = ((/* implicit */long long int) ((((arr_11 [i_0] [i_5] [i_5] [i_9]) >= (((/* implicit */long long int) arr_18 [i_0] [i_5] [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_9]))));
                    arr_31 [i_5] [i_1] [i_9] = ((/* implicit */unsigned long long int) (((-(arr_11 [i_0] [i_5] [i_5] [i_9]))) > (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0 - 2])))));
                    var_33 = ((/* implicit */signed char) arr_24 [i_0 - 1] [i_1] [i_1] [(signed char)10] [i_9] [i_9]);
                }
            }
            for (unsigned char i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                var_34 = ((/* implicit */short) var_15);
                /* LoopSeq 1 */
                for (unsigned short i_11 = 1; i_11 < 12; i_11 += 4) 
                {
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_29 [i_1] [i_1]))));
                    arr_38 [i_11] [i_10] [i_10] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (short)16582)) : (arr_2 [i_10 + 1])));
                    var_36 |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) var_10)) - (arr_29 [i_1] [i_10]))));
                }
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) arr_41 [i_0 + 3] [i_0 + 3] [i_10 + 2] [i_12] [10LL] [i_1]);
                            var_38 ^= ((signed char) ((((((/* implicit */int) arr_27 [i_0] [i_0] [3ULL] [i_0 + 3] [i_0 - 3] [i_0 + 3])) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_0 - 3] [i_12] [i_1])) + (29965)))));
                            var_39 &= ((/* implicit */long long int) (!((((_Bool)1) || (((/* implicit */_Bool) var_14))))));
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) arr_3 [i_13] [i_1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    var_41 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 3])) - (((/* implicit */int) arr_45 [i_0] [i_0] [i_0]))));
                    arr_46 [i_14] [i_1] [i_10] [i_14] = ((/* implicit */short) ((arr_0 [i_0 + 3]) > (arr_0 [i_0])));
                }
            }
            var_42 = arr_1 [i_0];
        }
    }
    /* vectorizable */
    for (unsigned short i_15 = 3; i_15 < 19; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 3; i_16 < 20; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                {
                    var_43 *= ((/* implicit */_Bool) 9259911122718139500ULL);
                    var_44 = ((/* implicit */int) arr_52 [i_15]);
                }
            } 
        } 
        var_45 &= ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)151)))) + (2147483647))) >> (((var_10) + (6094048556285756026LL)))));
        var_46 = ((/* implicit */short) min((var_46), (((short) (~(((/* implicit */int) (_Bool)0)))))));
        arr_55 [i_15] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)16582)))))));
    }
    var_47 = ((/* implicit */short) var_14);
    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((var_5) >> (((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) var_12)))) : ((~(((((/* implicit */int) var_17)) - (((/* implicit */int) var_8)))))))))));
    var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) var_7)))))));
}
