/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163829
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_13 += ((/* implicit */unsigned short) ((-3183781189098007467LL) / ((~(-5333558359497971345LL)))));
                    var_14 = var_11;
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 = ((((-9147025687885209747LL) + (9223372036854775807LL))) >> (((-9223372036854775788LL) + (9223372036854775798LL))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned short)3590))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)634))) : (((5333558359497971344LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55050)))))));
                                var_17 = (~(5333558359497971323LL));
                            }
                        } 
                    } 
                    var_18 ^= 4792337682745359926LL;
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (long long int i_7 = 4; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_19 = max((((long long int) 3536977927U)), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((-3183781189098007454LL), (((/* implicit */long long int) (unsigned short)34836)))))))));
                                var_20 = (~(((long long int) -3183781189098007458LL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((max((((long long int) 5333558359497971357LL)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5786133599658809017LL))))), (((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34237))) : (-3183781189098007456LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_30 [i_0 + 3] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((long long int) max((max((((/* implicit */long long int) arr_22 [i_0 + 2] [i_1] [i_1] [i_8] [19LL])), (var_2))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_9] [i_1] [i_0])) >> (((var_3) - (1727106310467775035LL)))))))));
                            arr_31 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((long long int) 5905645557251256335LL)), (var_1))), (((long long int) ((((/* implicit */_Bool) var_4)) ? (8203464491928648585LL) : (1864621421054392761LL))))));
                            var_22 = ((/* implicit */unsigned short) 5091680821534185148LL);
                            var_23 = (unsigned short)52804;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_9))));
                    /* LoopSeq 4 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 1) 
                        {
                            arr_40 [i_0] [i_1] [i_10] [i_1] [i_12] = ((/* implicit */unsigned int) var_11);
                            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [i_10 + 1]))));
                        }
                        arr_41 [i_0] [i_0] [i_1 + 2] [i_1] [i_10] [i_11] = ((/* implicit */unsigned char) 647693723U);
                    }
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        arr_46 [i_13] [i_13] = ((/* implicit */unsigned short) max((max((-1796131236007798304LL), (-1668691935835204627LL))), ((+(var_2)))));
                        var_26 = arr_18 [i_0] [i_0] [12LL];
                    }
                    for (unsigned short i_14 = 3; i_14 < 20; i_14 += 4) 
                    {
                        var_27 += min((arr_42 [i_0] [(unsigned short)14]), (min((arr_10 [i_0] [i_1 + 1] [i_10] [i_14]), (((long long int) (unsigned char)252)))));
                        var_28 -= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)65535))))) / (((((/* implicit */long long int) 11U)) - (5333558359497971367LL)))))));
                        var_29 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)224)))) * (((((/* implicit */int) var_5)) >> (((arr_26 [i_10 - 1]) + (7039115334289944422LL)))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        arr_54 [i_15] [i_1 + 1] [20LL] [i_15] [i_15] = ((((/* implicit */_Bool) -9087043843218301065LL)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (1796131236007798285LL));
                        var_30 = (i_15 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_1 + 1] [i_1 + 2] [i_15] [i_1 + 2])) >> (((((/* implicit */int) arr_43 [i_1] [i_1 + 2] [i_15] [i_1 + 2])) - (30042)))))) % (max((((/* implicit */long long int) (unsigned char)47)), (-1106367602943145058LL)))))) : (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_1 + 1] [i_1 + 2] [i_15] [i_1 + 2])) >> (((((((/* implicit */int) arr_43 [i_1] [i_1 + 2] [i_15] [i_1 + 2])) - (30042))) + (19479)))))) % (max((((/* implicit */long long int) (unsigned char)47)), (-1106367602943145058LL))))));
                        var_31 = ((arr_5 [i_0]) >> (((((max((var_9), (arr_29 [i_0 - 1] [i_1] [i_1] [i_10] [i_10] [i_15]))) / (((long long int) arr_16 [i_0])))) - (15979313166567LL))));
                    }
                    var_32 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_7))))));
                    var_33 = ((((/* implicit */_Bool) ((5333558359497971362LL) % (-3663106151016815245LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned short)3596))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62414))) : (-1609305019971976865LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((long long int) -8200840982002872870LL));
                        var_35 += ((((-9087043843218301061LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)62418)) - (62387))));
                    }
                    for (long long int i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        arr_60 [i_0] [i_0] [i_1] [i_10] [(unsigned short)14] [i_0] = ((/* implicit */unsigned short) (+(var_10)));
                        var_36 = ((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                    {
                        var_37 = ((((long long int) 852938201648923930LL)) % (((((/* implicit */_Bool) arr_43 [i_1 + 2] [i_1] [i_18] [i_1 + 1])) ? (-5333558359497971344LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_1 + 2] [i_1] [i_18] [i_1]))))));
                        var_38 += var_12;
                        var_39 = var_3;
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) var_7))));
                        arr_63 [i_0 + 2] [i_1] [i_10 - 1] [i_1 - 1] = var_10;
                    }
                    for (long long int i_19 = 2; i_19 < 20; i_19 += 2) 
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) var_4))));
                        var_42 = 1106367602943145054LL;
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775790LL))));
                        arr_68 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 9087043843218301052LL)) ? (2147483647LL) : (-9087043843218301048LL))))) >> ((((+(max((arr_19 [i_19] [i_1] [i_1] [i_0]), (var_11))))) - (3405869849142833135LL)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned char) var_9);
                            var_45 = ((/* implicit */long long int) min((var_45), (arr_53 [i_0 + 1] [i_1] [i_1] [i_1])));
                        }
                        for (long long int i_21 = 1; i_21 < 21; i_21 += 4) /* same iter space */
                        {
                            var_46 += ((((/* implicit */_Bool) arr_65 [i_19 + 2] [i_1] [i_10] [i_19] [i_21] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62432))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (9087043843218301052LL))));
                            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)8114))))));
                        }
                        for (long long int i_22 = 1; i_22 < 21; i_22 += 4) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned short) (~(min((-4952326436290712251LL), (9087043843218301064LL)))));
                            var_49 = ((/* implicit */long long int) var_7);
                            arr_75 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-9087043843218301061LL), (((/* implicit */long long int) ((unsigned short) (unsigned short)51106)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5351431964307310035LL)))))) : (((var_8) / (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)175)))))))));
                            var_50 ^= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) min((var_8), (4294967291U)))) % (var_1)))));
                        }
                    }
                }
                var_51 = ((((/* implicit */_Bool) 26U)) ? (min((arr_10 [i_1] [8U] [i_0 + 1] [i_0]), (((((/* implicit */_Bool) var_11)) ? (var_11) : (var_1))))) : (((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 + 1])) ? (arr_19 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 - 1]) : (arr_19 [i_0 + 1] [i_0 - 1] [i_1 - 1] [i_1 + 1]))));
            }
        } 
    } 
    var_52 = max((max(((unsigned short)62388), ((unsigned short)62439))), (var_5));
}
