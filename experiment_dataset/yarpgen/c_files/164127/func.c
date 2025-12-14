/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164127
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_21 = arr_5 [i_0] [i_0];
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) (signed char)116);
                        var_23 &= ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1]);
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned char)255))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_3])) - (13)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_1 - 2])) << (((((/* implicit */int) (signed char)-122)) + (123))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_0 [i_5])))) & ((-(((/* implicit */int) (signed char)126))))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (unsigned short)31))));
            }
            var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)63))));
            var_30 *= ((/* implicit */unsigned char) arr_2 [i_1 + 1] [i_1 + 1]);
        }
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) (signed char)-5);
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (short)13306);
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_14 [i_0] [i_8] [i_6 - 1] [i_8])))), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_7] [i_8]), (((/* implicit */unsigned char) (signed char)126))))) || (((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0] [i_8]), (arr_1 [i_0]))))))))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19723)) || (((/* implicit */_Bool) arr_18 [i_0]))))), ((-(arr_18 [i_0]))))), (min((866282767U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-16)), (arr_23 [i_0] [i_0] [i_6 + 1] [i_6]))))))));
            var_35 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_6] [i_0])))))))));
            var_36 = ((/* implicit */unsigned char) (signed char)34);
        }
        for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            var_37 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_4 [i_9 + 2] [i_9] [i_9 + 2])), (0U))), (((/* implicit */unsigned int) (unsigned short)9632))));
            var_38 = min((((/* implicit */int) arr_8 [i_0])), (((((((/* implicit */int) (signed char)-11)) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_9 - 1])) + (40))) - (14))))));
            var_39 = ((/* implicit */int) min((arr_24 [i_0] [i_0] [i_0] [i_0] [i_9 - 1] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4398046511103LL)))))));
            arr_29 [i_9] = ((/* implicit */unsigned char) min((((/* implicit */int) min((min((((/* implicit */short) arr_27 [i_9] [i_9])), ((short)32765))), (((/* implicit */short) (unsigned char)235))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 15))))) % (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        }
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)65504)))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [i_0] [i_10])), ((unsigned short)65504))))))))))));
            var_41 = ((/* implicit */short) arr_17 [i_0] [i_10] [i_10]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (short i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    {
                        arr_38 [i_10] [i_12] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_12 + 2] [i_12 - 1] [i_12 + 2] [i_12 + 1]))))) != ((+(min((0ULL), (((/* implicit */unsigned long long int) 4398046511122LL)))))));
                        var_42 = (~(((/* implicit */int) (unsigned char)71)));
                    }
                } 
            } 
        }
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((arr_33 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) | (((/* implicit */long long int) min((min((((/* implicit */int) (short)(-32767 - 1))), (arr_17 [i_0] [i_0] [i_0]))), (((((/* implicit */int) arr_27 [i_0] [i_0])) ^ (((/* implicit */int) arr_5 [i_0] [i_0]))))))))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */int) arr_1 [i_13]);
        /* LoopSeq 2 */
        for (long long int i_14 = 4; i_14 < 16; i_14 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (unsigned short)19032))));
            arr_45 [i_13] [i_13] [i_14 - 3] = ((/* implicit */long long int) (unsigned char)167);
        }
        for (long long int i_15 = 4; i_15 < 16; i_15 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned int) arr_4 [i_13] [i_15 - 4] [i_13]);
            /* LoopSeq 4 */
            for (signed char i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 4; i_17 < 16; i_17 += 3) 
                {
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_52 [i_13] [i_15] [i_15 + 2] [i_17 - 4])) | (((/* implicit */int) ((4398046511085LL) > (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13] [i_13] [i_13]))))))));
                    var_48 = ((/* implicit */unsigned int) arr_28 [i_15] [i_13] [i_15 - 2]);
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) arr_50 [i_15] [i_15 - 4] [i_15 - 2] [i_15 - 2]))));
                }
                for (unsigned char i_18 = 3; i_18 < 19; i_18 += 3) 
                {
                    var_50 = ((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31)))))));
                    arr_58 [i_13] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13] [i_15] [i_16] [i_18 - 2]))) <= (arr_12 [i_13] [i_13] [i_13])));
                    var_51 = ((/* implicit */signed char) (~(-4398046511079LL)));
                }
                var_52 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_13])) - (arr_35 [i_15 - 1] [i_15 + 2] [i_15 + 4] [i_15] [i_15 + 4])));
            }
            for (short i_19 = 1; i_19 < 19; i_19 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    var_53 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-52))));
                    var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) (-(((/* implicit */int) arr_54 [i_13] [i_20] [i_13] [i_20])))))));
                    arr_65 [i_13] [i_13] [i_20] [i_19] [i_20] |= ((/* implicit */long long int) (+(18446744073709551615ULL)));
                    var_55 = ((/* implicit */unsigned char) ((13ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))));
                }
                for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 2; i_22 < 18; i_22 += 2) 
                    {
                        var_56 = arr_9 [i_13] [i_19 + 1] [i_21] [i_22 - 2];
                        var_57 = ((/* implicit */unsigned char) (short)32748);
                    }
                    var_58 = ((/* implicit */long long int) arr_42 [i_19 - 1]);
                    var_59 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 590777643104856659LL))));
                    var_60 *= ((/* implicit */unsigned long long int) arr_5 [i_13] [i_15 - 4]);
                }
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 2) /* same iter space */
                {
                    var_61 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_13] [i_13])) ^ (((/* implicit */int) arr_69 [i_15 - 4] [i_19 - 1] [i_19 - 1]))));
                    var_62 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)98))));
                    var_63 = ((/* implicit */_Bool) arr_60 [i_13] [i_13] [i_13] [i_13]);
                }
                var_64 = ((/* implicit */unsigned int) (short)(-32767 - 1));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_65 = ((/* implicit */short) 0U);
                var_66 = ((/* implicit */_Bool) (unsigned short)2032);
            }
            for (int i_25 = 4; i_25 < 17; i_25 += 3) 
            {
                var_67 = ((/* implicit */_Bool) arr_3 [i_13] [i_15 - 3]);
                var_68 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -8916109504714972437LL)))))));
                var_69 = ((/* implicit */int) min((var_69), ((+(((/* implicit */int) arr_36 [i_15 - 1] [i_13]))))));
                var_70 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)98)))) != (((/* implicit */int) arr_41 [i_15 - 4] [i_15 + 1]))));
            }
        }
    }
    var_71 = ((/* implicit */_Bool) min((((/* implicit */long long int) (short)(-32767 - 1))), ((~(min((((/* implicit */long long int) (short)(-32767 - 1))), (4398046511117LL)))))));
    var_72 -= ((/* implicit */unsigned char) (short)(-32767 - 1));
}
