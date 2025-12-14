/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139812
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (3078806409U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((_Bool) (~(128849018880ULL)));
                    var_19 = ((/* implicit */int) (~(arr_6 [i_0] [i_0] [i_2])));
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_9 [i_3] [i_3] &= ((/* implicit */unsigned int) ((18140666591163293782ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [12ULL])))));
        arr_10 [i_3] [(short)8] = ((/* implicit */signed char) ((unsigned char) arr_4 [i_3] [i_3] [i_3]));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_4] [i_4]))));
        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [15ULL]))));
        arr_13 [i_4] = ((/* implicit */_Bool) ((long long int) arr_6 [i_4] [i_4] [i_4]));
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_4] [i_5] [i_5]))));
            var_24 = (-(18446744073709551599ULL));
        }
        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_6])) | (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((arr_25 [i_8 - 3] [i_8 - 4] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 4]) | (arr_25 [i_8 - 3] [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 - 4])));
                        var_27 += ((/* implicit */unsigned char) 4294967295U);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4]))))) << (((((((/* implicit */_Bool) 306077482546257835ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [13U] [i_8 - 1]))) : (arr_2 [i_6] [i_7] [i_8]))) + (29464LL)))));
                            var_29 = ((/* implicit */unsigned long long int) ((long long int) arr_25 [i_9] [i_8 - 2] [i_8 - 4] [i_8 - 1] [i_8] [i_8]));
                        }
                        arr_28 [i_4] [i_6] [i_6] [i_7] [i_7] [i_8 + 1] = ((/* implicit */long long int) (+((~(18140666591163293762ULL)))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_37 [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(306077482546257831ULL)))) ? (((/* implicit */int) ((short) (unsigned short)57799))) : (((/* implicit */int) arr_20 [i_12 - 1]))));
                        var_30 = ((/* implicit */signed char) (_Bool)1);
                        var_31 = ((/* implicit */unsigned int) arr_33 [i_4] [i_10]);
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_4] [i_10] [11U] [i_12 - 1])) ? (arr_21 [i_12] [i_12] [5ULL] [i_12 - 1]) : (((/* implicit */long long int) arr_25 [i_11] [i_10] [i_11] [i_12 - 1] [i_12] [i_11]))));
                            var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1138246629)) || (((/* implicit */_Bool) arr_6 [i_4] [i_10] [(_Bool)1])))) || (((/* implicit */_Bool) arr_5 [3LL] [i_12 - 1] [(unsigned char)1] [i_12 - 1]))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            arr_42 [i_4] [i_4] [i_4] [i_11] [i_4] = ((/* implicit */short) var_12);
                            arr_43 [i_11] = ((/* implicit */int) (short)32757);
                            var_34 |= ((/* implicit */unsigned short) ((unsigned long long int) arr_12 [i_12 - 1]));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_46 [i_4] [i_11] [i_11] [i_12] [i_12 - 1] [i_15] = arr_18 [i_11] [(short)12];
                            var_35 = ((/* implicit */unsigned short) arr_26 [i_10]);
                            arr_47 [i_4] [i_11] [i_11] [i_12] [i_15] = ((306077482546257833ULL) ^ (((/* implicit */unsigned long long int) 536870784)));
                        }
                        arr_48 [i_4] [i_11] = ((/* implicit */unsigned int) arr_24 [i_10]);
                    }
                } 
            } 
            var_36 *= ((/* implicit */long long int) ((_Bool) arr_24 [i_10]));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                arr_51 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(unsigned char)13] [(unsigned char)13] [i_4] [i_10] [(unsigned char)13] [i_16] [i_4]))) * (((arr_6 [i_4] [i_10] [i_4]) * (0U)))));
                var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_4] [i_4] [i_16]))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                arr_55 [i_4] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_4] [i_10] [i_4] [i_17] [i_17])) && (((/* implicit */_Bool) arr_26 [i_4]))));
                var_38 = ((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_4]))));
                arr_56 [i_4] [10] [i_17] [i_17] = ((/* implicit */short) (~(((((/* implicit */_Bool) 18140666591163293782ULL)) ? (arr_14 [i_4] [0ULL] [0ULL]) : (((/* implicit */long long int) 2108322144U))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                var_39 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))) | (11964574958477999646ULL));
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) 
                {
                    arr_62 [i_4] [i_10] [i_18] [12U] = ((/* implicit */unsigned short) ((arr_60 [i_4] [i_4] [i_4] [i_4] [i_18] [i_19]) % (((/* implicit */unsigned int) arr_16 [i_4] [i_10]))));
                    arr_63 [i_4] [i_10] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4011316375U)))))) - (arr_33 [i_19] [i_18])));
                    var_40 = ((/* implicit */_Bool) 3674962583U);
                    var_41 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_10]))) >= (arr_21 [i_4] [i_10] [i_18] [i_19])));
                }
                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) arr_35 [i_4] [i_10] [i_4] [i_4]))));
                /* LoopSeq 1 */
                for (short i_20 = 3; i_20 < 11; i_20 += 4) 
                {
                    arr_68 [13ULL] [i_10] [i_18] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_20 - 3] [i_20 - 2] [i_20] [i_20] [i_20] [i_20]))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) (-(arr_14 [i_4] [12ULL] [i_18])));
                        var_44 = ((/* implicit */unsigned char) ((_Bool) 4294967271U));
                        var_45 = ((/* implicit */short) ((unsigned int) (unsigned char)196));
                    }
                }
                var_46 = ((/* implicit */unsigned char) (short)-22016);
            }
        }
        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 2) /* same iter space */
        {
            arr_74 [i_4] = ((/* implicit */unsigned int) arr_0 [i_4]);
            arr_75 [7LL] = ((/* implicit */unsigned char) (~(arr_32 [i_22])));
            /* LoopNest 3 */
            for (unsigned int i_23 = 2; i_23 < 12; i_23 += 4) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 1) 
                {
                    for (long long int i_25 = 0; i_25 < 14; i_25 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) arr_3 [i_24] [(short)6] [i_22]);
                            var_48 = ((/* implicit */long long int) ((signed char) 4194176ULL));
                        }
                    } 
                } 
            } 
        }
        arr_83 [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_65 [i_4] [i_4] [(short)13] [3LL] [i_4] [i_4]))));
    }
}
