/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13472
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
    var_11 = max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), ((~(var_2))))), (((var_4) | (var_0))));
    var_12 = 11716084778691217595ULL;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_7) : (arr_2 [i_0])))) ? ((~(36028659580010496ULL))) : (var_1))) < (min((arr_2 [i_0]), (min((arr_1 [i_0]), (arr_2 [i_0])))))));
        var_14 = (~(((1099511619584ULL) / (((arr_0 [i_0]) - (var_9))))));
        arr_4 [i_0] = ((unsigned long long int) min((arr_2 [i_0]), (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            arr_7 [i_1] [i_0] |= 1123700883587072ULL;
            arr_8 [i_1] [i_0] [i_0] = ((unsigned long long int) arr_3 [i_0] [i_0]);
            arr_9 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (arr_2 [i_0]))) ^ (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_1]))));
            var_15 &= var_2;
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            arr_13 [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 16328494881744609519ULL)) && (((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_0])))))))) % (((unsigned long long int) arr_3 [i_0] [i_0])));
            var_16 = ((/* implicit */unsigned long long int) (!(((arr_5 [i_0] [i_0] [i_0]) > (arr_5 [i_0] [i_0] [i_2])))));
            var_17 = (+(min(((~(arr_1 [i_2]))), (((((/* implicit */_Bool) 12066180969924888996ULL)) ? (18445620372825964523ULL) : (arr_6 [i_2] [i_2] [i_0]))))));
        }
        arr_14 [i_0] = 6414719190914364697ULL;
    }
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        arr_17 [i_3 + 3] = ((unsigned long long int) ((18445620372825964507ULL) * (((unsigned long long int) var_8))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_3] [i_3] [i_6] [i_3] = min((max((arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 2]), (arr_18 [i_3 + 1] [i_3 - 1]))), (var_0));
                            var_18 += (-(((unsigned long long int) arr_23 [i_3 + 3] [i_3 + 2] [i_3 - 1] [i_3])));
                            arr_27 [i_3] = 1123700883587119ULL;
                        }
                    } 
                } 
            } 
            var_19 = arr_16 [i_3];
        }
        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            var_20 = ((((/* implicit */_Bool) ((arr_29 [i_8] [i_8 - 1] [i_8]) / (((var_0) & (288229276640083968ULL)))))) ? (max((arr_2 [i_3 + 3]), (arr_2 [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((3490038939128145236ULL) + (18428729675200069632ULL)))))))));
            var_21 = (~((+(min((arr_5 [i_3] [i_3 + 3] [i_3 + 3]), (arr_18 [i_8] [i_3 + 1]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                arr_33 [8ULL] &= min((arr_3 [i_9] [i_8]), (max((18445620372825964501ULL), (arr_29 [i_3 + 2] [i_3 + 2] [12ULL]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 4) 
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((36028762659225600ULL) <= (arr_32 [i_8 - 1] [i_8] [i_8 - 1])))))))));
                    arr_36 [i_8] [i_8] [i_8] [i_8 - 1] = arr_21 [13ULL] [i_8 + 1] [i_9] [i_10];
                    var_23 = min((max((arr_10 [i_3 + 1]), (arr_10 [i_3 + 3]))), (((/* implicit */unsigned long long int) ((var_4) < (arr_10 [i_3 + 3])))));
                }
                arr_37 [i_3] [i_3] [i_8] [i_9] = (((-(137437904896ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8 + 1] [i_8])))))));
                var_24 = arr_11 [6ULL] [i_8 + 1] [i_8 + 1];
                arr_38 [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_3] [i_8 - 1])) || (((/* implicit */_Bool) arr_34 [i_3 - 1] [i_8 - 1]))))) != (((/* implicit */int) ((((arr_34 [i_3 + 3] [i_9]) % (18410715311050326016ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) <= (var_5))))))))));
            }
        }
        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4494803534348288ULL)))) ? (arr_30 [12ULL] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_3] [18ULL] [10ULL]) <= (4294966272ULL))))))))));
        var_26 += max((63050394783186944ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 + 3] [i_3 + 3]))))));
        var_27 = ((/* implicit */unsigned long long int) ((18410715311050326016ULL) == ((~(max((arr_1 [i_3]), (1123700883587119ULL)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                {
                    var_28 |= (+(max(((-(arr_11 [i_11] [i_11] [i_11]))), (max((12481114778881625266ULL), (arr_48 [i_11] [i_12] [i_11] [i_12]))))));
                    arr_49 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((min((((9072745972171523668ULL) / (14272259714969090881ULL))), (((((/* implicit */_Bool) 1123700883587119ULL)) ? (var_9) : (7550592420071594000ULL))))) <= (arr_42 [i_11])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        arr_53 [i_11] [i_12] [i_11] [i_14] = min((((unsigned long long int) var_1)), ((~(arr_51 [i_13] [i_13 - 1] [i_13 + 1] [14ULL] [i_13]))));
                        arr_54 [i_11] [i_11] [i_11] [i_11] = max((((arr_48 [i_11] [i_12] [i_13 + 2] [i_14]) - (arr_48 [i_11] [i_11] [i_13 + 2] [i_13 + 2]))), (max((18445620372825964501ULL), (arr_48 [i_11] [i_11] [i_13 + 2] [i_14]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 4) 
                        {
                            arr_58 [i_11] [i_11] [i_11] [i_11] [i_11] = min((min((arr_3 [i_15] [i_13]), (36028762659225600ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_12]))))));
                            var_29 = ((((arr_44 [i_15 + 3]) - (((arr_56 [i_11] [i_11] [8ULL] [i_13 - 2] [i_11] [i_12] [i_11]) + (arr_57 [i_13] [i_14] [11ULL] [i_13] [i_12] [11ULL]))))) + (((18014398509481984ULL) - (18014398509481982ULL))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((arr_2 [i_13]) >= (((min((arr_43 [i_14] [i_13]), (arr_5 [i_11] [i_11] [i_11]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_11] [i_12] [i_11] [i_13] [i_14] [i_15 + 3])) && (((/* implicit */_Bool) arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))))))))));
                        }
                        arr_59 [i_11] [i_11] [i_11] = (-(((unsigned long long int) 18014398509481985ULL)));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (max((((arr_52 [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13 + 2]) - (((((/* implicit */_Bool) var_2)) ? (arr_50 [3ULL] [i_13 - 2] [i_13] [i_11] [i_11]) : (arr_3 [i_11] [7ULL]))))), (((/* implicit */unsigned long long int) ((((unsigned long long int) 70931694131085312ULL)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_14] [i_11] [i_11]) <= (arr_42 [i_11]))))))))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_32 *= ((((/* implicit */_Bool) 11368618062224661639ULL)) ? (12992963203114463234ULL) : (min((((((/* implicit */_Bool) 3891322743117670893ULL)) ? (18014398509481984ULL) : (arr_47 [i_13 - 2] [i_12] [i_11]))), (var_5))));
                        arr_62 [i_11] [i_12] [i_13 + 1] [i_16] [i_13 + 2] [i_12] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_56 [i_11] [i_12] [i_12] [i_12] [i_13] [i_11] [3ULL]), (arr_52 [i_11] [i_11] [9ULL] [i_16] [i_11] [i_13]))))))), (((var_10) + (arr_48 [i_13 - 2] [17ULL] [17ULL] [i_16]))));
                        arr_63 [i_16] [i_12] [11ULL] [i_12] [i_12] [i_11] = var_5;
                        var_33 = ((/* implicit */unsigned long long int) (((~(arr_12 [i_13 + 1] [i_13 - 1] [i_13 + 1]))) > (1123700883587072ULL)));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            var_34 += ((unsigned long long int) (+(((12032024882795186919ULL) * (18375812379578466304ULL)))));
                            arr_69 [i_11] [i_11] [i_13 - 2] [i_17] [i_18] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_13 + 2] [i_12] [i_13]))))) - (((/* implicit */int) ((min((arr_0 [i_12]), (var_6))) > (min((18375812379578466304ULL), (36028762659225600ULL))))))));
                            arr_70 [i_18] [i_18] [i_13] [i_18] [i_11] = ((arr_47 [i_13 + 2] [i_13 - 2] [i_13 + 1]) / (max((arr_47 [i_13 + 2] [i_13 - 1] [i_13 - 2]), (4503599627239424ULL))));
                            var_35 &= ((((((/* implicit */_Bool) 2198486384640ULL)) ? (((unsigned long long int) arr_65 [i_11] [i_12] [i_13 - 2] [i_17] [i_17] [4ULL])) : (arr_55 [i_13 - 2] [i_13] [i_13] [i_13] [10ULL] [i_13 - 2]))) - (((arr_66 [i_13 - 2] [i_13 + 1] [7ULL] [i_13 + 2]) & (arr_12 [18ULL] [18ULL] [i_13 + 2]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 1) 
                        {
                            arr_73 [i_11] [i_11] [i_13] [10ULL] [i_17] [i_19] = min((arr_46 [i_11]), (((max((arr_1 [i_11]), (arr_39 [i_11]))) + (((17051474447485520817ULL) + (504403158265495552ULL))))));
                            var_36 = (+((((!(((/* implicit */_Bool) 36028762659225568ULL)))) ? (((70931694131085325ULL) - (7411391112642749485ULL))) : (10817190636259075818ULL))));
                            arr_74 [7ULL] [7ULL] [i_13] [7ULL] [7ULL] = max(((~(arr_41 [i_13 + 2]))), (min((max((arr_44 [i_12]), (arr_56 [i_11] [i_11] [i_13 + 1] [i_17] [i_19] [i_11] [i_11]))), (min((arr_65 [i_11] [i_12] [i_13 + 1] [i_12] [i_19 + 1] [i_13 + 1]), (4294967296ULL))))));
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) ((((((var_0) & (arr_50 [i_20] [i_12] [i_12] [i_12] [i_11]))) ^ (var_9))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [13ULL] [13ULL])) || (((/* implicit */_Bool) 6414719190914364697ULL))))), (var_6)))));
                            var_38 = arr_60 [9ULL] [i_17] [i_17] [i_13] [i_11] [i_11];
                        }
                        var_39 |= (((((-(arr_42 [i_12]))) + (((unsigned long long int) 2251799813652480ULL)))) - (((((/* implicit */_Bool) 1099511627712ULL)) ? (2251799813652494ULL) : (max((18375812379578466306ULL), (var_7))))));
                    }
                    var_40 = min((36028762659225600ULL), (max(((-(3458764513820540928ULL))), (((/* implicit */unsigned long long int) ((4ULL) != (arr_48 [i_13] [i_13] [i_12] [i_11])))))));
                }
            } 
        } 
    } 
}
