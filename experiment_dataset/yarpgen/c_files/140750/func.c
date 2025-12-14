/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140750
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                arr_11 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_2]);
                arr_12 [i_0] [(unsigned short)9] [i_2] = (+(((/* implicit */int) var_4)));
            }
            for (int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned char) (unsigned short)41198);
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0]))) << (((max((max((3419779797U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) arr_14 [i_0] [(_Bool)1] [i_0])))) - (3419779779U)))));
            }
            for (int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
            {
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)8141);
                var_15 *= ((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)57395)), (2064384LL))), (((/* implicit */long long int) (short)-1))));
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) * ((~(((((/* implicit */_Bool) arr_16 [i_4])) ? (-2064384LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_6])))))))));
                        arr_24 [i_6] [i_6] [i_0] [(unsigned short)11] [i_6] [i_6] = min((((/* implicit */unsigned int) (!(var_0)))), (0U));
                        var_17 -= ((/* implicit */short) min(((-(((/* implicit */int) (short)-5901)))), (((var_6) & ((~(((/* implicit */int) arr_15 [i_5] [12] [i_0]))))))));
                        var_18 = ((/* implicit */_Bool) arr_2 [4U] [i_0]);
                        var_19 = ((((((/* implicit */_Bool) ((((/* implicit */int) (short)16839)) * (((/* implicit */int) var_0))))) ? (arr_20 [(unsigned char)12] [i_6 + 1] [i_0] [i_6 - 1] [i_6] [i_6 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) < (min((arr_0 [i_0]), (875187517U))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_4] = ((/* implicit */signed char) min((min((arr_8 [i_0]), (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_4] [i_5] [(short)6])))), (((/* implicit */unsigned int) max((arr_2 [i_0] [i_0]), (((/* implicit */short) var_0)))))));
                        var_20 = ((/* implicit */unsigned char) arr_4 [i_0] [4LL]);
                    }
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((max((((/* implicit */int) arr_23 [(_Bool)1] [i_1] [12] [i_5] [i_5])), (arr_27 [i_0] [(signed char)4] [i_1] [3LL] [i_5]))) + (((var_6) / (((/* implicit */int) (short)4)))))))));
                    var_22 = ((/* implicit */long long int) ((max((18446744073709551598ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3419779779U)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0]))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((unsigned short) max(((~(875187531U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_1] [i_4] [i_8])) == (((/* implicit */int) (unsigned short)57383))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((((/* implicit */int) (_Bool)0)) + (arr_27 [(_Bool)1] [i_1] [(_Bool)1] [i_4] [i_8]))) : ((+(((/* implicit */int) var_8))))))) ? ((+(((/* implicit */int) ((short) -1041631097))))) : (((/* implicit */int) var_8)))))));
                    var_25 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [(_Bool)1] [i_0]);
                }
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        arr_36 [i_0] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) 1378459868)) ? (arr_20 [7ULL] [i_0] [i_0] [15U] [i_9] [(signed char)5]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_10 - 3])) ^ (((/* implicit */int) arr_1 [i_10 - 2]))))));
                        arr_37 [(signed char)0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_10 - 1] [i_10 + 1] [i_10 - 2]);
                    }
                    var_26 = ((/* implicit */unsigned short) var_8);
                }
                var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_9)))) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min(((unsigned short)8141), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4])) == (((/* implicit */int) arr_3 [i_1])))))));
            }
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_0])) ? (var_5) : (((/* implicit */int) arr_32 [i_0] [i_1] [i_0] [2ULL])))) ^ (((/* implicit */int) var_11)))))))));
        }
        var_29 = ((/* implicit */unsigned char) (_Bool)0);
        var_30 = ((/* implicit */signed char) (_Bool)1);
        var_31 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0])), (min((((/* implicit */long long int) arr_31 [i_0] [i_0] [i_0] [(signed char)11])), (min((-775532436124956279LL), (8854724033695544052LL)))))));
    }
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            {
                arr_45 [10ULL] &= ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_2 [i_11] [(unsigned short)12]), (((/* implicit */short) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_31 [i_11] [14] [i_12] [i_12]), (((/* implicit */unsigned short) var_4))))))));
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
                {
                    arr_49 [i_11] [i_11] [i_13] [i_13] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_22 [(unsigned short)5] [i_13] [i_13])))) ? (max((arr_22 [i_11] [i_12] [i_13]), (arr_22 [i_11] [i_12] [i_13]))) : (max((arr_22 [i_12] [i_12] [i_13]), (arr_22 [i_11] [i_11] [i_11])))));
                    arr_50 [i_12] [2LL] &= ((/* implicit */unsigned short) (~(arr_13 [i_11] [i_12] [i_11] [i_11])));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_56 [9LL] [i_13] [i_13] [9LL] [(_Bool)1] [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_11] [i_12] [i_12] [i_13])) ? (min((var_6), (((((/* implicit */int) (unsigned short)57394)) - (((/* implicit */int) arr_9 [i_11] [i_12] [i_13] [i_14])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)57383))))));
                                var_32 = ((/* implicit */int) min((var_32), ((+((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [i_11] [(unsigned short)0] [i_13] [(short)9] [(unsigned short)0])), ((unsigned char)66))))))))));
                                arr_57 [i_13] [(unsigned char)10] [i_12] [i_13] [i_14] [i_14] = (+(min((((/* implicit */long long int) arr_51 [i_11] [i_13] [(signed char)7] [(signed char)7] [i_13])), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))))))));
                            }
                        } 
                    } 
                }
                for (int i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_25 [i_11] [(short)4] [1U] [i_11] [i_18]) : (((/* implicit */int) var_1))));
                                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) min((1045109872), (((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                    var_35 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (arr_63 [i_16] [i_16] [i_12] [(_Bool)1] [i_11])));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) min((((((/* implicit */long long int) var_2)) / (775532436124956278LL))), (((/* implicit */long long int) ((arr_17 [i_11] [(_Bool)1] [i_12] [(short)12]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8153)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        for (signed char i_20 = 0; i_20 < 16; i_20 += 2) 
                        {
                            {
                                var_37 = arr_14 [i_12] [i_16] [i_20];
                                arr_72 [i_11] [i_16] [i_16] [i_19] [i_19] [i_20] [i_20] = ((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), (arr_38 [i_12])));
                            }
                        } 
                    } 
                }
                for (int i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_21 [(unsigned char)16] [i_12] [(unsigned short)2] [i_21] [i_12]))))))), (max((arr_16 [3]), (arr_16 [i_11]))))))));
                    var_39 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) / (var_9));
                    arr_75 [i_11] [i_11] [3U] [i_21] = (i_21 % 2 == 0) ? (((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_21 [i_21] [i_12] [2ULL] [2ULL] [i_21])) ? (var_9) : (((/* implicit */unsigned long long int) 446031426)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((2064384LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))))))) & (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) << (((arr_65 [i_12] [i_21] [i_21] [i_12] [i_12]) - (2079775198281893363LL))))))))))) : (((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_21 [i_21] [i_12] [2ULL] [2ULL] [i_21])) ? (var_9) : (((/* implicit */unsigned long long int) 446031426)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((2064384LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))))))) & (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) << (((((arr_65 [i_12] [i_21] [i_21] [i_12] [i_12]) - (2079775198281893363LL))) - (2168264680139676426LL)))))))))));
                }
            }
        } 
    } 
    var_40 = var_1;
    var_41 -= ((/* implicit */unsigned char) var_10);
}
