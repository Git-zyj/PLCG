/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184256
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((arr_1 [i_2] [i_2]), (((/* implicit */int) var_9))))))) ? (((arr_6 [i_2 - 3] [i_1 - 1] [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned char)246)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-19905))))))));
                    arr_8 [i_0 + 1] [i_1] [i_2 + 1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-19912)))), ((~(((/* implicit */int) var_12))))));
                    var_14 = min((arr_4 [i_0 + 1]), (((/* implicit */unsigned long long int) (~(arr_1 [i_2 - 1] [i_2 - 4])))));
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_4 [i_0 + 1]))))));
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    arr_11 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (short)-19898))))), ((+(arr_6 [i_0 + 1] [i_1 - 2] [i_1 + 1])))));
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */short) arr_10 [i_1]);
                    arr_13 [i_0] [i_0 + 1] [i_3] = ((/* implicit */unsigned short) (+(max((arr_3 [i_0 + 1] [i_0]), (arr_3 [i_0 + 1] [i_0])))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((signed char) min((arr_5 [i_0 - 1]), (((/* implicit */int) var_8)))))));
                    arr_14 [i_3] [(unsigned short)5] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 - 1]))))) ? ((+(967734916))) : (((((/* implicit */_Bool) ((arr_1 [i_3] [i_1]) / (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (arr_5 [i_3]) : (((/* implicit */int) min(((unsigned short)55558), (((/* implicit */unsigned short) var_9)))))))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 7; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (((unsigned short) arr_20 [i_0] [i_1] [i_0] [i_5 + 2] [i_6]))));
                                arr_22 [i_4] = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) arr_18 [i_1] [i_1 - 1] [i_1 - 2] [i_1 + 1]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_18 [i_4] [i_4 + 1] [i_4] [5]))) == (arr_3 [i_1 + 1] [i_4])));
                }
                arr_24 [i_0 + 1] = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_7 = 1; i_7 < 22; i_7 += 3) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-19905))));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 24; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 4; i_10 < 22; i_10 += 2) 
                    {
                        arr_37 [i_8] [i_7] [i_8 - 1] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_9)))))))));
                        var_20 ^= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)10))))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 24; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            arr_42 [i_7 + 1] [i_7 + 1] [i_8] = ((/* implicit */long long int) min(((unsigned short)9978), ((unsigned short)55565)));
                            var_21 = ((/* implicit */short) min((min((arr_32 [i_8 - 1] [i_7 + 2] [i_11 - 1] [i_8]), (arr_32 [i_8 + 1] [i_7 + 2] [i_11 - 1] [i_8]))), ((~(arr_32 [i_8 + 1] [i_7 + 2] [i_11 - 2] [i_8])))));
                        }
                        var_22 = ((/* implicit */unsigned short) ((arr_32 [i_7 + 1] [i_7 + 2] [i_8 - 1] [i_8]) & ((~((~(arr_41 [i_7] [i_7] [i_8] [i_7] [i_7])))))));
                        var_23 = ((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_8]));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_36 [i_11] [12U] [i_9] [i_8] [i_7] [i_7]) ^ (((/* implicit */int) (unsigned short)42077)))))))) >> (((3574984538U) - (3574984510U)))));
                        arr_43 [i_8] [i_9] [i_11] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_7 + 1] [i_8 - 1] [i_8] [i_9] [(_Bool)1])) ? (var_6) : (((/* implicit */int) (short)16))))) >= (min((arr_26 [(signed char)14] [i_7 - 1]), (((/* implicit */long long int) (signed char)-116))))))), (((((/* implicit */_Bool) min((4294967292U), (((/* implicit */unsigned int) (signed char)-1))))) ? (2147483638) : (((/* implicit */int) (short)-19905))))));
                    }
                    var_25 *= ((/* implicit */int) (!(((/* implicit */_Bool) -834893169))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_27 [i_7 + 3] [i_7 + 3])))) ? (arr_27 [i_7] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (unsigned int i_14 = 3; i_14 < 22; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            {
                                arr_55 [i_7] [i_7] [i_7] [i_16] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_41 [i_13] [i_13] [i_16] [i_7 - 1] [i_16])) ? (arr_39 [i_16] [i_15] [i_14 - 2] [i_7 - 1]) : (arr_41 [i_7] [i_13] [i_16] [i_7 + 2] [i_7 + 2])))));
                                arr_56 [i_16] [i_16] = (short)19898;
                                var_27 = ((/* implicit */unsigned int) var_10);
                                arr_57 [i_15] [i_14] &= ((/* implicit */int) (+(4281564243U)));
                                var_28 = min((min((arr_26 [i_7 + 1] [i_14 - 2]), (arr_26 [i_7 + 1] [i_14 - 2]))), (((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_14 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_26 [i_7 + 1] [i_14 - 2]))));
                            }
                        } 
                    } 
                    arr_58 [i_7] [i_13] [i_14] = ((/* implicit */long long int) ((((((-106803959) + (2147483647))) >> (((((/* implicit */int) arr_46 [i_7 + 2])) - (12350))))) - (((((/* implicit */int) (unsigned char)154)) - (((/* implicit */int) arr_46 [i_7 - 1]))))));
                    arr_59 [i_14 - 1] [i_14] [i_14 - 3] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_47 [i_14 + 3] [i_14 + 3] [i_14 - 2])) ? (((/* implicit */int) arr_47 [i_14 - 1] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_47 [i_14 - 1] [i_14 + 3] [i_14 + 3])))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_46 [i_7 + 3])))), (((/* implicit */int) arr_31 [8] [i_7 + 1] [15] [(_Bool)1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_7 + 2]))) ^ (arr_26 [i_7] [(short)1])))));
    }
    var_30 *= ((/* implicit */_Bool) var_0);
}
