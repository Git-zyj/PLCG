/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160278
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (max((((((_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (0U))))) : ((-(arr_0 [i_0 + 2] [i_0 + 2]))))), (min((((var_2) - (4086401807U))), (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))))));
        var_22 = ((/* implicit */int) (signed char)48);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) - (((/* implicit */int) var_11))))), (arr_2 [i_0 - 1] [i_0 + 2] [i_1 + 3]))), ((-(((arr_0 [i_0] [i_0]) + (var_18))))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_5);
            }
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_17 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_9 [i_1] [i_1] [i_5])));
                            arr_18 [i_0] [i_1 + 3] [i_0] [i_1] [i_5] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_5] [i_4]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    arr_22 [i_1] [i_1] [(short)12] [(short)12] = ((/* implicit */short) arr_15 [i_0] [i_1 - 2] [19ULL] [i_1] [19ULL]);
                    var_24 = ((/* implicit */unsigned char) (((+(arr_2 [i_6] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3] [i_6])), (arr_21 [i_1]))))))))));
                }
                for (unsigned int i_7 = 4; i_7 < 18; i_7 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((129024U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned long long int) min((2145300751U), (((/* implicit */unsigned int) (_Bool)1))))) : (arr_21 [(unsigned short)8]))) - (var_13))))));
                    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) - (arr_2 [i_0 + 2] [i_7 - 3] [i_3 + 1]))))));
                }
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        arr_29 [i_1] [i_3] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9))))))), ((((!((_Bool)1))) ? (1617843510U) : (arr_2 [i_0 + 1] [i_0 + 1] [i_9 - 2])))));
                        var_27 += ((/* implicit */unsigned int) arr_15 [i_9] [i_8] [i_3 + 1] [i_8] [i_0]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_32 [i_1] [i_1 + 1] [i_1 + 1] [i_8] [i_10] = ((unsigned int) min((max((var_0), (((/* implicit */unsigned int) arr_6 [i_0] [i_1])))), ((+(arr_2 [i_8] [i_3] [i_1])))));
                        var_28 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [1ULL] [i_3]) > (arr_0 [i_1 + 1] [i_3 + 1]))))) != (max((((/* implicit */unsigned long long int) arr_26 [i_8])), (arr_20 [i_0 + 2] [i_1 + 2] [i_8])))));
                    }
                    var_29 ^= ((/* implicit */short) min((max((((/* implicit */unsigned int) arr_26 [i_8])), (var_18))), (((/* implicit */unsigned int) min((arr_16 [i_0 - 1]), (arr_16 [i_0 - 1]))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_2)))))) || (((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) arr_16 [i_0]))))) || ((!(((/* implicit */_Bool) 2265328415U))))))));
                }
                var_31 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(var_2)))))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_16 [i_0 + 2])))) != ((-(((/* implicit */int) arr_30 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_3]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [4U])))))));
            }
            arr_33 [3U] [i_1] [i_1] = ((/* implicit */unsigned int) ((3095011136U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 2; i_12 < 19; i_12 += 4) 
            {
                arr_40 [i_11] [i_11] [i_12] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_10)) / (arr_9 [i_11] [i_11] [i_12 - 1]))) - (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_11] [i_12]))) ? (((unsigned long long int) arr_12 [i_12] [i_11] [i_11] [i_11] [i_0 + 1])) : (((/* implicit */unsigned long long int) arr_11 [i_11] [i_11] [i_11] [i_11]))))));
                arr_41 [i_11] [i_11] = ((/* implicit */unsigned short) (short)127);
                arr_42 [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max(((-(4294967269U))), (((/* implicit */unsigned int) ((short) arr_20 [i_0] [i_11] [8U])))))), (((((/* implicit */long long int) arr_39 [i_11] [i_11] [i_12 - 2])) - (((long long int) arr_34 [i_11] [i_12]))))));
                var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_12]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_12]))) / (3095011136U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_26 [i_12]), (arr_26 [i_12])))))));
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (max((3509290844U), (min((arr_45 [i_0] [i_11] [i_13] [i_14]), (((/* implicit */unsigned int) var_11))))))));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        var_34 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_23 [i_0 + 1] [i_11] [i_0] [i_14 - 1] [i_15] [i_13])), (var_13)))) ? (((((/* implicit */int) (signed char)-104)) & (((/* implicit */int) arr_23 [(short)1] [i_0 + 1] [i_11] [i_13] [i_14] [i_15])))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 1] [i_11] [i_13] [i_14] [i_15])) ? (((/* implicit */int) arr_23 [i_15] [i_14 - 2] [i_13] [i_11] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_23 [i_0 + 1] [i_13] [i_13] [i_14 + 1] [i_15] [i_13]))))));
                        arr_52 [i_0] [i_11] [i_0] [i_13] [i_14] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)127)), (13699002463776894256ULL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) arr_13 [i_0] [i_11] [17U]);
                        var_37 += ((/* implicit */unsigned long long int) (~(var_1)));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_14 - 2] [i_0 + 2] [i_11]) - ((+((+(18446744073709551615ULL)))))));
                        var_39 = (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110))) ^ (var_1))));
                    }
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_38 [i_0 - 1]) - (arr_38 [i_0 - 1])))) ? ((+(arr_38 [i_0 - 1]))) : (((/* implicit */int) ((arr_38 [i_0 - 1]) == (arr_38 [i_0 - 1]))))));
                }
                var_41 = ((/* implicit */long long int) max((min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_11])) && (((/* implicit */_Bool) var_16))))))), (((/* implicit */unsigned int) var_4))));
            }
            var_42 += ((/* implicit */_Bool) (signed char)-3);
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 3; i_19 < 19; i_19 += 3) 
                {
                    {
                        var_43 = (-(((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_18])))))) ? (((((/* implicit */_Bool) 0LL)) ? (arr_45 [i_0] [i_11] [i_18] [i_19 + 1]) : (var_18))) : (((/* implicit */unsigned int) arr_48 [i_18] [i_19 - 3] [i_11] [i_19] [i_19] [i_19 + 1])))));
                        var_44 += ((/* implicit */unsigned short) (_Bool)1);
                        var_45 ^= 7479844315637604259ULL;
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_20 = 1; i_20 < 18; i_20 += 4) /* same iter space */
    {
        arr_64 [i_20] = ((/* implicit */unsigned long long int) var_7);
        var_46 = ((_Bool) (~(var_7)));
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 11; i_21 += 4) 
    {
        arr_69 [i_21] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_55 [i_21])))) < (((/* implicit */int) ((unsigned short) var_8)))));
        var_47 = ((/* implicit */unsigned int) ((unsigned short) (-(2061200685U))));
        var_48 = ((/* implicit */unsigned int) arr_20 [i_21] [i_21] [i_21]);
        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) 4ULL))));
    }
    var_50 = ((/* implicit */_Bool) (signed char)70);
    var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (~(var_12))))));
}
