/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114343
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
    var_19 = ((/* implicit */short) ((((((/* implicit */int) (signed char)25)) >> (((-367346958) + (367346958))))) == (((/* implicit */int) (unsigned short)65116))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((-600063627) + (600063629)))))))) == (((unsigned int) ((((/* implicit */int) var_16)) & (((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((signed char) (_Bool)0);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) ((unsigned short) max((max((((/* implicit */int) arr_5 [i_0])), (arr_0 [i_1]))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65116)) > (((/* implicit */int) (unsigned short)42108))))))));
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) == (((/* implicit */int) arr_2 [i_1]))))) == (((arr_0 [i_1]) - (((/* implicit */int) arr_5 [i_1])))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_23 = arr_1 [i_2];
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((unsigned long long int) ((min((-6889171368023000032LL), (((/* implicit */long long int) (unsigned short)65535)))) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65118), (arr_1 [i_1]))))))));
                            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-26)) * (((/* implicit */int) (unsigned short)65145))));
                            var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65129)) >> (((((/* implicit */int) (signed char)-25)) + (47)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_11 [i_0] [i_0] [i_2] [i_1] [i_1] [i_3] [i_5]))) & (((/* implicit */unsigned long long int) max((-6243671458016409759LL), (((/* implicit */long long int) (signed char)-25))))))) - (((/* implicit */unsigned long long int) ((int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5])))));
                            var_27 = ((short) ((((/* implicit */int) arr_10 [i_2] [(signed char)8] [i_3] [i_3] [i_5])) >> (((/* implicit */int) (signed char)25))));
                        }
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((unsigned short) arr_11 [i_0] [i_0] [i_2] [i_3] [i_6 - 1] [i_3] [i_6 - 1]))), (((unsigned int) arr_9 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (signed char)-26))))))));
                            var_29 = min((((((/* implicit */int) arr_10 [i_6 + 2] [i_6 + 2] [i_2] [i_1] [i_1])) & (((((/* implicit */int) (unsigned short)60548)) * (((/* implicit */int) (signed char)-25)))))), (((/* implicit */int) (signed char)39)));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 3; i_7 < 14; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) arr_11 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7]);
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) 112170567U);
                            var_31 = ((/* implicit */int) (unsigned char)214);
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_2 [i_2]))));
                            var_33 = ((((unsigned int) -1010734111)) * (((/* implicit */unsigned int) ((int) arr_2 [i_3]))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2] [i_2])), (arr_19 [i_0] [i_0] [i_2] [i_2] [(_Bool)1]))) < (((/* implicit */unsigned int) arr_0 [(signed char)4]))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_2] [i_0] [i_0])) > (arr_7 [(unsigned short)14] [i_1] [i_2]))))) <= (max((((/* implicit */long long int) (signed char)-18)), (9007061815787520LL))))))));
                    }
                } 
            } 
            arr_22 [i_0] = ((/* implicit */long long int) (((((-(((/* implicit */int) ((signed char) -2744978425544154293LL))))) + (2147483647))) << (((((/* implicit */int) (signed char)22)) - (22)))));
            arr_23 [1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)8)) % (1019710868)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_35 |= ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_8] [i_8]);
            arr_27 [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) (unsigned short)5015);
        }
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 3; i_10 < 8; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                {
                    arr_39 [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) arr_12 [i_9] [7] [i_9]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_44 [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) -1)) - (3200138651U)));
                                var_36 = ((((_Bool) arr_12 [i_9] [i_11 + 1] [i_9])) || (arr_12 [i_9] [i_11 + 1] [i_9]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            {
                                arr_49 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) arr_9 [i_9] [i_10 + 2] [i_11]);
                                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)21372)) - (21371))))), (max((2050535014), (((/* implicit */int) (unsigned short)14853)))))))));
                                var_38 -= max((((/* implicit */int) max((arr_45 [i_10 - 1] [i_11 + 1]), (((/* implicit */unsigned short) arr_5 [i_11 + 1]))))), (((((/* implicit */int) arr_5 [i_11 + 1])) * (((/* implicit */int) arr_45 [i_10 + 1] [i_11 + 1])))));
                                arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((long long int) ((long long int) (_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_55 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_53 [i_16] [i_9] [i_9]))) * (((/* implicit */int) arr_5 [i_9]))));
            var_39 |= ((/* implicit */short) min((1328702677476135514LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16375)) >> (((2147483647) - (2147483647))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                for (unsigned short i_18 = 3; i_18 < 7; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36040))) < (min((((/* implicit */unsigned long long int) arr_14 [i_18 + 1] [i_18 + 2] [i_19 + 1] [i_19 + 1] [i_19 + 1])), (arr_18 [i_9] [i_19 + 1] [i_19 + 1] [i_19] [i_19 + 1] [5] [i_19])))));
                            var_41 ^= ((/* implicit */unsigned char) arr_0 [i_18]);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_20 = 4; i_20 < 15; i_20 += 4) 
    {
        var_42 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_63 [i_20 + 3] [i_20 + 3]) && (arr_63 [i_20 - 1] [i_20 - 1])))) << ((((-(((/* implicit */int) (signed char)8)))) + (34)))));
        arr_64 [i_20 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) >> (((-442472985) + (442472993))))) <= (((/* implicit */int) ((unsigned char) 6243671458016409765LL)))));
        arr_65 [i_20 + 1] [i_20 - 3] = ((/* implicit */unsigned long long int) arr_62 [i_20 - 3] [i_20 + 2]);
        /* LoopNest 3 */
        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (long long int i_23 = 0; i_23 < 18; i_23 += 1) 
                {
                    {
                        arr_74 [i_22] [i_22] [i_22] = ((_Bool) arr_70 [i_20 + 3] [i_22]);
                        /* LoopSeq 1 */
                        for (unsigned short i_24 = 3; i_24 < 16; i_24 += 1) 
                        {
                            var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_68 [i_22] [i_21]))));
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((arr_77 [i_24 - 1] [i_24] [i_24 - 3] [i_24 - 3] [i_24 - 3]) < (arr_77 [i_24 - 1] [i_24] [i_24 - 3] [i_24 - 1] [i_24 - 3]))))));
                        }
                        var_45 = ((/* implicit */long long int) ((arr_69 [i_22] [(unsigned short)15]) != (((/* implicit */int) arr_68 [i_22] [i_21]))));
                        /* LoopSeq 1 */
                        for (short i_25 = 1; i_25 < 17; i_25 += 4) 
                        {
                            var_46 = ((((/* implicit */long long int) arr_62 [i_20 - 1] [i_20 - 4])) <= (arr_72 [i_20 + 3] [i_20 - 1] [i_20 - 2] [i_22]));
                            arr_82 [i_22] [i_21] [i_22] [i_23] [8] = ((/* implicit */unsigned char) (+(arr_76 [i_25 - 1] [i_25 + 1] [i_22] [i_25] [i_25 - 1] [i_25 + 1])));
                            var_47 = ((((/* implicit */int) arr_73 [i_20 + 1] [i_20 + 3] [i_20 - 3])) * (((/* implicit */int) arr_73 [i_21] [i_21] [i_20 + 1])));
                        }
                        var_48 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                    }
                } 
            } 
        } 
    }
}
