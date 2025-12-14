/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162324
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) <= (5106254442711192361LL))) ? (max((5106254442711192361LL), (var_3))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (7684999393019922495LL)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (max(((((!(((/* implicit */_Bool) -5106254442711192353LL)))) ? (((((/* implicit */_Bool) var_6)) ? (var_14) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((((/* implicit */_Bool) 5106254442711192361LL)) ? (var_3) : (-5106254442711192361LL)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_17 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) <= (6764511950955396787LL))) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((var_14) - (arr_1 [(unsigned char)21]))))) : (var_11)));
            arr_5 [(unsigned char)8] [(unsigned char)1] [(unsigned char)8] = ((((/* implicit */_Bool) 4425383281951135477LL)) ? (-7682778405790192135LL) : (72057576858058752LL));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)214)) - (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (4425383281951135503LL))) : (max((-4290547189926977160LL), (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        }
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)118), ((unsigned char)204)))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_2 - 1] [21LL])))))) ? (((min((var_3), (var_5))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (0LL)))) ? (((4425383281951135477LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned char)199)))))))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (var_7)));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [13LL] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) 7684999393019922495LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3 + 2]))) : (var_12))) | (((((/* implicit */_Bool) -32LL)) ? (939622789775043719LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) arr_10 [2LL])) : (((/* implicit */int) (unsigned char)13))))) | (((((/* implicit */_Bool) 8114524167339419421LL)) ? (var_5) : (939622789775043709LL)))))) ? (((/* implicit */int) arr_3 [21LL] [i_3] [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_10 [(unsigned char)20])) <= (((/* implicit */int) arr_10 [(unsigned char)0])))))));
        var_22 &= var_4;
        var_23 = max((arr_7 [i_3 + 2] [i_3 - 1] [i_3]), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])) | (((/* implicit */int) arr_3 [i_3 + 2] [i_3 + 1] [i_3 + 1]))))));
    }
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_24 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)2]))) : (-4425383281951135478LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_7 [i_4 + 1] [i_4 + 2] [i_4 - 1]))));
        var_25 = ((/* implicit */long long int) (unsigned char)117);
        var_26 = max((((((/* implicit */_Bool) -2838349772289784310LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (4425383281951135477LL))), (min((((((/* implicit */_Bool) var_4)) ? (1243230950613524418LL) : (-198951959116176003LL))), (max((((/* implicit */long long int) var_7)), (-6LL))))));
        arr_15 [i_4] = (+((-(arr_6 [i_4 + 2] [i_4 - 1]))));
    }
    /* LoopSeq 3 */
    for (long long int i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        var_27 = (((-(var_3))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 174644450031602391LL)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_14)) ? (7237097367952398956LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
        var_28 = ((/* implicit */long long int) var_10);
    }
    for (unsigned char i_6 = 4; i_6 < 10; i_6 += 4) 
    {
        var_29 = ((/* implicit */unsigned char) var_12);
        /* LoopNest 2 */
        for (long long int i_7 = 3; i_7 < 11; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    var_30 = 4290547189926977153LL;
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 4; i_9 < 11; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (8114524167339419421LL) : (-1150984908995564287LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2895465792408739388LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)243))))) : (((((/* implicit */_Bool) arr_19 [i_7 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4290547189926977164LL))))) >= (var_11)));
                                var_32 = ((/* implicit */long long int) max((var_32), (min((-4290547189926977180LL), (max((((/* implicit */long long int) max(((unsigned char)255), (arr_10 [i_6])))), (max((arr_25 [i_6] [i_9]), (arr_21 [i_8])))))))));
                                var_33 = min((((/* implicit */long long int) ((arr_25 [i_10 + 2] [i_9 + 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10] [i_10] [i_10 + 2] [i_10 - 2] [7LL])))))), (((((/* implicit */_Bool) var_13)) ? (var_11) : (arr_23 [i_7]))));
                            }
                        } 
                    } 
                    var_34 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) <= (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_19 [(unsigned char)14]))))) : (min((4290547189926977179LL), (((/* implicit */long long int) arr_0 [21LL]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        var_35 = ((/* implicit */long long int) (~(((((/* implicit */int) var_1)) & (((/* implicit */int) arr_10 [i_11]))))));
        var_36 = ((/* implicit */long long int) max((var_36), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) + (((174644450031602376LL) / (-2717440875517766257LL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                var_37 = ((/* implicit */long long int) min((var_37), ((~(4473363006960373916LL)))));
                arr_41 [i_11] [(unsigned char)4] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) - (17LL)));
                arr_42 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_9 [i_12] [(unsigned char)18]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12] [i_11])))))) ? (var_12) : (min((-174644450031602412LL), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_37 [i_11] [i_12] [14LL])) : (((/* implicit */int) (unsigned char)104))))) ? (((/* implicit */int) min(((unsigned char)80), (arr_16 [(unsigned char)4])))) : ((~(((/* implicit */int) var_10)))))))));
                var_38 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_11] [i_13 + 1] [i_13])) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) ((-174644450031602391LL) == (arr_1 [i_12]))))))));
            }
            for (unsigned char i_14 = 1; i_14 < 17; i_14 += 4) 
            {
                arr_45 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_40 [i_14 - 1] [i_14] [i_14 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14 - 1] [(unsigned char)7] [i_14 - 1])))))) < (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14 - 1] [i_14 + 1] [i_14 - 1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        {
                            arr_50 [i_14] [4LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_7 [i_14 - 1] [i_12] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (20LL))) : (max((arr_7 [i_14 - 1] [i_14 - 1] [i_14]), (((/* implicit */long long int) var_6))))));
                            arr_51 [i_12] [i_12] [i_12] [i_14] [i_11] [i_12] [(unsigned char)12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14 + 1])) ? (((/* implicit */int) arr_18 [i_14 + 1])) : (((/* implicit */int) arr_37 [i_11] [i_14 + 1] [i_14 + 1])))))));
                        }
                    } 
                } 
                arr_52 [i_12] [i_12] [i_14] [i_14] = ((/* implicit */long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))), ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) arr_4 [i_12])) - (((/* implicit */int) (unsigned char)174))))))));
            }
            for (long long int i_17 = 1; i_17 < 16; i_17 += 3) 
            {
                arr_55 [i_17] [i_17] [i_11] = ((/* implicit */long long int) var_13);
                var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_11] [i_12] [i_17]), (var_7))))));
            }
            for (unsigned char i_18 = 1; i_18 < 16; i_18 += 4) 
            {
                var_40 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_47 [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)239))))) - (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (-144115188075855872LL))));
                var_41 -= min((max((-8385625435759103576LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_11] [i_18 + 2]))))));
                arr_59 [i_18] [i_11] [i_18] [i_11] = var_12;
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((min((arr_40 [i_18 - 1] [i_18 - 1] [i_18 + 2]), (((/* implicit */long long int) ((unsigned char) var_7))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) < (1515025719742224135LL))))) == ((~(var_11))))))))))));
            }
            arr_60 [i_11] [0LL] [i_12] = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -4425383281951135504LL))))), (var_1)))) ? ((((!(((/* implicit */_Bool) -1515025719742224148LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (unsigned char)95))))) : (var_11))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) (unsigned char)109))))), ((+(1515025719742224135LL))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
        {
            for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                {
                    arr_67 [i_11] [i_19] [i_20] &= ((((/* implicit */_Bool) max((max((var_14), (arr_39 [i_11] [i_11] [i_11]))), ((~(-8359191196308927420LL)))))) ? (arr_9 [i_11] [i_20]) : ((~(var_9))));
                    var_43 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((6023365527580129038LL), (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (-4425383281951135504LL)))) ? (max((2428662462858243610LL), (-4118881809388177328LL))) : (5791686288202946953LL))) : (max((((4902250188962640051LL) - (4425383281951135500LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_20]))) % (1495280914091621580LL)))))));
                }
            } 
        } 
    }
    var_44 = var_6;
}
