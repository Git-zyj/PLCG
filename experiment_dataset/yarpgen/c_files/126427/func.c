/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126427
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) ^ (min((arr_7 [0LL]), (((/* implicit */unsigned int) arr_1 [i_1] [i_2]))))));
                    arr_8 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */int) max((min((-7488663011846511388LL), (((/* implicit */long long int) (unsigned short)21982)))), (((/* implicit */long long int) arr_3 [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [3U] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_9 [i_0] [i_2] [i_3]))));
                        var_17 = ((/* implicit */unsigned int) ((long long int) arr_10 [i_3] [i_0] [i_1] [i_0]));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) 1424564669)) : (((arr_4 [i_0] [12LL] [i_4]) << (8U)))))) ? (max((arr_1 [i_2] [i_4]), ((+(((/* implicit */int) arr_2 [i_2])))))) : ((+((+(2025124013)))))));
                        var_19 = ((/* implicit */unsigned int) arr_0 [i_4]);
                    }
                    arr_14 [i_2] = ((/* implicit */int) var_14);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            {
                arr_19 [i_6] [i_6] = var_6;
                var_20 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        arr_23 [i_7] = ((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_20 [i_7]) : (arr_20 [i_7]));
        var_22 = ((/* implicit */short) (~(arr_22 [i_7] [i_7])));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1424564669) : (arr_22 [i_7] [i_7])))) ? (arr_20 [i_7]) : (arr_20 [i_7])));
        var_24 = ((/* implicit */long long int) var_5);
        var_25 += ((/* implicit */int) ((_Bool) arr_21 [i_7]));
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 14; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (int i_10 = 2; i_10 < 16; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */int) (unsigned short)35620);
                    arr_30 [i_9] [i_9] [i_9] = ((/* implicit */long long int) (short)3749);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
        {
            var_27 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8 - 1] [i_8 - 1] [0LL]))));
            var_28 = ((/* implicit */unsigned short) 2618762458843074896LL);
        }
        for (int i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) 5458424565545716653LL)) ? ((+(288381501))) : (arr_15 [i_8 + 4] [i_8 + 4]))))));
                        arr_43 [i_14] [i_14] [i_14] [17U] [i_14] [i_14] = ((/* implicit */unsigned int) -288381502);
                        var_30 = ((/* implicit */int) ((((arr_37 [i_14] [i_14] [i_13] [i_12]) >> (((arr_34 [i_8] [i_8] [i_13]) - (4791445206074757118LL))))) << (((var_1) - (1340353222972002078LL)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            var_31 |= ((int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8]))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) 5458424565545716653LL))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_33 = ((/* implicit */_Bool) -5458424565545716679LL);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5458424565545716679LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)-3770)) ? (1984567943U) : (arr_39 [i_13] [i_13] [i_13] [i_14])))));
                            var_35 &= ((/* implicit */int) (-(arr_34 [i_8 - 2] [i_14] [i_8 - 2])));
                            var_36 = ((/* implicit */int) ((long long int) 5458424565545716704LL));
                        }
                        arr_50 [i_14] [1U] [1U] [i_14] [i_8] [i_14] = ((int) arr_24 [i_8 + 2]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */int) var_5);
                            var_38 -= ((/* implicit */long long int) (short)-10949);
                            arr_57 [i_8] = ((/* implicit */short) ((arr_34 [i_8 + 4] [i_8 - 1] [13]) >> (((arr_34 [i_8 - 2] [i_8 + 2] [i_18]) - (4791445206074757113LL)))));
                            var_39 = ((((/* implicit */long long int) arr_46 [i_8] [i_8] [i_8] [i_8 + 4] [i_8 + 2] [i_8 + 2])) / (arr_24 [i_8 + 3]));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_54 [i_12]))) / (((/* implicit */int) ((short) var_10)))));
            var_41 += ((/* implicit */_Bool) arr_40 [i_12]);
            var_42 = ((/* implicit */short) var_13);
        }
        for (int i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) -5458424565545716679LL)) ? (((/* implicit */int) (short)3770)) : (-288381513)));
                var_44 = -759600838;
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10927)) ? (5458424565545716679LL) : (((/* implicit */long long int) -700182131))));
            }
            var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_31 [i_8])))));
            arr_62 [i_20] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_22 [i_8] [i_8]))) ? (var_8) : (arr_37 [i_8] [i_8] [i_8] [i_8])));
            arr_63 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (+(var_8)));
        }
        for (unsigned int i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_56 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                var_48 = ((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8]);
                /* LoopSeq 2 */
                for (unsigned int i_24 = 0; i_24 < 18; i_24 += 4) 
                {
                    var_49 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_53 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (var_8) : (((/* implicit */long long int) arr_16 [i_8])))));
                    arr_72 [i_8] [i_23] [i_23] [i_8] [i_8] [i_24] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (arr_20 [i_22]) : (arr_28 [i_8] [i_22] [i_22] [i_24])))) ? (((unsigned int) arr_27 [i_8] [i_8])) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_8])))))));
                }
                for (unsigned short i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27)) || (((/* implicit */_Bool) (short)3730))));
                    arr_76 [i_22] [i_22] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 5458424565545716655LL)) || (((/* implicit */_Bool) 67108863))))));
                }
            }
            var_51 ^= ((/* implicit */int) ((((5458424565545716653LL) <= (((/* implicit */long long int) 3073969091U)))) ? (((/* implicit */unsigned int) arr_48 [i_8 - 1] [i_8 + 2] [i_8 - 2] [i_8 - 1])) : (arr_18 [i_8 - 1])));
        }
    }
    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) (+((+(var_1))))))));
}
