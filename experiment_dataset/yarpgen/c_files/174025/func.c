/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174025
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? ((~((~(arr_6 [i_0] [i_0] [i_0] [i_3]))))) : (((/* implicit */long long int) (~(((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)181)))))))));
                        var_14 = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) var_5)))));
                        var_15 *= ((/* implicit */signed char) (unsigned char)191);
                        var_16 ^= ((/* implicit */_Bool) ((max((89970655), (((arr_0 [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))) - (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)191)))) >> (((/* implicit */int) arr_2 [i_2] [i_1] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (short i_5 = 3; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_16 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)15373)))), (((/* implicit */int) ((2147483647) <= (((/* implicit */int) (unsigned short)65535)))))))) || (((/* implicit */_Bool) (~(var_7))))));
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned char)166), (((/* implicit */unsigned char) var_4))))) ? ((~(((/* implicit */int) arr_1 [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) <= (((((/* implicit */int) (unsigned char)100)) % (((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned short)65535))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((((~(((/* implicit */int) var_11)))) == (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))) : (((((((((/* implicit */int) var_2)) & (((/* implicit */int) arr_4 [i_0])))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65523)) - (65517))))))))));
        arr_17 [i_0] = ((/* implicit */unsigned char) ((min((var_1), (arr_0 [i_0]))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) max((var_11), (((/* implicit */signed char) arr_0 [i_0])))))));
        arr_18 [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 1146640265)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
    }
    for (int i_6 = 2; i_6 < 12; i_6 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_7), (((/* implicit */long long int) (unsigned short)41840))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            {
                                arr_32 [i_10] [i_9] [i_7] [i_9] [i_6 + 1] = ((/* implicit */int) var_11);
                                var_20 ^= ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) (signed char)-53)), (((((/* implicit */int) (unsigned char)198)) << (((((/* implicit */int) (unsigned short)58650)) - (58648))))))));
                                var_21 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)209))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (8738542892679527364ULL)));
                                var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (arr_27 [i_6] [i_6] [i_6 - 2] [i_6] [i_10])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-31)) || (((/* implicit */_Bool) var_11)))))));
                                var_24 = var_3;
                                var_25 = ((/* implicit */short) arr_27 [i_6] [i_6] [i_6] [i_6] [i_8]);
                                var_26 = ((/* implicit */unsigned short) arr_19 [i_6 - 1] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_41 [i_13] = ((/* implicit */int) ((5570054764255414228LL) << (((((((/* implicit */int) arr_21 [i_13])) + (169))) - (41)))));
        arr_42 [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) 5570054764255414214LL)), (18446744073709551615ULL)))));
        /* LoopNest 3 */
        for (short i_14 = 2; i_14 < 8; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 4; i_15 < 9; i_15 += 4) 
            {
                for (unsigned char i_16 = 3; i_16 < 9; i_16 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_17 = 2; i_17 < 9; i_17 += 2) 
                        {
                            var_27 ^= ((/* implicit */_Bool) (~(max((((((/* implicit */int) var_0)) & (((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) -652152255586627791LL)))))));
                            var_28 = (-(((/* implicit */int) ((((/* implicit */int) arr_44 [i_14 + 1] [i_16 - 2] [i_17 + 1])) >= (((/* implicit */int) (short)-15265))))));
                            var_29 = ((/* implicit */unsigned short) arr_35 [i_15 - 2] [i_16 + 1]);
                        }
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (signed char)-22))))) % ((((((~(((/* implicit */int) var_10)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_53 [i_18] [i_16] [i_15] [i_14] [i_13] [9])) > (((/* implicit */int) arr_1 [i_14]))))))))))));
                            var_31 = ((/* implicit */unsigned short) -1706809125);
                        }
                        for (signed char i_19 = 3; i_19 < 8; i_19 += 4) 
                        {
                            arr_59 [i_13] [i_14] [i_16] [i_16 - 3] [i_19] = arr_36 [i_14] [i_14] [i_15 - 1] [i_13] [i_14] [i_19 - 2];
                            var_32 = (unsigned short)255;
                            var_33 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32506))) : (3829801977508443616LL))), (((((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_15 [i_13]))) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        }
                        var_34 = ((/* implicit */signed char) ((long long int) var_10));
                        arr_60 [i_13] [i_13] [i_14] [i_15] [i_16] [i_16 - 3] = ((/* implicit */long long int) arr_29 [i_13] [i_14 - 1] [i_15] [i_16]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        for (long long int i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            for (signed char i_22 = 1; i_22 < 14; i_22 += 2) 
            {
                {
                    var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)109)), (var_5))))) != (((((/* implicit */_Bool) arr_61 [i_20])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) : (((/* implicit */int) arr_61 [(signed char)0]))));
                    var_36 += (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_8))))))));
                    var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_65 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22 + 2]))))), (min((18389134175884504583ULL), (((/* implicit */unsigned long long int) var_11))))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_20] [i_21] [i_20]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11249623036538227669ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-73))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65521))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))));
                    arr_67 [i_20] [i_21] [i_21] = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    } 
    var_39 |= ((/* implicit */short) max(((~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_2))));
}
