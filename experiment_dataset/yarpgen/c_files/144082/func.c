/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144082
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37501))) >= ((~(var_10)))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_5 [i_1] [i_0])))));
                    var_23 ^= ((/* implicit */long long int) ((2279844617839284110LL) >= (min((arr_8 [i_0] [i_0 + 1] [i_0 - 2]), (arr_8 [i_0] [i_0 + 1] [i_0 + 1])))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((var_24), ((-(59789890375057565LL)))));
                                arr_14 [i_0] [i_3] [20LL] [i_1] [i_0] = ((/* implicit */_Bool) (~(max((var_17), (((/* implicit */long long int) arr_1 [i_0 - 2]))))));
                                var_25 += ((/* implicit */_Bool) (unsigned short)2459);
                                arr_15 [i_1] [i_0] [i_3] [i_4] = min((((/* implicit */long long int) (_Bool)1)), (-3188900173095241110LL));
                                var_26 = ((/* implicit */unsigned short) 2070387790654064626LL);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_27 = ((((/* implicit */_Bool) ((8137133100962654565LL) / (-2294854570161342039LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) || (((((/* implicit */_Bool) arr_6 [i_1] [6LL])) && (((/* implicit */_Bool) var_7)))))))) : ((((-(arr_5 [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
                    var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)63095)))) || ((!(((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1]))))));
                    arr_18 [i_0 - 1] [i_1 + 1] [i_0] = ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)2476)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_5 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((var_12) < (-3895167927055510907LL))) || (((/* implicit */_Bool) max((-895062410886588752LL), (((/* implicit */long long int) (unsigned short)63085))))))))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : ((~(arr_8 [i_0 - 2] [i_0] [i_5]))))))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    arr_23 [i_0] [i_1 + 1] = ((/* implicit */long long int) arr_17 [i_0 - 2] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_7] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0 - 2] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63059))))))));
                                arr_30 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 - 1] [i_6] [i_8] [i_8]))) > (var_10)));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_30 = ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0 + 1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_19)))))) ? (((((/* implicit */_Bool) 895062410886588751LL)) ? (895062410886588751LL) : (-3618363824830122139LL))) : (max((arr_7 [i_0] [i_0 + 1] [i_0]), (var_1))));
                    arr_33 [i_0] = ((/* implicit */unsigned short) (~((~(-6066514087029809142LL)))));
                    arr_34 [i_0] [i_0] [i_1 - 1] [i_9] = ((/* implicit */unsigned short) ((max((2294854570161342039LL), (min((var_17), (((/* implicit */long long int) arr_3 [i_9])))))) * (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1])))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_10 = 3; i_10 < 22; i_10 += 3) 
    {
        var_31 = var_13;
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            for (long long int i_12 = 2; i_12 < 23; i_12 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_10] [i_11] = min((((((/* implicit */_Bool) arr_42 [i_11] [i_10])) ? (-2294854570161342030LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2474))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63060))) >= (2663604406031297733LL)))));
                        var_32 -= ((/* implicit */_Bool) (((~(arr_39 [i_12 - 1] [i_11 + 1]))) / (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_10] [i_11 + 1] [i_12] [i_13])))));
                        var_33 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18798))))) ? (arr_40 [i_11 + 1]) : (((((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10])) ? (arr_41 [i_10] [i_11] [i_12 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10] [i_10] [i_10 + 2] [i_10] [i_10])))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_34 ^= ((((/* implicit */_Bool) ((min((var_11), (arr_37 [10LL] [(unsigned short)4] [i_14]))) | (9223372036854775807LL)))) ? (131071LL) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((((/* implicit */long long int) ((/* implicit */int) arr_35 [8LL] [8LL]))) < (arr_50 [6LL] [i_12 + 1] [i_11] [6LL]))))))));
                        var_35 = ((/* implicit */unsigned short) (-(-2294854570161342013LL)));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 3; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_37 = ((/* implicit */_Bool) (+(arr_39 [i_10] [i_10])));
                    }
                    for (long long int i_16 = 3; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_10 + 2] [i_10 + 2] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6007)));
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_57 [3LL] [i_11] [3LL] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15360)) && (((/* implicit */_Bool) (unsigned short)42352))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) < (6066514087029809142LL)))) >= (((/* implicit */int) ((arr_37 [i_10] [i_10] [i_10 + 1]) < (arr_40 [i_10]))))));
                    }
                    var_40 += ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    }
}
