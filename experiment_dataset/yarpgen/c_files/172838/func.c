/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172838
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
    var_11 = ((/* implicit */unsigned long long int) -2083671006227238308LL);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) min(((unsigned char)1), ((unsigned char)228)))), (var_5)))) != (((/* implicit */int) arr_0 [i_0] [18U]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 2676287008U))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) 2415867169U);
            var_14 = ((/* implicit */short) 1368745752906335491LL);
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
            {
                arr_10 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_2]))));
                var_15 -= ((/* implicit */unsigned long long int) arr_0 [i_0] [10ULL]);
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((16300941207749942791ULL) << (((14590851786077780493ULL) - (14590851786077780432ULL))))))))));
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_0 [i_4] [i_6]))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (3855892287631771122ULL) : (((unsigned long long int) arr_15 [i_0] [16U] [15U] [i_5]))))))));
                            var_18 += ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned short) ((int) ((signed char) (!((_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)30206)))) & (((/* implicit */int) min(((unsigned char)246), (((/* implicit */unsigned char) (_Bool)0))))))))));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [10U] [i_4] &= min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_4 [i_8])) & (((/* implicit */int) var_3)))))), (min((((((/* implicit */_Bool) (short)1873)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1031))) : (1806614754813760031ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)31))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_24 [13U] [(unsigned char)11] [i_2] [i_7 - 2] [4ULL] [17U] [i_8 + 2])), (min((arr_23 [i_0] [i_2] [1ULL] [i_4] [i_7 - 3] [13ULL] [i_8]), (((/* implicit */unsigned long long int) (unsigned char)254))))))) ? (arr_9 [(signed char)12]) : (((((/* implicit */_Bool) arr_15 [(short)4] [(unsigned char)0] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2415867143U)))) : (((16640129318895791584ULL) >> (((102284468057159535LL) - (102284468057159521LL)))))))));
                        }
                    } 
                } 
            }
            arr_26 [i_2] [(unsigned short)6] [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)179))));
        }
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)1880))))))))));
                            var_23 = ((/* implicit */unsigned int) var_0);
                            arr_41 [i_12] [i_10] [i_12] = ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                            arr_42 [i_9] [i_12] = ((/* implicit */long long int) ((arr_11 [7U] [7U] [i_11]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_12] [i_9] [i_9])))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) 16640129318895791585ULL)) ? (((/* implicit */int) (unsigned short)55672)) : (((/* implicit */int) (_Bool)1))))));
                            var_25 += ((/* implicit */short) ((((var_9) + (((/* implicit */long long int) arr_2 [i_9])))) >= (((((-1368745752906335471LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 17; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) ((unsigned long long int) 2415867143U));
                            arr_48 [i_9] [i_10] [(signed char)18] [i_12] [(short)0] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) : (arr_20 [i_9] [i_15 - 1])));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        }
                        for (short i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_12])) ? (((((/* implicit */_Bool) (unsigned short)13667)) ? (-6906372765435622946LL) : (-3404890891224190063LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9864)))))));
                            arr_52 [(unsigned short)12] [i_10] [i_16] [8ULL] [i_16] [i_16] [8ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) arr_1 [i_9] [(short)8])) : (((/* implicit */int) arr_1 [i_9] [i_9]))));
                        }
                        var_29 = 3855892287631771122ULL;
                    }
                    arr_53 [10ULL] [i_10] = ((/* implicit */short) var_4);
                    arr_54 [1LL] [i_10] [i_10] = ((/* implicit */unsigned char) (+(-43536895)));
                }
            } 
        } 
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (2415867169U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_9] [(short)6])))));
        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) -8309596042142203052LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3589155269U)));
        arr_55 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19691)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_30 [i_9])));
    }
    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
    {
        var_32 |= ((/* implicit */long long int) var_1);
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_57 [i_17])) ? (arr_57 [i_17]) : (arr_57 [i_18])))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) -634606164))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            var_35 -= ((/* implicit */unsigned short) (-(min((2496226128832681769ULL), (((/* implicit */unsigned long long int) var_4))))));
            arr_64 [(unsigned short)5] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) arr_61 [i_17] [(short)0] [i_17]))), (var_5)))) && (((/* implicit */_Bool) 2639234665U))));
            arr_65 [i_17] [i_19] = ((((/* implicit */_Bool) max((arr_61 [10ULL] [i_19] [i_19]), (((/* implicit */short) (_Bool)1))))) ? (((((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_56 [18ULL])))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) (+(-2116298241)))))) : (((/* implicit */unsigned long long int) min((arr_60 [(signed char)10] [i_19]), (((/* implicit */long long int) ((int) (unsigned short)58182)))))));
            arr_66 [i_17] [16U] = ((/* implicit */short) arr_58 [(signed char)5]);
            arr_67 [i_19] [i_17] [i_17] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((signed char) arr_62 [i_17] [i_19] [i_19]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [(short)16] [(short)16] [i_17]))) : (arr_60 [i_17] [i_19]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 14789093184800183965ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            var_36 += ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) 59017809)));
            arr_70 [(unsigned short)17] [i_20] [i_17] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_58 [i_17])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-43536895) : (-1338705231)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [(signed char)1]))) : (max((arr_60 [i_17] [i_20]), (((/* implicit */long long int) var_8))))))));
        }
    }
}
