/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180014
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
    var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(14103881953316374020ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) % (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (var_1)))))) ? ((-(((var_10) * (var_4))))) : (((((/* implicit */_Bool) max((var_11), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (var_0)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = (~(arr_2 [i_0] [i_0]));
        var_14 = arr_0 [i_0];
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_15 = ((((/* implicit */_Bool) (-(max((var_4), (((/* implicit */unsigned long long int) (unsigned char)166))))))) ? (((((/* implicit */_Bool) (unsigned char)242)) ? (70300024700928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))) : (((unsigned long long int) arr_4 [i_1 - 2])));
            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)255))))) <= (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))) : (arr_4 [i_1]))))) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_11))))))));
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 10880092627552781540ULL))))))));
            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 16826520708071493391ULL))) ? (max((((/* implicit */unsigned long long int) ((9133064469038747291ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (2454158859346196468ULL))) : ((-(max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2])), (var_8)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 + 1] [i_1])) ? (var_1) : (var_0)))) ? ((+(arr_9 [i_4] [i_4 + 1] [i_3]))) : (((((/* implicit */_Bool) var_11)) ? (824633720832ULL) : (arr_9 [i_4] [i_4 + 1] [i_3]))));
                arr_13 [i_1] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (-(4535064309260717476ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4]))) : (((((((/* implicit */_Bool) 8647545860132099554ULL)) ? (14103881953316374020ULL) : (288230375077969920ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_1])))))));
                var_19 = (~((-(arr_4 [i_1 + 2]))));
            }
            var_20 += (unsigned char)154;
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) 894824655637476411ULL);
                var_22 = (-(894824655637476396ULL));
            }
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                var_23 = (unsigned char)0;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    var_24 = ((unsigned long long int) arr_14 [i_6 - 2] [i_6] [i_3]);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (14103881953316374005ULL)));
                        arr_24 [i_1] [i_3] [i_6] [i_8] [i_8] [i_6] [i_6] = ((unsigned long long int) (unsigned char)62);
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7566651446156770069ULL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)15))));
                        arr_27 [i_6] [i_9] = var_10;
                        var_27 ^= ((/* implicit */unsigned char) 18118522577935451857ULL);
                    }
                    var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_6] [i_3] [i_1])))) ? (((/* implicit */int) arr_11 [i_6 - 1] [i_1 + 3])) : (((/* implicit */int) arr_10 [i_6]))));
                }
            }
            var_29 = min((max((((/* implicit */unsigned long long int) min((arr_10 [i_1]), (arr_26 [i_3] [i_1] [i_1] [i_1] [i_1])))), (arr_4 [i_3]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)35)) ^ (((/* implicit */int) (unsigned char)15)))) ^ (((/* implicit */int) (unsigned char)235))))));
        }
        var_30 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((1156383359100440902ULL), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1]))))) ? (max((var_6), (arr_12 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))))));
        arr_28 [i_1] = ((/* implicit */unsigned char) (-(var_4)));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_17 [i_1] [i_1] [i_1]), (arr_17 [i_1] [i_1 + 2] [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_11]);
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)25))) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                var_34 = ((unsigned long long int) ((((/* implicit */int) arr_15 [i_1] [i_10] [i_12] [i_10])) <= (((/* implicit */int) arr_16 [i_12] [i_1]))));
                var_35 = (-(var_3));
                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((((/* implicit */_Bool) 13868241584259494558ULL)) ? (arr_19 [i_1] [i_10] [i_12] [i_1 + 2]) : (var_0)))));
                var_37 = ((/* implicit */unsigned char) 0ULL);
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((unsigned long long int) 15800098112332903624ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))))))));
                    var_39 = var_8;
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 2; i_14 < 19; i_14 += 3) 
                    {
                        var_40 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_14] [i_14] [i_14])) < (((/* implicit */int) (unsigned char)246)))))));
                        arr_41 [i_1] [i_14] [i_12] = ((unsigned char) var_2);
                        arr_42 [i_13] [i_13] [i_13] [i_13] [i_13] = ((unsigned long long int) 15267283473187287039ULL);
                        arr_43 [i_1] [i_10] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_14] [i_10] [i_1]))) | (var_4))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) arr_16 [i_10] [i_1])))))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((17290360714609110713ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_14] [i_13] [i_12] [i_10] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (((unsigned long long int) var_7))));
                    }
                    var_42 *= ((/* implicit */unsigned char) var_9);
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_1 - 2] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_26 [i_15] [i_15] [i_1 - 2] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_26 [i_15] [i_15] [i_1 - 1] [i_1] [i_1 - 2]))));
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    var_44 |= ((/* implicit */unsigned char) var_0);
                    var_45 = arr_26 [i_1] [i_10] [i_15] [i_16] [i_1];
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 1; i_17 < 18; i_17 += 1) 
                    {
                        var_46 = ((((/* implicit */_Bool) arr_47 [i_17 + 2] [i_1 + 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_1))) : (17585387328838638453ULL));
                        arr_51 [i_1] [i_15] = ((arr_48 [i_17] [i_17] [i_17 - 1] [i_1 + 3]) << (((arr_48 [i_17] [i_17] [i_17 - 1] [i_1 + 3]) - (6313967974439763400ULL))));
                        var_47 = ((/* implicit */unsigned char) var_3);
                    }
                }
            }
            for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                arr_54 [i_1] [i_18] = ((unsigned char) (unsigned char)6);
                arr_55 [i_18] [i_1] = (unsigned char)31;
            }
            var_48 = ((/* implicit */unsigned char) 6716632333953032640ULL);
            var_49 = ((/* implicit */unsigned long long int) var_7);
        }
    }
}
