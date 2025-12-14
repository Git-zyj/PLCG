/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170616
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
    var_14 += ((/* implicit */unsigned short) (((((~(3032501999559587695LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) > (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((short) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (4030415969U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != ((~(min((-3032501999559587695LL), (((/* implicit */long long int) 880991449))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) arr_0 [i_1] [11ULL])) : (((/* implicit */int) arr_0 [i_1] [i_0])))), (((/* implicit */int) max((arr_3 [i_1] [(_Bool)1] [i_1]), (((/* implicit */short) arr_0 [4] [i_1])))))));
            var_19 = ((/* implicit */short) arr_1 [i_0]);
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(264551327U))))));
                var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))));
            }
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(var_3))) | (((/* implicit */unsigned long long int) 264551322U)))))));
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_4]))))) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_4] [i_4])))))))) ? (((((/* implicit */_Bool) var_7)) ? ((-(var_0))) : (min((((/* implicit */unsigned long long int) 7835864922330249692LL)), (6511095572518453901ULL))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (var_3))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [2])) : (((/* implicit */int) var_6)))))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_0 [i_0] [7U])) : (((/* implicit */int) arr_0 [i_0] [i_4]))))) || (var_6)));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4030416000U))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((((arr_8 [(unsigned short)7]) + (2147483647))) >> (((/* implicit */int) arr_1 [(_Bool)0])))) != ((+(((/* implicit */int) var_12)))))))));
                            var_26 = ((/* implicit */short) min((((/* implicit */int) ((short) (-(880991451))))), ((~(((-536870912) + (((/* implicit */int) var_12))))))));
                            var_27 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_3 [i_4] [5U] [(_Bool)1])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (var_7))));
                        }
                        for (long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            var_28 += ((/* implicit */unsigned long long int) (~(((unsigned int) (short)0))));
                            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4113963493U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -880991477)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (7ULL)))) ? (arr_20 [i_0] [i_0] [(_Bool)1] [i_6] [i_8 + 1]) : ((-2147483647 - 1)))) : ((-((~(((/* implicit */int) var_9))))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_13)))) ? (((max((17ULL), (var_3))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) : (min((max((((/* implicit */unsigned long long int) var_5)), (var_0))), (((/* implicit */unsigned long long int) max((arr_20 [i_8] [i_6] [i_5] [(short)3] [i_0]), (((/* implicit */int) (unsigned char)124)))))))));
                            var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3348587174849292005LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)78), (var_9))))) : (18446744073709551604ULL)));
                        }
                        var_32 = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) arr_22 [i_4] [i_5] [(signed char)0] [i_4] [i_4]))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12236350201513493466ULL)) ? (((/* implicit */unsigned int) 1073741824)) : (arr_11 [i_11] [i_10 + 1] [2ULL] [i_9])));
                            var_34 = ((arr_10 [i_10 + 1] [i_10 + 1]) != (arr_10 [i_10 + 1] [i_10 + 1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (((unsigned int) var_6))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_13] [i_12] [i_9] [i_4] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) | (arr_30 [i_0] [i_0] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [(_Bool)1] [(short)11] [1LL]))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                var_37 = ((/* implicit */unsigned long long int) arr_14 [11U] [i_4] [(_Bool)1] [(_Bool)1]);
                var_38 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_40 [(short)2] [i_4] [i_14]))));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) ((unsigned long long int) arr_25 [(short)7] [i_4] [i_15]));
                            var_40 *= ((/* implicit */short) (unsigned short)4032);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_10)) ? (-880991428) : (((/* implicit */int) arr_0 [i_0] [i_4]))))));
                    var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_0] [i_4] [(short)4] [i_14] [i_17] [i_17] [i_17]))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_43 = (-(((/* implicit */int) arr_27 [i_0] [i_4] [i_4] [i_14] [1ULL])));
                    var_44 = (i_4 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) arr_49 [i_4] [0] [i_14] [i_18] [i_4] [i_18])) + (26773))) - (9)))))) : (((/* implicit */short) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((((/* implicit */int) arr_49 [i_4] [0] [i_14] [i_18] [i_4] [i_18])) + (26773))) - (9))) - (4249))))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_18])) >> (((((((/* implicit */int) (short)16558)) & (-880991450))) - (31))))))));
                }
                for (int i_19 = 2; i_19 < 11; i_19 += 3) 
                {
                    var_46 = ((((/* implicit */_Bool) arr_19 [(unsigned short)7] [i_19 - 2] [i_14] [i_14] [(unsigned short)7] [(unsigned short)7] [i_14])) ? (576456354256912384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_19] [(_Bool)1]))));
                    var_47 = ((/* implicit */long long int) arr_2 [i_19] [i_19] [i_0]);
                }
                for (int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (~(0U))))));
                    var_49 = (short)13009;
                }
            }
            var_50 = ((/* implicit */short) (+(max((arr_13 [(_Bool)1] [i_4] [i_4] [i_4]), (arr_13 [i_0] [i_4] [i_0] [i_0])))));
            var_51 = ((/* implicit */unsigned short) var_6);
        }
        for (unsigned int i_21 = 3; i_21 < 11; i_21 += 2) 
        {
            var_52 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_3 [i_21] [i_21] [i_0])))))) <= (((/* implicit */int) ((_Bool) arr_44 [i_21 - 2] [i_21 - 2] [(_Bool)1] [(unsigned short)11] [i_0])))));
            var_53 = ((/* implicit */_Bool) ((long long int) var_8));
        }
    }
    var_54 = var_4;
}
