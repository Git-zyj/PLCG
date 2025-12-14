/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168020
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
    var_15 &= ((/* implicit */_Bool) var_13);
    var_16 = ((unsigned char) var_3);
    var_17 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == ((-(((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))))))));
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_2 + 1] [i_0] = (~(var_2));
                    arr_10 [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)66)), ((unsigned char)255)));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)73))) & (9223372036854775807LL))));
                    var_18 += ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) arr_6 [i_2] [i_0])) : (arr_7 [i_0] [i_0] [i_1] [i_0])))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_1 [i_2] [i_1]);
                }
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_3 - 2] [i_5])) & (arr_16 [i_0] [i_1] [i_4] [i_5])));
                                arr_23 [(unsigned char)7] [i_1] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_18 [i_0] [i_1] [i_3] [i_4] [i_5]))) ? (((/* implicit */int) arr_15 [i_3] [i_4 + 1] [i_4] [i_4])) : (((((/* implicit */int) var_6)) << (((arr_21 [i_5]) - (305886224)))))));
                                arr_24 [i_0] [i_0] [i_0] [i_4] [5ULL] [i_3] = ((((unsigned int) (_Bool)0)) <= (4294967295U));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] [i_3] [9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_1])) ? ((~(((/* implicit */int) arr_1 [i_0] [i_3])))) : (((/* implicit */int) ((signed char) arr_6 [i_0] [i_3])))));
                    var_19 = ((/* implicit */unsigned long long int) ((0) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (372007790)))));
                    var_20 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -2013050966824455063LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_12)))));
                }
                for (long long int i_6 = 3; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_32 [i_0] [i_1] [i_1] [i_6 - 3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_3 [11U] [i_6 + 1] [i_6 - 3])) ? (((/* implicit */int) arr_3 [(short)3] [(signed char)0] [i_6 - 1])) : (((/* implicit */int) var_3)))) : (arr_17 [i_6 + 1] [i_6] [i_6] [i_6 + 1])));
                        var_21 = ((/* implicit */int) var_1);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((_Bool) var_6));
                                var_23 = var_13;
                                arr_41 [i_6] [i_1] [i_6] [i_8 + 3] [i_9] = ((/* implicit */unsigned int) -1);
                                arr_42 [i_6] [(_Bool)1] [i_6] [i_8] [i_1] [i_9] [i_1] = ((/* implicit */_Bool) (+(max((((arr_21 [i_0]) & (((/* implicit */int) var_12)))), (((/* implicit */int) (_Bool)1))))));
                                arr_43 [i_6] [i_8 + 1] = ((/* implicit */unsigned int) ((short) (short)-20471));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 18; i_10 += 3) 
    {
        for (unsigned char i_11 = 4; i_11 < 16; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        for (short i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_58 [i_14 - 1] [i_13] [i_13] [i_13] [i_11 - 1] [i_10 - 2] [i_10 - 2] |= ((/* implicit */unsigned char) var_8);
                                var_24 *= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (short)3972)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5))), (((/* implicit */long long int) (short)(-32767 - 1))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) -1722174625)) : (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)7260))) + (var_5))) : (((/* implicit */long long int) var_13))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) + (2147483647))) >> ((((+((-(var_14))))) - (7966808910231197717ULL)))));
                    /* LoopSeq 2 */
                    for (short i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        arr_61 [i_10] [i_10] [i_12] [i_15 - 1] = ((/* implicit */signed char) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_10] [i_10 + 2])))))));
                        var_26 = ((/* implicit */signed char) var_9);
                        var_27 = (~(((/* implicit */int) arr_56 [i_10] [i_11] [i_11] [i_11] [i_11 - 2] [i_11] [i_10])));
                    }
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        arr_66 [i_10] [i_16] = ((/* implicit */short) (-(((long long int) -372007790))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((short) (~(((/* implicit */int) arr_47 [i_10 + 2] [i_11 - 4]))))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_16] [i_12 + 1] [i_11] [i_11] [i_10 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (((int) (short)-18358))))) : (var_5)));
                        arr_67 [i_10] [i_10] [i_10] [i_11] [i_10] [i_10] = ((int) ((((/* implicit */_Bool) arr_52 [i_10] [i_10] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_10] [i_11 + 3] [i_10 + 2] [i_10]))) : (((long long int) arr_46 [i_10] [i_11]))));
                    }
                    arr_68 [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_7))));
                }
            } 
        } 
    } 
}
