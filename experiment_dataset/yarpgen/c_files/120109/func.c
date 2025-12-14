/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120109
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_14 &= ((((((long long int) -1LL)) + (((arr_1 [i_0] [i_0]) / (1LL))))) + ((-(arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = arr_2 [i_0] [i_0];
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = max((9223372036854775807LL), ((~(min((var_6), (var_1))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1580483643745835316LL)) || (((/* implicit */_Bool) var_11)))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [20LL] [i_3 + 1] [20LL] [i_4]))));
                    var_17 = ((((/* implicit */_Bool) (+(1580483643745835316LL)))) ? ((~(var_2))) : (-1499003807458693965LL));
                }
            }
            for (long long int i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    var_18 = arr_10 [i_1] [i_5] [0LL] [i_1];
                    var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_5 + 1] [i_5 + 1] [4LL] [i_5] [i_5] [i_6 - 1]) == (arr_17 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5] [i_6 - 1]))))) <= (((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_6] [i_6 - 1] [7LL] [i_6 - 1])) ? (var_6) : (-3305973278655530943LL)))));
                    arr_20 [i_1] [i_1] [i_5 - 1] [i_5 + 1] = ((-3305973278655530943LL) ^ (7043912462868738364LL));
                    arr_21 [i_1] [18LL] [i_1] [i_1] [i_2] &= var_0;
                }
                var_20 &= ((((/* implicit */_Bool) ((long long int) -4474873399334427116LL))) ? (((((/* implicit */_Bool) -1580483643745835317LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_5 - 1] [i_2])))) || (((/* implicit */_Bool) ((long long int) -5420660968887717555LL))))))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                arr_24 [i_1] [i_1] [i_7] [i_7 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_7 - 1] [i_7 - 1]))));
                var_21 = ((long long int) (!(((/* implicit */_Bool) 35184372088831LL))));
                var_22 = (+(-4473966793397915183LL));
            }
            for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_1] [22LL] [i_1]) : (576460717943685120LL)))))) ? (min((-1LL), (-7522852242272196618LL))) : (1LL));
                var_24 &= var_5;
                var_25 = (-((~(arr_14 [i_1] [i_2] [i_2] [i_8]))));
            }
            for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                arr_31 [i_1] [i_1] [i_2] [i_1] = -35184372088822LL;
                /* LoopSeq 4 */
                for (long long int i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    arr_34 [i_1] [i_1] [i_9] [i_10] [i_2] [i_1] = (+((-(min((var_4), (-7043912462868738365LL))))));
                    var_26 = min((((((((/* implicit */_Bool) 3281776859194872606LL)) ? (-283985295176844482LL) : (-3486888801101585562LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (var_6));
                }
                for (long long int i_11 = 2; i_11 < 21; i_11 += 1) 
                {
                    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8885596344404433936LL))));
                    arr_38 [i_1] [i_1] [16LL] [i_1] [i_1] = var_9;
                    arr_39 [i_1] [i_1] [i_9] [i_9] [i_1] [i_11 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8886543928304477230LL)) ? (-8350896973824206564LL) : (((-619948818927901403LL) | (1LL))))))));
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_42 [i_1] [i_2] [i_2] [i_1] [i_12] = (+((~(8953026906322727534LL))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 2; i_13 < 21; i_13 += 3) 
                    {
                        var_28 = arr_26 [i_1] [i_2];
                        var_29 = ((long long int) arr_12 [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_13 + 1]);
                        var_30 = arr_40 [i_1] [i_1] [i_1] [i_1];
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_1] [i_13 + 1]))));
                        arr_47 [i_1] [i_1] = arr_19 [i_9] [i_9] [i_9] [i_9] [i_9];
                    }
                }
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1LL) % (-5420660968887717555LL)))) ? (((long long int) arr_33 [i_14])) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_1] [i_2])))))) : ((+(var_11)))))));
                    arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] = var_6;
                    var_32 = arr_32 [i_1] [i_14] [i_9] [i_14];
                    arr_51 [i_14] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((long long int) 9223372036854775807LL))))));
                }
                var_33 = -1LL;
                /* LoopSeq 4 */
                for (long long int i_15 = 3; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    var_34 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_44 [i_1] [i_1] [20LL] [i_1] [i_15 + 2])))) ? (min((426336754811072790LL), (var_2))) : (min((36028797018963960LL), (-8350896973824206536LL)))))) ? (-2956824507810661222LL) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_53 [i_1] [i_1] [i_9] [i_15 - 2]) | (4611685468671574016LL))) == (((8796092891136LL) % (var_13))))))));
                    var_35 = (((-((-(131071LL))))) - (((long long int) arr_18 [9LL] [i_9] [i_1])));
                }
                for (long long int i_16 = 3; i_16 < 20; i_16 += 4) /* same iter space */
                {
                    arr_57 [i_1] [11LL] [i_1] [i_1] = ((min((arr_48 [i_1]), (((long long int) 4696963945212241245LL)))) / ((-(max((arr_13 [i_2] [i_1]), (var_3))))));
                    var_36 = max(((~(var_6))), (((/* implicit */long long int) (-(((/* implicit */int) ((var_7) < (-5208638867816144461LL))))))));
                }
                for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    arr_61 [10LL] [i_17] [14LL] [10LL] [i_9] &= ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) -3394452013900407510LL)))))))));
                    arr_62 [i_1] [i_1] [i_1] [i_1] [5LL] = (-(arr_4 [i_1]));
                    var_37 &= ((((/* implicit */_Bool) -6365539248869219109LL)) ? (max((-7886519820511663442LL), (var_8))) : (((var_4) % ((-(-4696963945212241244LL))))));
                }
                for (long long int i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    var_38 = var_12;
                    var_39 = var_9;
                    var_40 = ((/* implicit */long long int) max((var_40), (1029130011988035088LL)));
                    var_41 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5658842378831963663LL)))))));
                    var_42 = ((long long int) var_1);
                }
            }
            var_43 = ((((/* implicit */_Bool) ((arr_16 [12LL] [12LL]) ^ (((long long int) arr_41 [i_1]))))) ? (var_13) : (((long long int) var_9)));
        }
        for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_20 = 1; i_20 < 19; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 2; i_21 < 21; i_21 += 2) 
                {
                    var_44 &= ((((/* implicit */_Bool) ((max(((-9223372036854775807LL - 1LL)), (arr_63 [i_1] [i_19] [i_20] [i_21]))) / (arr_49 [i_21 + 1] [i_20 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (arr_15 [i_1] [i_21] [i_20 + 3] [i_21 + 2]));
                    var_45 = ((long long int) ((((/* implicit */_Bool) 4324633086616612284LL)) ? (arr_48 [i_1]) : (var_5)));
                    var_46 = max((-35184372088833LL), (-2525088657575469730LL));
                    var_47 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 33554431LL)))))) - (((((/* implicit */_Bool) ((arr_53 [i_1] [i_21] [i_21] [i_1]) + (var_7)))) ? ((-(arr_66 [i_20 - 1]))) : (8693228775496848572LL))));
                }
                var_48 = min((min((arr_60 [i_1] [i_1] [i_20 - 1] [i_1]), (var_1))), (((((/* implicit */_Bool) (+(var_3)))) ? ((~(arr_33 [i_1]))) : (((arr_22 [i_1] [i_19] [i_1] [i_1]) ^ (0LL))))));
                var_49 |= max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2302303754925711759LL))))) * (((/* implicit */int) ((((/* implicit */_Bool) 1LL)) || (((/* implicit */_Bool) 562947805937664LL)))))))), ((-(max((-1LL), (8161675086751279679LL))))));
            }
            var_50 = ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (arr_13 [i_1] [i_1]) : (6143251421157539868LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_13 [i_1] [i_1])))))));
            var_51 = ((long long int) 4LL);
        }
    }
    for (long long int i_22 = 2; i_22 < 20; i_22 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 22; i_23 += 4) 
        {
            for (long long int i_24 = 0; i_24 < 22; i_24 += 3) 
            {
                {
                    var_52 = ((/* implicit */long long int) min((var_52), (arr_45 [10LL] [17LL] [i_24] [i_24])));
                    arr_80 [i_22] [i_23] [i_23] = var_8;
                    var_53 |= min((((((/* implicit */_Bool) 144080003703767040LL)) ? (((arr_44 [i_22 + 1] [i_22 + 1] [i_22 - 2] [i_23] [i_23]) / (var_0))) : (arr_53 [i_22] [i_23] [i_23] [i_22]))), (((((/* implicit */_Bool) ((var_1) / (arr_19 [i_24] [i_23] [13LL] [i_24] [i_22])))) ? ((+(var_11))) : (((-1128423328877761981LL) / (2180272853054080154LL))))));
                }
            } 
        } 
        var_54 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_11 [i_22] [i_22 - 2]) >= (-4696963945212241245LL))))));
        var_55 ^= ((4191326818644004950LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6365539248869219115LL)) ? (var_13) : (102929348453350458LL)))))))));
        arr_81 [i_22] = -6004375576129155169LL;
        var_56 = max((min(((-(arr_64 [12LL] [i_22] [i_22] [i_22] [i_22 - 2] [i_22]))), (((13LL) << (((var_1) + (8468585110746838601LL))))))), (min((((long long int) 5287997269462275279LL)), (((long long int) var_13)))));
    }
    for (long long int i_25 = 2; i_25 < 20; i_25 += 1) /* same iter space */
    {
        var_57 = ((/* implicit */long long int) min((var_57), (((((long long int) ((((/* implicit */_Bool) 34359476224LL)) ? (-7292206288768428556LL) : (arr_79 [i_25 + 2] [i_25 - 1] [i_25] [i_25])))) | (((8885596344404433936LL) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [22LL]))))))))))));
        arr_86 [i_25] = max((((long long int) 9007199254736896LL)), (var_1));
        var_58 = ((((arr_83 [i_25]) + (((long long int) -8251667155036612785LL)))) + (arr_27 [i_25]));
    }
    /* LoopSeq 1 */
    for (long long int i_26 = 0; i_26 < 14; i_26 += 4) 
    {
        var_59 &= max((var_1), (var_13));
        arr_90 [3LL] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_84 [i_26] [i_26])))))));
        arr_91 [i_26] = ((long long int) arr_60 [i_26] [i_26] [10LL] [i_26]);
        var_60 = ((long long int) max((-9223372036854775797LL), (-1LL)));
        arr_92 [i_26] [i_26] = (-((((+(arr_60 [i_26] [i_26] [i_26] [20LL]))) ^ (arr_26 [i_26] [3LL]))));
    }
    var_61 = ((var_10) % (((/* implicit */long long int) ((/* implicit */int) (((-(var_7))) != (min((1LL), (698295505939859150LL))))))));
    var_62 = (-(((long long int) ((((/* implicit */_Bool) var_2)) ? (-4809700809065359090LL) : (3750121927140317668LL)))));
}
