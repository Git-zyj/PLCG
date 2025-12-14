/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177083
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4127745093567436767LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))) : (var_12))) + (arr_1 [i_0] [(unsigned char)5])));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (var_1))))))) ? (((/* implicit */long long int) ((var_11) ? (arr_2 [i_0]) : (min((arr_2 [i_0]), (arr_2 [i_0])))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))), ((~(arr_1 [7LL] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned char) 1582135945U);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) + (0U)));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)250), (((/* implicit */unsigned char) var_14))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_12))) - (2080LL)))))) & (((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_2])))) : (3ULL)))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 8398963555192060680ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_1])))), (min((arr_8 [i_1] [i_1] [i_1] [(short)3]), (((/* implicit */int) var_13))))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) 10476313900528381121ULL))));
        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (arr_12 [2LL]))))));
        var_22 = ((/* implicit */unsigned int) arr_10 [i_4]);
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 18446744073709551615ULL))));
        var_24 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) var_2))), (max((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5])), (((unsigned long long int) (unsigned short)21762))))));
    }
    var_25 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_20 [i_6] &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)78)) >= (((/* implicit */int) var_7)))) ? (1582135962U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_14))))))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                var_26 ^= (unsigned char)126;
                arr_26 [i_7] = ((/* implicit */_Bool) ((arr_16 [i_7]) ? (((/* implicit */int) arr_22 [i_7])) : (((arr_22 [i_7]) ? (((/* implicit */int) (short)-29751)) : (((/* implicit */int) arr_24 [i_7]))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_27 -= ((/* implicit */unsigned long long int) var_8);
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_4))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14876))) : (arr_21 [i_10] [i_9])));
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) % (((/* implicit */int) arr_30 [i_7]))));
                            var_31 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_6]))))) ^ (2097151ULL)));
                        }
                    } 
                } 
                var_32 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1))));
            }
            var_33 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [8LL] [i_7] [(_Bool)1] [i_6] [(signed char)1] [i_6] [i_6]))) : (var_6))) >> (((((((/* implicit */_Bool) (unsigned char)131)) ? (arr_28 [i_6]) : (((/* implicit */int) arr_22 [i_6])))) - (1546342002)))));
            arr_33 [i_6] [i_7] = ((/* implicit */unsigned short) arr_17 [i_6]);
            var_34 = ((/* implicit */unsigned int) -3LL);
            var_35 = ((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_6]);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            arr_37 [i_6] &= ((/* implicit */unsigned char) ((13591438550083065510ULL) == (((/* implicit */unsigned long long int) arr_19 [i_6] [i_12]))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    {
                        var_36 |= ((/* implicit */signed char) 18446744073707454472ULL);
                        var_37 += ((arr_17 [i_12]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_13] [i_13] [i_13] [(_Bool)1]))));
                        arr_42 [i_12] = ((/* implicit */long long int) 2712831359U);
                    }
                } 
            } 
            arr_43 [i_6] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) <= (((/* implicit */int) arr_41 [i_6] [i_12] [i_6] [i_12] [i_12] [i_12]))));
            var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21555)) ? (arr_38 [i_6] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6])))));
        }
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (unsigned short)21535))));
        /* LoopSeq 3 */
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            var_40 &= ((/* implicit */unsigned char) ((arr_27 [i_15] [i_15] [i_6] [i_15]) + (((/* implicit */int) arr_25 [i_6] [i_15]))));
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-5)) != (((/* implicit */int) (unsigned char)245)))))));
            arr_48 [i_6] [i_6] &= ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_6] [i_6] [(_Bool)0] [i_15] [i_15] [i_15] [(signed char)9])) + (((/* implicit */int) var_1))))) & (arr_23 [i_15] [i_15] [i_6] [i_6]));
            var_42 = ((/* implicit */unsigned int) min((var_42), ((+(45559832U)))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_43 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_6] [i_6] [i_6])) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_6] [i_16])))));
            arr_53 [i_6] [i_16] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-1) + (2147483647))) >> (((((/* implicit */int) var_1)) - (101)))))) ? (((11LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((unsigned int) arr_29 [(unsigned short)13] [i_6] [(unsigned short)13] [i_6])))));
            var_44 = ((/* implicit */unsigned long long int) ((unsigned short) arr_28 [i_6]));
            arr_54 [i_6] [4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6] [i_16])) ? (arr_38 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_12))))) ? (arr_38 [i_6] [(unsigned char)11] [i_16]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
        }
        for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)0))))))));
            arr_57 [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((arr_40 [11] [i_17] [11] [i_6]) ^ (var_10))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
            arr_58 [i_6] &= ((/* implicit */_Bool) arr_51 [i_6] [i_6]);
        }
        var_46 -= ((/* implicit */signed char) ((unsigned long long int) var_12));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 3) 
    {
        var_47 &= ((/* implicit */unsigned long long int) ((arr_59 [16U]) ? (((/* implicit */int) arr_59 [(short)8])) : (((/* implicit */int) var_8))));
        /* LoopSeq 3 */
        for (signed char i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            arr_63 [i_18] [i_18] [i_19] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)25396))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 1) 
                {
                    {
                        var_48 = ((/* implicit */_Bool) arr_65 [i_18]);
                        arr_69 [i_18] [i_20] [17LL] [(unsigned short)12] [i_18] = ((/* implicit */unsigned short) -912608980);
                        arr_70 [i_21] [i_21] [i_18] [i_19] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_60 [i_18]))));
                        arr_71 [i_18] [i_19] [i_20] = var_9;
                    }
                } 
            } 
        }
        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 1) 
        {
            var_49 = ((/* implicit */unsigned long long int) var_0);
            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4)))))));
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_13))));
        }
        for (signed char i_23 = 0; i_23 < 19; i_23 += 4) 
        {
            var_52 = ((unsigned short) arr_73 [(_Bool)1] [i_18]);
            var_53 = ((/* implicit */long long int) ((arr_75 [i_18]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_18] [i_18])))));
        }
        arr_79 [i_18] = ((/* implicit */unsigned char) (_Bool)1);
        var_54 = ((/* implicit */unsigned int) var_12);
        arr_80 [i_18] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (((((/* implicit */_Bool) -4717379360741320416LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_18] [i_18] [i_18]))) : (var_5)))));
    }
    for (unsigned char i_24 = 0; i_24 < 25; i_24 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_25 = 0; i_25 < 25; i_25 += 1) 
        {
            var_55 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_24])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_82 [i_24])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (arr_82 [i_24]))) : (((/* implicit */unsigned long long int) var_12)));
            arr_88 [2LL] [(signed char)12] [2LL] |= arr_82 [(signed char)14];
            var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)21568)), (0ULL)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_85 [i_24] [(signed char)22])), (1979091080U)))) : (((long long int) var_0)))), (((/* implicit */long long int) (signed char)0)))))));
            var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_4)) - (74)))))) ? ((+(-2625855272008524382LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4249407464U)))))) + (9223372036854775807LL))) << ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_83 [4LL]))))))))));
        }
        var_58 += ((/* implicit */unsigned char) ((((/* implicit */int) ((min((var_10), (((/* implicit */unsigned int) (signed char)0)))) > (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)0))))))))) + (((((((/* implicit */int) var_0)) + (2147483647))) << (((arr_83 [(unsigned char)14]) - (3818765914U)))))));
        var_59 *= var_5;
    }
    var_60 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((max((-1805108217), (-1805108217))), (((/* implicit */int) var_4))))) < (max((var_10), (((/* implicit */unsigned int) var_8))))));
}
