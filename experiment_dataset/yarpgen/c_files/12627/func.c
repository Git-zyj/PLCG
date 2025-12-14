/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12627
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_10 -= ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) * (var_8))) ^ (((/* implicit */int) arr_1 [i_0] [i_1]))));
            arr_6 [i_1] = ((/* implicit */_Bool) ((int) (_Bool)1));
            var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)24618))))) / (((((arr_2 [i_0] [i_1] [i_1]) + (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])))) + (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) / (2147483647))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [(short)14] = min((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_2] [20ULL]) * (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))), ((~((((_Bool)1) ? (14565080653786992862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_0]))))))));
                    var_12 -= arr_9 [i_0];
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_2] [i_4 - 2] = ((/* implicit */short) (((-(((((/* implicit */_Bool) (short)-14020)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (short)4096)))))) % (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 11102384493245810469ULL))))))))));
                        var_13 = ((/* implicit */unsigned long long int) ((short) max((arr_2 [i_4 - 2] [i_2] [17LL]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_3]))))))));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_21 [19LL] [i_5] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 3166718267344319897LL)) > (max((arr_14 [i_0] [i_5] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0])))))), ((+(((/* implicit */int) arr_3 [i_2]))))));
                        arr_22 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */short) min((max((3881663419922558765ULL), (((/* implicit */unsigned long long int) (signed char)14)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_5] [i_2])), (-8744520931620534844LL))))));
                        arr_23 [i_0] [i_5] [i_5] [22LL] [20LL] [i_2] = max((arr_12 [i_0] [i_2] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_1)));
                    }
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_28 [i_0] [i_2] [i_3] [i_6] = ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) / (arr_14 [i_0] [i_3] [i_3]))), (arr_12 [i_3] [i_3] [i_3] [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 14565080653786992862ULL)) && (((/* implicit */_Bool) (short)14792))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)4096)) || (((/* implicit */_Bool) -3166718267344319897LL))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_32 [(signed char)1] [i_2] [i_2] [i_2] [(signed char)1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2]))));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [5LL])) ? (((/* implicit */long long int) var_8)) : (-2099338555028744628LL)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3805724362669319576LL))))))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */_Bool) arr_11 [i_2] [i_6] [i_7])) && (((/* implicit */_Bool) 10433499726548473279ULL))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-14792))));
                        /* LoopSeq 4 */
                        for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_37 [i_0] [(_Bool)1] [i_0] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_3] [i_2])) && (((/* implicit */_Bool) 4585448408026315349ULL))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((unsigned long long int) ((7932845021062981279ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))))))));
                            arr_38 [i_9] [i_2] [i_2] [6ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) -2147483627)))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_27 [i_0] [i_0] [i_0] [i_0]))) < (((((/* implicit */_Bool) 9223372036854767616ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))));
                        }
                        for (short i_10 = 1; i_10 < 24; i_10 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((arr_15 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1]) & (arr_15 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]))))));
                            arr_41 [i_0] [i_0] [(unsigned short)11] &= ((/* implicit */long long int) ((short) (unsigned short)62619));
                            var_20 -= ((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_10 [i_10 - 1] [i_10 + 1]))));
                        }
                        for (short i_11 = 1; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            arr_44 [13LL] [i_3] = ((/* implicit */unsigned long long int) 2099338555028744604LL);
                            arr_45 [(unsigned short)1] [i_0] [(unsigned short)1] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((6868283796984854913ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62614))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_12 = 1; i_12 < 24; i_12 += 4) /* same iter space */
                        {
                            arr_50 [23ULL] [i_2] = ((/* implicit */long long int) ((short) (+(var_7))));
                            arr_51 [i_3] [i_12 - 1] = ((/* implicit */long long int) ((6868283796984854913ULL) != (9158561099755794934ULL)));
                            arr_52 [i_0] [i_8] [i_12] [i_8] [i_12] = 5050907060941048354ULL;
                        }
                        var_21 = ((arr_46 [i_2] [i_0] [11ULL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [5ULL]))));
                        arr_53 [i_0] [16LL] [i_3] = ((/* implicit */short) ((((arr_0 [i_3] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14792))))) << ((((+(1006755524))) - (1006755517)))));
                    }
                }
            } 
        } 
        arr_54 [i_0] = ((/* implicit */int) var_7);
        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) (signed char)34))))));
    }
    for (short i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        var_23 &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_13] [i_13])) | (((((/* implicit */int) (short)14791)) ^ (((/* implicit */int) (short)4084))))))), (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13])));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
                    {
                        arr_64 [i_14] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13] [i_14] [i_13] [16ULL]))) * (arr_46 [(_Bool)1] [i_14] [(short)16]))), (((/* implicit */unsigned long long int) (short)14791))));
                        arr_65 [i_13] [i_14] [i_15] [i_16] = ((/* implicit */short) max((min((arr_42 [i_13] [17] [i_14] [(_Bool)1] [i_16]), (((/* implicit */unsigned long long int) arr_31 [i_16] [i_16] [i_15] [i_14] [(short)0] [i_13])))), (((/* implicit */unsigned long long int) (!(arr_31 [i_15] [i_14] [i_13] [i_16] [i_13] [i_15]))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
                    {
                        var_24 = (~(((/* implicit */int) (short)14780)));
                        var_25 = ((/* implicit */long long int) 33554431ULL);
                    }
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_71 [i_18] [i_18] = ((/* implicit */_Bool) 18446744073709551594ULL);
                        arr_72 [i_14] [i_18] = ((/* implicit */unsigned long long int) (short)4091);
                    }
                    arr_73 [i_13] [(_Bool)1] [i_13] [i_13] = ((/* implicit */short) ((long long int) min((((/* implicit */int) max((arr_61 [i_13] [i_13] [i_13]), (arr_5 [i_13] [i_14] [i_15])))), (min((((/* implicit */int) (short)4084)), (arr_16 [i_13] [i_13] [i_15] [i_13]))))));
                }
            } 
        } 
        arr_74 [i_13] = max((((unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) (-(-401905272228131646LL)))), (((unsigned long long int) var_2)))));
        arr_75 [i_13] = min((((((/* implicit */_Bool) ((arr_2 [i_13] [i_13] [i_13]) % (((/* implicit */long long int) ((/* implicit */int) (short)18510)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_13] [i_13] [19] [19]))) : (((9158561099755794934ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_13] [i_13]))))))), (((/* implicit */unsigned long long int) ((((-5407308999030026284LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)4084)) - (4023)))))));
        arr_76 [i_13] = ((/* implicit */int) ((((/* implicit */int) (signed char)46)) >= (((/* implicit */int) ((unsigned short) (unsigned short)62597)))));
    }
    var_26 = ((/* implicit */long long int) ((_Bool) 17448577));
}
