/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129374
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */unsigned long long int) var_10)) : (max((((/* implicit */unsigned long long int) var_6)), ((-(9007199254609920ULL)))))));
    var_14 = ((/* implicit */signed char) var_7);
    var_15 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) 1893416186626085487LL);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_8 [4ULL] [4ULL])) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)7146))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) var_2));
            var_19 = var_11;
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_1]))) : (((long long int) 18437736874454941696ULL))));
        }
    }
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] [(unsigned short)15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1498651771)) ? (-1893416186626085470LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56508)))))) ? (((((var_9) + (9223372036854775807LL))) >> (((var_1) - (16580327235266300082ULL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) (-((-(arr_8 [i_6] [i_7 - 1])))));
                    arr_27 [i_7] [i_7] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_5] [i_5] [i_5])))))));
                    arr_28 [i_5 + 1] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_5])) % ((-(((int) arr_22 [(_Bool)1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        arr_35 [i_5] [i_5 + 1] [i_5] = ((/* implicit */unsigned short) (+(250518U)));
                        arr_36 [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9] [i_9])) ? (arr_6 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_9] [i_9])))) : (max((arr_6 [i_10] [i_10]), (var_1)))));
                        arr_37 [i_5] [i_5] &= ((/* implicit */unsigned int) arr_22 [i_9]);
                    }
                } 
            } 
            var_21 ^= ((/* implicit */unsigned short) arr_6 [i_8] [14LL]);
            arr_38 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_5] [i_8] [i_5 - 1] [i_8]))) ? (max((((arr_22 [i_5]) << (((4294967295LL) - (4294967266LL))))), (((/* implicit */unsigned long long int) ((unsigned int) 4294716778U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_5] [i_8]))))) ? (((((/* implicit */long long int) var_10)) / (var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_5] [(short)13] [i_8]))))))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_34 [i_8] [i_5])) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [16LL] [i_8])))))))) ? (((((/* implicit */_Bool) ((7918189982995057622LL) % (((/* implicit */long long int) 813070979U))))) ? (((((/* implicit */long long int) 1552766436)) % (5143542096803774340LL))) : (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_5] [12LL] [i_5]))))))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((-250361121), (((/* implicit */int) (unsigned char)27)))))));
        }
    }
    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned int) max((((/* implicit */long long int) ((unsigned char) arr_21 [i_11 + 1] [i_11 - 1]))), (var_9)))))));
        arr_42 [i_11] [i_11] |= ((/* implicit */signed char) ((unsigned short) (_Bool)1));
        var_25 = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((unsigned short) arr_48 [i_12 + 1]));
                        arr_55 [i_12 + 1] [12U] [i_15] = ((/* implicit */unsigned char) var_12);
                        /* LoopSeq 3 */
                        for (long long int i_16 = 2; i_16 < 18; i_16 += 2) 
                        {
                            arr_58 [i_12 + 1] [i_13] [i_14] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_57 [4] [i_15] [i_14] [(unsigned short)3] [i_12]))))) & (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) >> (((arr_53 [i_16 - 1] [13LL] [i_16 + 1] [i_16 - 1] [i_16 - 2]) + (9211889638491099566LL)))));
                            var_27 = ((((/* implicit */_Bool) var_9)) ? (((arr_50 [i_13 - 1] [i_13 + 1]) / (((/* implicit */long long int) ((((/* implicit */int) arr_46 [i_12 - 1])) << (((arr_50 [i_12] [i_14]) - (610599260558716070LL)))))))) : (var_5));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_51 [i_12 - 1] [i_12] [i_13 + 1] [i_13 + 1]))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 13213141)) ? (-1498651767) : (((/* implicit */int) (signed char)30))))) % (arr_53 [i_17] [i_17] [i_15] [i_13 - 1] [i_12 + 1])));
                        }
                        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) (+(((long long int) arr_48 [i_12 + 1]))));
                            var_31 &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (signed char)31))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        arr_75 [i_21] [6LL] [i_19] [i_19] [i_12] = 4294967295U;
                        var_32 = (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1436020320)) : (arr_52 [i_21 - 1] [i_12 - 1] [i_12 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 2; i_22 < 17; i_22 += 4) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_33 ^= ((/* implicit */signed char) ((int) 250514U));
                                var_34 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                                var_35 = max((((((/* implicit */_Bool) arr_54 [i_12 - 1])) ? (arr_72 [i_12 + 1] [i_19] [i_20] [0ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_12 + 1] [i_22 + 1] [i_22 - 2] [i_22 - 2]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_62 [i_23] [i_22] [i_20] [8] [i_12]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        for (unsigned short i_25 = 0; i_25 < 20; i_25 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) arr_56 [i_12] [i_24] [i_24] [i_12 + 1] [i_25] [i_19])) <= (((/* implicit */int) arr_64 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_12 - 1] [i_12 + 1] [i_12 + 1])))))));
                                arr_85 [i_25] [i_24] [i_20] [(signed char)18] [i_12] = ((/* implicit */_Bool) max((((long long int) ((var_1) >> (((arr_72 [i_12] [i_19] [i_19] [i_24]) + (7679077929774508433LL)))))), (((/* implicit */long long int) var_12))));
                                arr_86 [i_12] [i_12] [i_12 + 1] = ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) arr_61 [12U] [(short)16] [i_20] [i_24] [i_25] [i_19])))) : (((arr_84 [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 1]) ^ ((~(-1498651771))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_47 [i_12 - 1] [i_12 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47226))) : (((unsigned int) var_12))));
                    var_38 = ((/* implicit */signed char) max(((+(arr_71 [i_12 - 1]))), (((/* implicit */unsigned long long int) 8346783848909429180LL))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_26 = 1; i_26 < 16; i_26 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned long long int) (-((~(var_9)))));
            var_40 ^= ((/* implicit */unsigned short) arr_67 [i_12 - 1] [i_12] [i_12 - 1]);
        }
        for (signed char i_27 = 1; i_27 < 16; i_27 += 3) /* same iter space */
        {
            arr_92 [(short)0] [i_27] [i_12] = ((/* implicit */unsigned int) ((unsigned short) var_4));
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(var_2)))) % (arr_43 [i_12])))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_9))))))));
        }
    }
}
