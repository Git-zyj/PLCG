/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147756
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
    var_20 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = min((((((/* implicit */long long int) ((((/* implicit */_Bool) 1774453171)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1]))))) ^ (((arr_3 [i_0] [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((long long int) min((arr_4 [i_1] [i_1]), ((signed char)72)))));
            var_22 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 - 1]);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) max((arr_5 [i_0] [i_2]), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) arr_6 [i_2])) : (arr_3 [i_0] [i_0] [i_2])))))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_2])) << (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (arr_0 [i_2])))) ? (min((arr_8 [i_0] [i_2 - 1]), (((/* implicit */unsigned int) arr_2 [i_2 - 1] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2]))))) ? (((/* implicit */int) ((arr_8 [i_0] [i_0]) != (((/* implicit */unsigned int) arr_5 [i_2] [i_2]))))) : (((/* implicit */int) var_0)))))));
            var_25 = (+(((arr_3 [i_2] [i_2 - 1] [i_2]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])))))))));
            arr_9 [i_2] = ((/* implicit */unsigned char) min((arr_1 [i_0]), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)0))))));
        }
        var_26 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_10 [i_0] = ((/* implicit */int) (+(3882645186U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_27 = ((/* implicit */int) ((var_6) ? ((-(var_11))) : (((/* implicit */unsigned long long int) var_2))));
                    var_28 = ((/* implicit */int) (+(var_3)));
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) / (((int) arr_3 [i_0] [i_3] [i_5]))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    arr_22 [i_0] [i_6] [i_3] [i_6] = ((/* implicit */int) arr_12 [i_0]);
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_3] [i_4] [i_6]) << (((((/* implicit */int) arr_2 [i_3] [i_3])) - (245)))))) ? (arr_12 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_3] [i_0]))))))));
                }
                for (long long int i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    arr_26 [i_3] [i_4] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) var_0);
                    var_31 ^= ((/* implicit */int) (unsigned char)13);
                }
                for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    var_32 = ((/* implicit */unsigned short) ((_Bool) var_4));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) - ((~(var_13)))));
                }
                var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_0])))) & (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (int i_9 = 3; i_9 < 9; i_9 += 2) 
                {
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                    arr_34 [i_3] [i_4] [i_3] [i_0] [i_3] = ((/* implicit */long long int) var_10);
                }
            }
            for (short i_10 = 2; i_10 < 9; i_10 += 2) 
            {
                var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_10])))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned short i_12 = 1; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_45 [i_3] [i_3] [i_10] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_12] [i_10 - 2] [i_3] [i_0])))))));
                            arr_46 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_18 [i_0]);
                        }
                    } 
                } 
                arr_47 [i_3] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
            var_37 = ((/* implicit */long long int) ((short) (+(((/* implicit */int) (_Bool)1)))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0] [i_3] [i_3])) & ((-(var_18)))));
            var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
            var_40 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)110))));
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_14 = 4; i_14 < 8; i_14 += 1) 
        {
            var_41 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_49 [i_13])), (max((((/* implicit */unsigned int) (unsigned char)255)), (arr_51 [i_14] [i_13] [i_14]))))) - (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_15)))), (((-720511735) + (-541701450))))))));
            arr_54 [i_14] = (i_14 % 2 == 0) ? (((/* implicit */unsigned long long int) ((var_1) >> (((((arr_51 [i_14] [i_14] [i_14]) << ((((~(var_3))) - (2053194816U))))) - (3483276257U)))))) : (((/* implicit */unsigned long long int) ((var_1) >> (((((((arr_51 [i_14] [i_14] [i_14]) << ((((~(var_3))) - (2053194816U))))) - (3483276257U))) - (614168577U))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_16 = 3; i_16 < 11; i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    for (int i_18 = 2; i_18 < 11; i_18 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */int) var_3);
                            var_43 = ((((/* implicit */unsigned long long int) ((arr_59 [i_13] [i_15] [i_17] [i_18]) ^ (((/* implicit */int) (unsigned char)5))))) >= (5623206520537817311ULL));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned short) arr_58 [i_13]);
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    for (short i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)18)) - (((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_20]))) : (var_11)));
                            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)10)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    var_47 = ((/* implicit */short) (+(arr_65 [i_13] [i_16] [i_16] [i_21])));
                    var_48 = var_7;
                }
            }
            for (int i_22 = 3; i_22 < 11; i_22 += 1) /* same iter space */
            {
                arr_72 [i_13] [i_22] [i_22 - 3] = ((/* implicit */unsigned short) 750709599U);
                arr_73 [i_22] [i_22] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)30)) >= (((/* implicit */int) (_Bool)0))))) >= (arr_66 [i_13] [i_15] [i_15] [i_22] [i_22])));
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                arr_77 [i_13] [i_23] [i_23] [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) <= (9223372036854775807LL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (1382831729U))) : (var_1)));
                var_49 -= (+(((/* implicit */int) var_6)));
                var_50 = ((((/* implicit */_Bool) (~(arr_59 [i_13] [i_13] [i_13] [i_13])))) ? (((/* implicit */int) var_19)) : ((-(((/* implicit */int) var_15)))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 4; i_24 < 10; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        var_51 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-17088))));
                        var_52 |= ((/* implicit */long long int) ((175587449U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_84 [i_13] [i_15] [i_24] [i_25] = ((/* implicit */unsigned char) var_16);
                        var_53 = (((-(237922055))) <= (((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_25] [i_24] [i_15])))))));
                        var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) ((arr_59 [i_13] [i_15] [i_24] [i_24]) != ((-2147483647 - 1))))) : (((/* implicit */int) ((3700486775U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))));
                    }
                } 
            } 
        }
        var_55 = ((/* implicit */_Bool) max((var_55), (((((max(((_Bool)1), (arr_83 [i_13]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_6))))) : (arr_48 [i_13] [i_13]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13])))))));
        var_56 = ((/* implicit */unsigned int) (_Bool)0);
    }
}
