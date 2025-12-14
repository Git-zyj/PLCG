/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12806
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-28892)) - (((/* implicit */int) (short)26587)))))));
        arr_2 [(short)16] = ((/* implicit */short) (~(-6297219184175222761LL)));
        var_12 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 3])) % (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)26595)))) : ((+(277671627379614158LL))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26587)) ? (((/* implicit */int) (short)26588)) : (((/* implicit */int) (short)26574))))) ? ((+(((/* implicit */int) max(((short)32767), ((short)-26570)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32762)))))));
        var_14 += (short)-27418;
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */long long int) var_0))))) ? (7119107002415539925LL) : (min((((/* implicit */long long int) (short)-32760)), (arr_0 [i_2]))))) & (max((var_3), (arr_7 [i_2])))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            var_15 = arr_12 [i_2] [i_2];
                            arr_18 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)32760))) == (arr_13 [i_4 - 1] [i_5 + 1] [i_6 + 1])));
                            arr_19 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3] = var_10;
                            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) 288230376150663168LL)) ? (((/* implicit */int) arr_11 [i_4] [i_5])) : (((/* implicit */int) arr_6 [i_3] [i_3]))));
                            arr_20 [i_3] [5LL] [i_3] [i_3] [i_6] = ((((/* implicit */_Bool) -7119107002415539925LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : ((-9223372036854775807LL - 1LL)));
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_24 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((-7119107002415539928LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)27419)) : (((/* implicit */int) (short)-32760)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32754))) : (((arr_8 [i_2]) + (3265887315871521020LL)))));
                            arr_25 [i_7] [i_7] [i_4] [i_3] [i_4] = ((/* implicit */short) max(((-(arr_17 [i_2] [i_2] [i_3]))), (((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32757))) : (arr_0 [i_2]))) & (((/* implicit */long long int) ((/* implicit */int) min((var_2), (var_9)))))))));
                            var_17 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_2] [i_4] [i_2])))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 + 1])))))));
                            arr_26 [i_3] [i_3] = ((-861784312234962584LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-19917))));
                        }
                        for (short i_8 = 2; i_8 < 10; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (max(((short)-847), ((short)32767)))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((-779650517557577244LL), (max((max((-779650517557577259LL), (-8794427212292656555LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)9538))))))))))));
                            arr_30 [i_2] [i_3] [i_5] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */long long int) (short)27408)), (0LL))) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */int) (short)847)) != (((/* implicit */int) arr_15 [i_8 + 1] [i_4 - 1] [i_3 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2] [i_5 + 1] [i_5 + 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1])) && (((/* implicit */_Bool) arr_22 [i_3] [i_5 - 2] [i_8 + 2] [i_8 + 2] [(short)9] [i_8 - 1] [i_8 + 1])))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15415))) : (1432582337933275322LL)))))) ? (((/* implicit */int) (short)-9495)) : (((/* implicit */int) var_8))));
                        }
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            arr_35 [i_3] [i_5 - 1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (short)-32765)))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)-29665))))))))));
                            var_21 = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))), (arr_8 [i_2]));
                            arr_36 [i_3] [i_3] [1LL] [i_5] [1LL] [i_5] [i_5 + 2] = max((min((var_10), (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))), (arr_10 [i_2] [i_3] [i_3]));
                            var_22 = -4546227702521768263LL;
                            var_23 = max((((/* implicit */short) ((arr_27 [i_4] [i_5] [i_9]) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((short) var_10)));
                        }
                        var_24 *= ((/* implicit */short) (!(((/* implicit */_Bool) -5515547251078430692LL))));
                        arr_37 [i_2] [i_3] [i_4 + 2] [i_3] = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_10])) / (((/* implicit */int) ((short) var_6)))));
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_41 [i_10]))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)-11964), ((short)32760)))))))));
            /* LoopNest 3 */
            for (short i_12 = 2; i_12 < 15; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    for (long long int i_14 = 1; i_14 < 15; i_14 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) 4657424953608422081LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))));
                            arr_53 [i_14] [i_12] [i_12] [i_13] [i_14 - 1] = ((/* implicit */short) ((long long int) -1714823687256976701LL));
                        }
                    } 
                } 
            } 
        }
        arr_54 [i_10] [i_10] = max(((short)9502), (((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_10] [i_10] [12LL] [i_10] [i_10] [8LL]))))));
        arr_55 [i_10] = ((/* implicit */long long int) max(((short)6786), ((short)-3)));
        var_28 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_48 [i_10] [i_10] [i_10] [i_10] [2LL] [i_10]) >> (((((/* implicit */int) arr_44 [i_10] [i_10] [i_10])) - (32218))))))));
    }
    /* LoopNest 3 */
    for (long long int i_15 = 1; i_15 < 17; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 1; i_18 < 17; i_18 += 3) 
                    {
                        for (long long int i_19 = 3; i_19 < 17; i_19 += 3) 
                        {
                            {
                                arr_73 [i_15] [5LL] [i_15] = 8162584135550418606LL;
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((/* implicit */int) arr_72 [i_17] [i_18 - 1] [i_18] [2LL] [i_17] [i_16] [i_17])))))));
                                var_30 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)32760)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        arr_77 [i_17] [i_16] [i_17] [i_20] [i_15 + 1] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_15 + 1] [i_15 - 1])) ? (((/* implicit */int) arr_61 [i_15] [i_15 - 1])) : (((/* implicit */int) arr_61 [i_15] [i_15 + 1]))));
                        var_31 = arr_56 [i_15 - 1];
                    }
                    for (long long int i_21 = 3; i_21 < 17; i_21 += 4) 
                    {
                        var_32 = ((/* implicit */short) -2602867343020739211LL);
                        var_33 = ((/* implicit */short) (+(((long long int) arr_58 [i_15 + 1]))));
                        var_34 = ((/* implicit */short) min((arr_3 [i_15] [i_15]), (((/* implicit */long long int) ((((/* implicit */_Bool) max((4716615964444682647LL), (-6492566525855583582LL)))) ? (((/* implicit */int) (short)-11964)) : (((/* implicit */int) var_5)))))));
                    }
                    for (short i_22 = 3; i_22 < 15; i_22 += 4) 
                    {
                        var_35 = ((/* implicit */long long int) (short)6795);
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_71 [i_22 - 3] [i_22 - 2] [i_22] [i_22] [i_22] [i_22 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)511))) : (arr_65 [i_17] [i_22 - 2] [i_22 - 2] [i_22])))))));
                    }
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_65 [i_15] [i_15 - 1] [i_15] [i_15]), (1578686003955981837LL)))) ? (((/* implicit */int) ((short) (short)12216))) : (((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_16] [i_16] [i_17] [i_17])) ? (((/* implicit */int) (short)11962)) : (((/* implicit */int) arr_72 [i_15] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))))));
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 19; i_23 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 19; i_24 += 3) 
                        {
                            arr_88 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_1) : (((((/* implicit */long long int) ((/* implicit */int) arr_82 [i_15] [i_16] [i_15] [(short)16] [i_24]))) / (8794427212292656558LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-7))))), ((short)-1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_69 [i_23])))));
                            arr_89 [i_16] [i_15] = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20449)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)7936))))) : (((long long int) var_2)))), (-4716615964444682647LL)));
                            arr_90 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) max((var_4), (((/* implicit */long long int) (short)-11962))));
                            var_38 = ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) 8794427212292656555LL)) ? (((/* implicit */int) arr_75 [i_15 + 1] [i_15] [i_15 - 1] [13LL] [i_15])) : (((/* implicit */int) (short)-873)))))))) ? (((((/* implicit */_Bool) arr_56 [i_24])) ? (arr_65 [i_15] [i_23] [i_17] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_15] [i_15 + 2] [i_15 - 1]))))) : (arr_64 [i_15]));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_25 = 0; i_25 < 19; i_25 += 3) 
                        {
                            var_39 = ((/* implicit */long long int) max((var_39), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11956))) : (var_1)))));
                            var_40 = ((/* implicit */long long int) max((var_40), ((-(17592186044384LL)))));
                            var_41 *= ((/* implicit */short) (+(arr_62 [i_16] [i_17] [i_23] [i_23])));
                        }
                        for (long long int i_26 = 0; i_26 < 19; i_26 += 4) 
                        {
                            var_42 = max((max((max((-4716615964444682623LL), (-8794427212292656555LL))), (((4716615964444682647LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))), (((/* implicit */long long int) ((arr_65 [i_15] [i_16] [i_23] [i_23]) == (((((/* implicit */_Bool) -5432942995600427313LL)) ? (var_1) : (-5432942995600427321LL)))))));
                            arr_96 [i_15] [i_15] [i_15] [i_23] [i_26] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) -1LL)))) ? (665414393287319978LL) : (((/* implicit */long long int) (-(((/* implicit */int) (short)11467)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) 227388114454482054LL)) ? (1327245356343355283LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14953)))));
}
