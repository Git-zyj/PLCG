/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165439
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) var_5)))));
    }
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_2] [i_2] = ((/* implicit */signed char) min((min((-4311224948139549480LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) -4311224948139549480LL))))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_3 + 1] [i_3]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_17 = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_8 [i_1] [i_2] [4])))))) ? (((/* implicit */int) arr_10 [i_2] [i_2] [(_Bool)1] [i_4])) : (((/* implicit */int) var_6)));
                        var_18 += ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_3))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!(arr_14 [i_1] [i_2] [i_2] [(short)3] [19LL])));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_2])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_1] [i_3 - 1] [i_3 + 3] [i_1])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_2])))))));
                        var_21 = ((/* implicit */_Bool) (+((~(-1680294340)))));
                        arr_19 [i_5] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3 + 3] [i_5]))))));
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */int) var_5)) == (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) - (320532101)));
                    var_23 = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */signed char) (((((((((_Bool)0) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_6)))) ^ (((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_6] [i_6])))))) + (2147483647))) >> (((/* implicit */int) var_4))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_26 [i_7] [10] [i_6] = ((/* implicit */signed char) ((unsigned short) var_5));
            var_24 = ((/* implicit */signed char) arr_24 [i_6] [i_6]);
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 13; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        var_25 = ((/* implicit */int) ((_Bool) (-(((((/* implicit */int) (signed char)11)) * (((/* implicit */int) arr_21 [(unsigned char)11])))))));
                        arr_32 [i_6] [i_7] [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (min((arr_24 [i_9] [i_9]), (((/* implicit */int) arr_30 [i_6] [(unsigned short)13] [i_9])))) : (((/* implicit */int) ((signed char) var_3))))))));
                        arr_33 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */signed char) (~(((((/* implicit */int) max((arr_10 [i_9] [i_8 + 1] [i_7] [i_6]), (((/* implicit */unsigned short) arr_31 [i_6] [i_6] [i_8 + 2] [i_9]))))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_8])) < (((/* implicit */int) arr_1 [i_8])))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_0))));
            var_27 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_7])), ((((_Bool)1) ? (((/* implicit */int) ((unsigned char) arr_7 [i_6] [i_7]))) : (((/* implicit */int) var_5))))));
        }
        for (int i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_41 [i_6] [i_10] = ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_10] [i_10])) ? (((/* implicit */int) (unsigned short)9142)) : (((/* implicit */int) arr_17 [i_10 - 1] [i_10])))) : (((((((/* implicit */int) var_9)) < (((/* implicit */int) arr_1 [i_12])))) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_14 [i_12] [i_12] [i_10] [i_10 - 1] [19])) : (var_1))) : (((/* implicit */int) min((arr_0 [i_10]), (((/* implicit */short) (unsigned char)149))))))));
                    arr_42 [i_10] [i_12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-33)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_28 = ((((_Bool) arr_34 [i_10] [i_10 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-4500)) & (((/* implicit */int) var_5)))))))) : (((/* implicit */int) var_6)));
                    var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_11] [i_10 - 1] [i_6])) ? (((/* implicit */int) arr_9 [i_6] [i_10] [i_11] [i_13])) : (((/* implicit */int) arr_9 [i_6] [i_10 - 1] [i_11] [i_13]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_10 - 1] [i_13])) <= (((/* implicit */int) arr_38 [i_11]))))) : (((/* implicit */int) ((unsigned short) var_1)))));
                }
                var_30 = ((/* implicit */signed char) arr_24 [i_6] [i_6]);
                /* LoopSeq 3 */
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_49 [i_10] [i_10] [i_11] [i_11] [i_14] [i_14] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)20618)))), (((((/* implicit */_Bool) arr_30 [i_6] [i_11] [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))) & (((/* implicit */int) max((arr_35 [i_11] [i_10 + 1] [i_6]), (arr_35 [i_14] [i_10 - 1] [i_11]))))));
                    var_31 = min((((/* implicit */unsigned short) var_12)), (var_9));
                    var_32 = arr_34 [i_10] [i_14];
                    var_33 = ((/* implicit */_Bool) var_11);
                }
                for (signed char i_15 = 1; i_15 < 13; i_15 += 4) 
                {
                    var_34 = ((/* implicit */signed char) -43409920);
                    arr_52 [i_6] [i_6] [i_6] [i_10] = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) arr_16 [i_6] [i_10 + 1] [i_11] [i_15] [i_10]))), (arr_5 [i_10 + 1] [i_10 + 1])))), (min((4311224948139549469LL), (((/* implicit */long long int) (_Bool)1))))));
                    arr_53 [i_10] = arr_29 [i_11] [i_11] [i_11] [i_11] [(unsigned short)7];
                }
                for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    var_35 = ((/* implicit */int) min((var_35), (max((((/* implicit */int) arr_40 [i_16] [i_11] [i_11] [i_10 + 1] [13])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)20618))))))));
                    var_36 = (-(((((/* implicit */_Bool) arr_50 [i_10 - 1] [i_10] [i_10 - 1] [(short)12] [i_10] [i_6])) ? (((((/* implicit */int) var_11)) >> (((((/* implicit */int) (signed char)-33)) + (37))))) : (((/* implicit */int) arr_17 [i_6] [i_10])))));
                }
                arr_57 [i_10] [i_10] = ((_Bool) ((((/* implicit */_Bool) arr_2 [i_10 + 1])) ? (((((/* implicit */_Bool) (short)14761)) ? (((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_10] [i_10] [i_6])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11259510610115298600ULL)))))));
            }
            for (int i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                var_37 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_18 [i_6] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */int) arr_18 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) (_Bool)1))))));
                var_38 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_5 [i_6] [i_6]))))));
            }
            for (int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */signed char) arr_25 [i_6] [i_10 - 1])), (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (unsigned char)150)) ? (1680294339) : (((/* implicit */int) arr_36 [i_18])))))) <= (((/* implicit */int) arr_37 [i_18] [i_10] [i_10 + 1]))));
                var_40 = ((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6]);
            }
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 15; i_20 += 2) 
                {
                    for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
                    {
                        {
                            arr_72 [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (((((arr_50 [i_6] [i_10] [i_19] [i_10 + 1] [i_10] [i_6]) & (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (((/* implicit */long long int) ((arr_66 [i_6] [i_6] [i_6] [i_10] [i_21] [i_6]) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_70 [i_6] [i_20] [i_21])))))))));
                            var_41 = ((/* implicit */_Bool) arr_50 [i_6] [i_6] [i_6] [i_6] [i_10] [i_6]);
                            arr_73 [i_20] [i_10] [i_20] [i_19] [i_6] [i_10] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
        }
    }
    var_42 = ((/* implicit */signed char) ((max((((2147483647) % (var_1))), ((((_Bool)1) ? (var_10) : (var_10))))) == (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_9)))) < (((((/* implicit */int) var_7)) % (((/* implicit */int) var_4)))))))));
}
