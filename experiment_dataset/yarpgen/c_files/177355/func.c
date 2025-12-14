/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177355
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
    var_14 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((max((var_2), (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0])))) + (1601LL))))))));
        var_16 = ((/* implicit */unsigned short) var_12);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) != (max((((/* implicit */unsigned long long int) (unsigned short)21672)), (16703872608343949274ULL)))));
            arr_5 [i_1] = ((/* implicit */unsigned char) var_3);
            var_18 *= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) min(((unsigned char)239), (min((var_0), (((/* implicit */unsigned char) var_9))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                            var_19 ^= ((/* implicit */unsigned int) 9223372036854775807LL);
                            var_20 ^= ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                var_21 -= ((((/* implicit */_Bool) max((arr_3 [i_2] [i_0] [(short)0]), (((/* implicit */unsigned short) (signed char)-22))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-20707)), ((unsigned short)28514))))) : (((((/* implicit */_Bool) (unsigned short)7099)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (883772799240881659LL))));
            }
        }
        for (long long int i_5 = 4; i_5 < 20; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_4 [i_5] [7ULL] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 1]))) : (var_2)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [7U] [7U]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 2]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_5] [i_0])))));
            arr_18 [i_5] [i_5] = ((/* implicit */_Bool) ((var_3) ? ((+(((/* implicit */int) arr_6 [i_0] [i_5 - 4])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 4])) >= (((/* implicit */int) arr_0 [i_5 + 1])))))));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (13632372654993794378ULL) : (4814371418715757263ULL)));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) var_0))));
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) || (((/* implicit */_Bool) arr_24 [(short)2] [i_7] [(short)2]))));
            var_24 = ((/* implicit */long long int) var_4);
            var_25 |= (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_26 += ((/* implicit */signed char) arr_23 [i_6] [i_6] [i_8]);
            arr_28 [(_Bool)1] [(short)4] [(unsigned short)8] = ((/* implicit */unsigned long long int) ((_Bool) var_5));
            var_27 ^= ((/* implicit */unsigned char) 2097152U);
            arr_29 [i_6] = ((/* implicit */int) var_5);
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) + (var_10))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_32 [i_10 + 1])) - (42)))));
                        var_29 |= ((/* implicit */short) var_11);
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_6] [i_9] [i_6] [i_9]))) : (5287271756022759076LL)));
            arr_38 [i_6] [i_6] = ((/* implicit */int) var_9);
            var_31 = ((/* implicit */_Bool) ((arr_22 [i_6]) | (((/* implicit */unsigned long long int) -2159592595987529147LL))));
            arr_39 [i_6] [i_6] = ((/* implicit */short) arr_26 [i_9]);
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
    {
        var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (9223372036854775807LL)));
        var_33 &= ((/* implicit */signed char) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_15 [i_12] [(_Bool)1] [i_12])) >> (((((/* implicit */int) (unsigned short)21282)) - (21262)))))));
        var_34 ^= ((/* implicit */int) arr_10 [20ULL] [20ULL] [i_12] [i_12]);
        var_35 = ((/* implicit */signed char) (+(arr_7 [i_12] [i_12] [i_12] [i_12])));
    }
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_13])), (var_10)))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned char)2))))) | (((arr_22 [i_13]) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (arr_41 [i_13] [i_13])))))))));
        arr_46 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_20 [i_13])) <= (((/* implicit */int) arr_20 [i_13]))))) * (((/* implicit */int) min(((unsigned char)210), (((/* implicit */unsigned char) (_Bool)0)))))));
        /* LoopSeq 2 */
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            var_37 = ((/* implicit */unsigned long long int) 206111724);
            var_38 = ((/* implicit */unsigned long long int) arr_33 [i_14] [i_14] [i_14] [i_14]);
            /* LoopNest 3 */
            for (unsigned char i_15 = 1; i_15 < 15; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    for (long long int i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        {
                            arr_58 [i_13] [i_14] [i_15 + 3] [i_15] [i_17 + 1] [(unsigned char)1] = ((/* implicit */unsigned long long int) arr_54 [i_17 + 2] [i_15 + 2] [i_15] [i_17 + 1]);
                            arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] [i_15] = ((/* implicit */long long int) arr_45 [i_17]);
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned short)63), (((/* implicit */unsigned short) (unsigned char)223)))))));
        }
        for (unsigned long long int i_18 = 1; i_18 < 15; i_18 += 1) 
        {
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (3227038643U))))))) || (((/* implicit */_Bool) arr_13 [i_18 + 1] [(signed char)2] [(signed char)2] [(signed char)2] [(signed char)2]))));
            var_41 = ((/* implicit */int) (_Bool)0);
            arr_64 [i_13] [i_13] = ((/* implicit */unsigned long long int) 2149898587U);
            /* LoopSeq 4 */
            for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 3) /* same iter space */
            {
                arr_67 [i_13] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 0LL)) ? (((1998145710) << (((((/* implicit */int) arr_40 [i_13] [i_13])) - (20))))) : (((/* implicit */int) arr_60 [i_13] [i_13]))))));
                var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) max((arr_27 [i_13] [i_18 + 1]), (((/* implicit */unsigned int) (short)-32750))))) != (((long long int) arr_35 [i_19 + 2] [i_13])))))));
                arr_68 [i_19 + 2] [i_19] [i_19 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)59743)) | (((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18584)) || (((/* implicit */_Bool) (unsigned short)59725))))) : (((/* implicit */int) arr_3 [i_13] [i_19] [i_13]))))));
                arr_69 [i_19] [i_19] [i_19 + 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) - (arr_24 [i_13] [i_13] [i_19])));
            }
            /* vectorizable */
            for (unsigned long long int i_20 = 2; i_20 < 15; i_20 += 3) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_52 [i_20] [i_18 + 2] [i_20 + 3])) <= (((/* implicit */int) arr_52 [i_13] [i_18 + 2] [i_20 - 2]))));
                var_44 = ((/* implicit */unsigned short) arr_30 [i_13]);
                arr_72 [i_13] [i_13] [i_13] [i_13] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))));
                arr_73 [i_13] [i_13] [i_13] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_13] [i_13] [i_13])) ? (15882370813688127730ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-17116))))));
            }
            for (short i_21 = 1; i_21 < 17; i_21 += 2) 
            {
                arr_77 [(_Bool)1] [i_18 + 3] [(_Bool)1] [i_13] = ((/* implicit */long long int) max(((unsigned char)55), (((/* implicit */unsigned char) (_Bool)0))));
                arr_78 [i_13] [i_18] [i_18] = ((/* implicit */unsigned char) arr_45 [i_13]);
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_81 [i_13] [i_22] [i_13] [i_13] = (!(((/* implicit */_Bool) var_4)));
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    arr_84 [i_22] [i_22] [i_22] = ((/* implicit */short) 5415430617874960776LL);
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        arr_88 [11U] [11U] [i_22] [i_23] [11U] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (-9223372036854775807LL))) << (((((((/* implicit */_Bool) 9223372036854775794LL)) ? (2823499421524558597ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (-9223372036854775807LL)))))) - (2823499421524558555ULL)))));
                        var_45 = ((/* implicit */unsigned long long int) (unsigned char)155);
                    }
                }
            }
        }
    }
    for (unsigned int i_25 = 0; i_25 < 18; i_25 += 1) /* same iter space */
    {
        var_46 = min((min((2823499421524558605ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (min((((/* implicit */unsigned long long int) arr_9 [i_25])), ((~(var_5))))));
        var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (signed char)-62))));
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_52 [i_25] [i_25] [i_25])) ? (arr_49 [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_25]))))), (((((/* implicit */_Bool) arr_52 [i_25] [i_25] [i_25])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [11U]))))))))));
    }
}
