/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160136
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
    var_18 = ((((14LL) ^ (-1548147677216631084LL))) - (((/* implicit */long long int) ((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ^ (((-14LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-7446)))))))));
                        var_20 = ((((3353420556U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)7461))));
                        var_21 = var_7;
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1] [8] = ((/* implicit */int) (((((+(var_6))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) var_4))) + (8671)))));
                            arr_17 [i_0] [i_1] [i_1] [8] = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)));
                        }
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) var_13);
                            var_22 = ((/* implicit */int) ((var_16) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7446)) ? (-2130417663) : (2147483647))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_29 [i_0] [i_6] [i_7] [i_8] |= ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1)))) || (((/* implicit */_Bool) -1244952279)))) && (((/* implicit */_Bool) (((_Bool)1) ? (941546728U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_14)) >= (3585135918U))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(var_1))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32001))) : (((((/* implicit */unsigned int) 2147483647)) + (3353420556U)))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */long long int) 4294967295U)) * (0LL))) + (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_0)))))))));
                            arr_34 [i_10] [5] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) 2587445581U);
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_6] [i_11] [7] [i_11 - 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (((var_16) + (((/* implicit */long long int) var_5))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((((/* implicit */int) (short)-6680)) / (((/* implicit */int) var_3))))) * (max((4294967295U), (((/* implicit */unsigned int) var_17)))))), (((/* implicit */unsigned int) ((((-30LL) % (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))))))))));
                            arr_39 [i_11] [i_6] [i_7] [i_8 - 1] [13LL] [i_6] = ((/* implicit */unsigned int) (((_Bool)1) ? (-1LL) : ((+(468426291674633661LL)))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            arr_42 [i_0] [i_0] [i_6] [i_6] [6U] [i_8] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */long long int) 0U);
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1767654336674443426LL)))) % (((252192964U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (1187842311541377743LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)-21175)) * (((/* implicit */int) min(((_Bool)1), (var_11)))))))));
        arr_46 [i_13] = ((((/* implicit */long long int) ((((/* implicit */int) (short)26197)) * (((/* implicit */int) var_15))))) / (((554341431549948147LL) + (((/* implicit */long long int) 4294967295U)))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */_Bool) 8261657284230792893LL)) ? (9222246136947933184LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4097580736U)) || (((/* implicit */_Bool) 3675279149858233719LL))))))))));
            var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (var_6)))));
            /* LoopSeq 4 */
            for (int i_16 = 2; i_16 < 13; i_16 += 2) 
            {
                var_31 = ((/* implicit */unsigned int) -901122970463091497LL);
                arr_56 [i_14] [i_15] [i_15] = ((/* implicit */long long int) (short)1934);
            }
            for (long long int i_17 = 3; i_17 < 13; i_17 += 2) 
            {
                var_32 = ((/* implicit */_Bool) ((2520397589697429899LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_59 [i_14] [10] = ((/* implicit */long long int) ((((((/* implicit */long long int) 1118642675)) + (-1146012229809960343LL))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                for (long long int i_18 = 1; i_18 < 13; i_18 += 2) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */int) (short)-26185)) * (((/* implicit */int) (_Bool)1))));
                    arr_63 [i_14] [i_15 - 1] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) 14LL)) ? (2143660757) : (((/* implicit */int) (short)16210))));
                    arr_64 [i_14 + 1] [i_15] [i_17 - 1] [i_14] = ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5734298298642861119LL));
                }
                for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                {
                    var_34 |= ((/* implicit */unsigned int) ((-1146012229809960361LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (5433745015067490424LL)))))));
                    var_35 = ((/* implicit */long long int) var_15);
                    arr_68 [i_14] [i_14] [i_15] [i_15] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) ((var_4) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (var_5))))));
                }
                for (unsigned int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    var_36 = ((/* implicit */long long int) (_Bool)1);
                    arr_72 [i_14] [i_20] [(short)6] [(short)10] |= ((/* implicit */short) ((((/* implicit */_Bool) -1146012229809960343LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3516877556975382711LL)));
                }
                arr_73 [4LL] [i_15 + 1] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) ((528433325) / (((/* implicit */int) (short)-7446))));
                arr_74 [i_14] [i_14] = (((_Bool)1) ? (var_16) : (var_4));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) (short)-6706)))));
                var_38 = (_Bool)1;
                arr_78 [i_14] [i_15 + 1] [i_21] [10U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -634931826)) ? (5800068601258188322LL) : (-7551106632970987163LL)));
                arr_79 [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) / (4815767151533566826LL))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-5542949700367231958LL)));
                arr_84 [i_14] [10LL] [i_22] [10] = ((/* implicit */_Bool) (((_Bool)1) ? (289342505U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            arr_85 [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) 310715609U))));
            var_40 = ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) ((1265822706U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_23 = 2; i_23 < 10; i_23 += 4) 
        {
            arr_88 [(_Bool)1] [i_14] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))));
            arr_89 [i_14] [i_14] [i_14] = ((6914789399550292951LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))));
            /* LoopNest 3 */
            for (unsigned int i_24 = 2; i_24 < 12; i_24 += 4) 
            {
                for (unsigned int i_25 = 0; i_25 < 14; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 14; i_26 += 4) 
                    {
                        {
                            var_41 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
                            arr_99 [i_14] [i_23 + 3] [11U] [i_14] = (((_Bool)0) || ((_Bool)1));
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))));
                            var_43 = ((long long int) var_8);
                        }
                    } 
                } 
            } 
        }
    }
    var_44 = ((/* implicit */short) var_14);
}
