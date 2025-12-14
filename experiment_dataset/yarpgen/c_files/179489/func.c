/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179489
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) var_6);
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (((!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) ? (min((arr_1 [(_Bool)1]), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) 16LL)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_2 [i_1]), (arr_2 [i_1])))), (((unsigned long long int) arr_2 [i_1]))));
            var_12 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) arr_0 [i_0] [i_1])));
        }
    }
    /* LoopSeq 4 */
    for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        var_13 = var_7;
        var_14 = ((/* implicit */long long int) (~(min((arr_4 [10ULL]), (arr_8 [i_2 - 1])))));
        arr_10 [i_2] = ((long long int) (short)8);
        var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(var_7)))), (arr_8 [i_2 - 2])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 52975694849739095LL)), (var_8)))) ? (((long long int) 18446744073709551598ULL)) : ((+(var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] = min((((((4564447243106516735ULL) - (288230376151711616ULL))) - ((+(288230376151711634ULL))))), (((/* implicit */unsigned long long int) var_0)));
        arr_14 [i_3] = ((long long int) arr_4 [(_Bool)1]);
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 15; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_5]) <= (((/* implicit */unsigned long long int) arr_3 [i_4] [i_4] [i_3])))))) & (((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (13882296830603034863ULL))))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
                        {
                            var_18 += (!(((/* implicit */_Bool) arr_12 [i_3])));
                            var_19 = (!(((((/* implicit */_Bool) -9223372036854775807LL)) && (((/* implicit */_Bool) var_1)))));
                            var_20 = ((/* implicit */long long int) 0ULL);
                            arr_29 [i_3] [i_4] [i_9] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -2037434576810602556LL)) ? (((/* implicit */unsigned long long int) 8674476756463817055LL)) : (13633353535441755202ULL)));
                        }
                        arr_30 [i_3] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_4] [i_5])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_4]))) ^ (arr_20 [i_3] [i_4] [i_5] [i_8] [i_3] [i_3])))));
                    }
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        arr_34 [i_4] [i_4] [i_10] = ((/* implicit */long long int) var_8);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(min((arr_26 [i_3] [i_3] [i_4] [i_5] [i_5] [i_10]), (var_4)))))) + ((+(arr_1 [i_4 + 1])))));
                        arr_35 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_22 [i_3] [i_4 + 1] [(_Bool)1])))) ? (((((((/* implicit */unsigned long long int) arr_3 [i_4 + 1] [i_5] [i_10])) - (288230376151711616ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) >= (0ULL))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_0))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_3] [i_3] [i_11] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)))) ? (((((/* implicit */_Bool) (short)23)) ? (4564447243106516769ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) : (((min((8674476756463817055LL), (arr_2 [i_11]))) & ((-(var_7))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))), (arr_3 [i_4] [i_4 - 1] [i_4])))) % (min((9189650798660423135ULL), (((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_33 [i_3] [i_5] [i_10] [i_11])))))));
                        }
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            arr_45 [i_4 - 1] [i_3] [i_5] [i_4 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) min((arr_9 [i_4 - 1] [i_12 - 1]), (arr_9 [i_4 + 1] [i_12 - 1]))));
                            arr_46 [i_3] [i_4] |= ((/* implicit */_Bool) (~(var_4)));
                        }
                        arr_47 [i_12] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_3] = (~(((long long int) var_5)));
                        arr_48 [i_3] [i_4 + 1] = ((/* implicit */long long int) var_6);
                        var_23 = ((/* implicit */_Bool) ((long long int) arr_17 [i_4 + 1] [i_5] [i_5] [i_12 + 2]));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        arr_52 [i_14] [i_14] = ((/* implicit */unsigned long long int) (~((+(var_5)))));
        arr_53 [i_14] [i_14] = ((/* implicit */long long int) ((unsigned long long int) arr_49 [i_14]));
    }
    for (long long int i_15 = 3; i_15 < 18; i_15 += 2) 
    {
        var_24 = ((/* implicit */long long int) 9ULL);
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 3; i_17 < 18; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    {
                        arr_65 [i_15 - 3] [i_16] = ((/* implicit */long long int) ((unsigned long long int) max((arr_63 [i_15] [13LL] [i_15] [13LL] [i_15] [i_16]), (((/* implicit */unsigned long long int) (short)-17792)))));
                        var_25 = ((/* implicit */unsigned long long int) (+(-415365655404786324LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 19; i_19 += 1) 
        {
            for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                {
                    arr_71 [i_20] [i_20] [i_15 - 3] [i_15 - 3] &= ((/* implicit */unsigned long long int) max((-8894014309184513693LL), ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 3; i_21 < 18; i_21 += 1) 
                    {
                        var_26 = (-(((((/* implicit */_Bool) arr_60 [i_20] [i_21 - 2] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_21 + 1] [i_21 + 1]))) : (9223372036854775807LL))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4ULL) : (((/* implicit */unsigned long long int) 576460752169205760LL)))))));
                    }
                    for (long long int i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_23 = 2; i_23 < 17; i_23 += 2) 
                        {
                            var_28 += arr_43 [i_15 - 2] [i_19] [5ULL] [i_22] [i_23 - 1] [i_19] [i_15 - 3];
                            var_29 -= ((/* implicit */_Bool) ((arr_36 [i_15] [i_15] [i_20] [i_23 + 1] [i_20] [i_20]) + (arr_36 [i_15] [i_20] [i_23] [i_23 - 1] [i_23] [i_20])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 2) 
                        {
                            arr_82 [i_15] [i_15 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_77 [i_15] [i_15] [i_15] [i_15 - 2])))) && (((/* implicit */_Bool) ((long long int) var_8)))));
                            var_30 = (~(((((/* implicit */_Bool) var_7)) ? (var_7) : (var_0))));
                            arr_83 [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_20] [i_22] [i_22] [i_24] = ((/* implicit */long long int) (~(arr_36 [i_15] [i_19] [i_24] [i_22] [i_15 - 2] [i_24])));
                            arr_84 [i_15 - 3] [i_19] [i_22] [i_15 - 2] [i_22] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_80 [i_15] [i_15] [i_15] [i_15] [i_15]) < (10ULL))))) : (8894014309184513683LL));
                        }
                        var_31 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_9) : (((/* implicit */unsigned long long int) 5068671176327328731LL)))), (((/* implicit */unsigned long long int) ((38ULL) < (((10ULL) * (18446744073709551597ULL))))))));
                    }
                }
            } 
        } 
        arr_85 [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_44 [i_15]);
    }
    var_32 = ((/* implicit */long long int) min((var_32), (min((1LL), (((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (max((1LL), (((/* implicit */long long int) (short)(-32767 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -525571709521425408LL)) < (288230376151711594ULL)))))))))));
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2))));
}
