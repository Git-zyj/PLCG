/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117558
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
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_7))));
    var_22 = ((/* implicit */long long int) 2378160719088285527ULL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) var_5);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_11 [i_1] [12ULL] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (var_8) : (((/* implicit */int) (_Bool)1)))))));
                            var_24 = ((/* implicit */unsigned int) 12651958777573725858ULL);
                        }
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1910039598234990416LL)) ^ (3622710792049561673ULL)));
                            var_26 = ((/* implicit */long long int) var_4);
                        }
                        arr_15 [i_1] [4ULL] [7ULL] [4ULL] = ((/* implicit */unsigned int) 1910039598234990421LL);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_27 = max((2378160719088285533ULL), (2276753360436390727ULL));
            var_28 = ((/* implicit */unsigned int) arr_5 [i_7]);
            var_29 = ((/* implicit */unsigned long long int) (unsigned char)110);
            arr_23 [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_9);
            var_30 = ((/* implicit */unsigned long long int) var_13);
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                for (short i_10 = 2; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((-4LL), (-4175107308931417280LL)))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6]))))), (((((5ULL) ^ (3724160998272966768ULL))) >> (((((/* implicit */int) var_13)) - (179)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            arr_34 [i_6] [i_6] [i_8] [i_9] [i_6] [i_11] = ((/* implicit */long long int) (signed char)74);
                            var_32 = ((/* implicit */long long int) 14722583075436584850ULL);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) 448471867);
                            arr_39 [i_6] = var_4;
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned long long int) var_11)), (var_19))), (((/* implicit */unsigned long long int) arr_26 [i_6] [i_6])))) > (((/* implicit */unsigned long long int) var_1))));
                            arr_44 [i_6] [(unsigned char)13] [i_9] [i_10] [(unsigned char)13] = ((((((/* implicit */long long int) ((/* implicit */int) ((var_17) == (((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6])))))) % (min((((/* implicit */long long int) (_Bool)1)), (arr_24 [i_6] [i_13]))))) >> (min((max((3LL), (((/* implicit */long long int) -1568884498)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)4)) >> (((10197931135026719818ULL) - (10197931135026719793ULL)))))))));
                            arr_45 [i_6] [4ULL] [i_10] [16LL] [4ULL] |= ((/* implicit */unsigned char) arr_14 [i_6] [i_8] [i_8] [i_6] [i_13]);
                            arr_46 [i_6] [(short)20] [i_6] [11LL] = ((/* implicit */unsigned char) var_9);
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) var_14);
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 1) 
        {
            var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [9] [9] [i_14] [i_14]))))) ? (((((/* implicit */_Bool) var_6)) ? (14722583075436584848ULL) : (17293822569102704640ULL))) : (((/* implicit */unsigned long long int) ((537859655) & (((/* implicit */int) (signed char)4)))))));
            arr_51 [i_6] [i_6] [i_6] = arr_28 [i_6] [i_6] [i_6];
        }
        var_37 &= min((((/* implicit */long long int) ((min((((/* implicit */long long int) var_8)), (9223372036854775807LL))) > (((/* implicit */long long int) 658773570))))), (1910039598234990415LL));
    }
    for (unsigned int i_15 = 3; i_15 < 18; i_15 += 2) 
    {
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) var_19))));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            var_39 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33488896U)) ? (10581961857681642723ULL) : (var_15)))) ? (max((var_18), (7775597544693793477ULL))) : (((/* implicit */unsigned long long int) var_17)))));
            var_40 = ((/* implicit */unsigned char) -308710486);
        }
        var_41 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */long long int) 52592773U)), (arr_1 [i_15] [17ULL]))))), (((long long int) ((long long int) arr_35 [i_15] [i_15] [i_15] [i_15] [i_15])))));
        arr_56 [i_15] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((2305843009213693952LL), (-3438941029539806022LL)))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_15] [10ULL] [10ULL] [7ULL] [i_15])))));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 2; i_20 < 20; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 3; i_21 < 21; i_21 += 3) 
                        {
                            {
                                var_42 = 1910039598234990415LL;
                                var_43 = ((((var_4) ^ (((/* implicit */unsigned long long int) var_8)))) % (((((/* implicit */_Bool) 577050235)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_19))));
                            }
                        } 
                    } 
                    arr_73 [12LL] [i_19] [i_19] [i_19] = ((/* implicit */signed char) (-(2776777847U)));
                    var_44 = ((/* implicit */signed char) ((((((/* implicit */long long int) -541401367)) >= (9108870484418718729LL))) ? (((/* implicit */int) arr_62 [i_19] [i_18])) : ((-(((/* implicit */int) (_Bool)1))))));
                    var_45 |= ((/* implicit */signed char) ((((arr_70 [i_17] [i_18] [i_17]) / (arr_1 [i_17] [i_17]))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))));
                }
            } 
        } 
        var_46 = ((/* implicit */unsigned long long int) ((1427366369U) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (-3068759750277118903LL)));
        var_48 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [6LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 70368744173568LL)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (1910039598234990416LL)))));
    }
    var_49 -= ((/* implicit */unsigned char) ((2ULL) * (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) -3464561624674310136LL))))))))));
}
