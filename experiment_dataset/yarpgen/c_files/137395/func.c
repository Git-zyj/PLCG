/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137395
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_2 [13LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -3476119305020748006LL)) ? (arr_0 [i_0]) : (-8116005593773375790LL))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((-8574599435657055064LL) == (18012199486226432LL))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_11))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -3863032292948558061LL))))) >> (((arr_6 [i_1]) - (872328233289263009LL)))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] = max((-3999646463307880827LL), (8116005593773375799LL));
            arr_12 [9LL] [i_1] = (-(min((min((var_9), (var_7))), (arr_0 [i_2]))));
            var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_6) : (arr_1 [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (-8323360606709152951LL) : (-5221061988266012381LL))) : (var_1)))));
            arr_13 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_5 [i_1]))))));
            arr_14 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095LL)) ? (arr_1 [i_1] [i_2]) : (var_12)))) ? (-5935512721342996841LL) : (0LL)))) || (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1])) || ((!(((/* implicit */_Bool) 0LL))))))));
        }
        for (long long int i_3 = 2; i_3 < 11; i_3 += 2) /* same iter space */
        {
            arr_18 [i_1] [i_3] [i_3 + 3] = ((((/* implicit */_Bool) 3999646463307880826LL)) ? (4640238301882182632LL) : (-3833189052590277525LL));
            arr_19 [i_3] [i_3] [i_3] = ((long long int) (~(-3257885296486002159LL)));
            /* LoopSeq 3 */
            for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                arr_22 [i_3 + 3] [i_1] = arr_0 [i_4 + 1];
                var_15 = ((((/* implicit */_Bool) max((arr_7 [i_3 - 1]), (var_7)))) ? (((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (-4640238301882182633LL) : (arr_5 [i_3 + 2]))) : (arr_7 [i_3 + 2]));
                arr_23 [i_1] = (~(((long long int) var_0)));
            }
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_6] [i_3 + 2])) ? (arr_8 [4LL] [i_3]) : (arr_7 [i_1]))) >= (((((/* implicit */_Bool) arr_28 [i_1] [i_3])) ? (arr_17 [i_3] [i_3]) : (-1LL))))))) ^ (min((max((arr_15 [i_5]), (var_3))), (arr_26 [i_3])))))));
                    arr_31 [i_6 - 1] [i_5] [i_3] [i_1] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) -5306591486698173938LL))))), (((long long int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_3 - 2] [i_5]))))));
                }
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 18012199486226428LL)) || (((/* implicit */_Bool) arr_5 [i_1])))))));
                var_18 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4640238301882182632LL)) ? (var_5) : (arr_16 [i_3] [i_3])))))) ? (var_12) : (((((arr_16 [i_1] [i_3]) < (var_12))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_1] [i_5] [i_3] [i_5])) && (((/* implicit */_Bool) arr_0 [i_1])))))) : (arr_7 [i_3]))));
            }
            for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_34 [i_3] [i_3] = max((-5306591486698173938LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775780LL)) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))))));
                var_19 = ((/* implicit */long long int) max((var_19), (arr_32 [i_3] [i_3] [i_1])));
            }
            arr_35 [i_3] [i_1] = arr_30 [i_3 + 2] [i_3] [i_3] [i_3] [0LL] [0LL];
        }
        for (long long int i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
        {
            arr_40 [6LL] = var_12;
            var_20 -= ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) < (-4640238301882182652LL)));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_43 [i_1] = ((((/* implicit */_Bool) arr_41 [i_1] [5LL] [3LL])) ? (arr_41 [i_1] [i_1] [i_1]) : (arr_41 [i_1] [i_9] [i_9]));
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((((-18012199486226432LL) + (9223372036854775807LL))) << (((var_10) - (6432542770201873991LL)))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((arr_0 [i_10 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_10 + 3]) >= (-5306591486698173938LL))))))))));
                    }
                } 
            } 
            arr_48 [i_1] [i_1] [i_9] = arr_28 [i_1] [i_9];
            var_23 = ((arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) % (arr_36 [i_9] [i_9] [i_1]));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            arr_52 [i_1] = ((arr_36 [i_12] [i_12] [i_12]) ^ (arr_36 [i_1] [i_1] [i_1]));
            var_24 = ((((/* implicit */_Bool) ((long long int) arr_17 [i_1] [i_1]))) ? (34359738367LL) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (18014261070528512LL))));
            var_25 = ((/* implicit */long long int) min((var_25), (arr_41 [i_1] [i_12] [i_12])));
            arr_53 [i_1] [10LL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
        }
        /* vectorizable */
        for (long long int i_13 = 2; i_13 < 11; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 3; i_14 < 12; i_14 += 2) /* same iter space */
            {
                arr_58 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_13 + 2] [i_13] [i_1])) && (((/* implicit */_Bool) arr_45 [i_14 + 2] [i_13] [i_13 + 2]))));
                arr_59 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_13 + 2]) == (arr_27 [i_1]))))) ^ (arr_47 [5LL] [i_13 - 2] [i_14 - 1] [i_14] [i_14]));
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    var_26 ^= ((((/* implicit */_Bool) -6472301816526438041LL)) ? (-18012199486226449LL) : (1763461368885173124LL));
                    /* LoopSeq 4 */
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_27 = var_10;
                        var_28 = ((/* implicit */long long int) min((var_28), (arr_50 [i_14 + 1])));
                    }
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        arr_71 [7LL] [i_13 + 2] [i_13] [i_13] [5LL] = var_7;
                        arr_72 [i_17] [7LL] = (+(arr_47 [i_1] [i_13 - 2] [2LL] [i_15] [i_17]));
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 520192LL))));
                        arr_73 [i_1] [2LL] [i_13] [i_14 + 1] [i_15] [i_15] [i_17] = ((arr_10 [i_14 - 1] [i_14 + 1] [i_13 - 1]) & (arr_20 [i_14 - 1] [i_14 - 2] [i_13 - 1]));
                    }
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        arr_76 [i_18] [i_15] [i_15] [i_14] [i_13] [i_1] [3LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1763461368885173124LL))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_14 - 2] [i_13 + 1])) && (((/* implicit */_Bool) arr_17 [i_14 - 2] [i_13 - 1])))))));
                        var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7005177882296380463LL)) ? (-520182LL) : (-2540853872200248424LL))) > (((((/* implicit */_Bool) var_1)) ? (-1LL) : (arr_61 [i_1])))));
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        var_32 = arr_66 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19];
                        arr_79 [i_1] [i_13] [i_13] [i_19] = -1LL;
                        arr_80 [3LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 7058013872594861770LL)))));
                    }
                    arr_81 [i_1] [i_13] [i_14] [i_15] [i_13] = -9223372036854775783LL;
                }
                for (long long int i_20 = 0; i_20 < 14; i_20 += 2) 
                {
                    arr_84 [i_20] [i_20] [5LL] [i_14] [i_13] [i_1] = (+(arr_68 [i_1] [i_13] [i_14 - 2] [i_14 - 1] [i_20]));
                    var_33 = (~(arr_45 [i_20] [i_20] [i_20]));
                }
            }
            for (long long int i_21 = 3; i_21 < 12; i_21 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */long long int) ((-8348700623448551564LL) < (-1763461368885173125LL)));
                arr_89 [i_13] = ((arr_39 [i_1] [i_1]) + (arr_39 [i_1] [i_1]));
            }
            var_35 = arr_27 [i_1];
        }
        var_36 = max((max((arr_61 [i_1]), (arr_1 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_1])) ? (2118814484081439640LL) : (arr_63 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    var_37 = max((-520181LL), (((((/* implicit */_Bool) var_7)) ? (min((-9213225764561734042LL), (5643380023428650002LL))) : ((-(var_10))))));
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((long long int) var_7)))) && (((/* implicit */_Bool) 8076879141497981035LL))));
    var_39 = (((!(((/* implicit */_Bool) var_12)))) ? (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((var_10) - (-1LL))));
    var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -3566987736806056750LL)))) ? (((long long int) 8108013711947557866LL)) : (min((1099511627776LL), (-6798827515095894846LL)))))))))));
}
