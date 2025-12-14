/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148310
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */_Bool) ((long long int) (unsigned char)171));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = var_3;
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 4874068652329644861LL)) : (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_2 + 1] [i_2] [i_1] [i_2 + 1] [i_2 + 1]))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 12813548700966979221ULL)))))))));
                            arr_14 [i_3 - 3] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 1LL)) ? (9LL) : (((long long int) (unsigned char)31)))));
                            var_15 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_1)) : (5633195372742572395ULL))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = 5633195372742572395ULL;
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    var_16 += ((/* implicit */unsigned long long int) var_12);
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((unsigned long long int) 0LL))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) var_5);
                    var_18 ^= ((/* implicit */unsigned long long int) var_0);
                    arr_23 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0]);
                    var_19 -= ((/* implicit */unsigned long long int) var_8);
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                {
                    arr_28 [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        arr_33 [i_7] = ((/* implicit */signed char) (+(arr_32 [i_7])));
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (unsigned char)162)))));
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_22 = arr_27 [i_8] [i_8] [i_8] [i_8];
            arr_39 [i_8] [i_8] = ((/* implicit */unsigned char) arr_31 [i_8] [i_8]);
        }
        var_23 = arr_31 [i_8] [i_8];
        arr_40 [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8]))))), (((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)65))))) ? (arr_32 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [i_8])))))));
    }
    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
    {
        arr_43 [i_10] = ((/* implicit */signed char) ((_Bool) (signed char)15));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_10])) ? ((~(((/* implicit */int) arr_16 [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_16 [i_10] [i_10] [i_10]))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)82)))));
                    arr_50 [i_12] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_5), (((unsigned char) (unsigned char)255))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_29 [i_11] [i_11])) : ((-(((/* implicit */int) arr_11 [i_12]))))))) : (min((-9LL), ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 3; i_13 < 17; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_60 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) var_10);
                        arr_61 [i_13] [i_13 - 2] [i_15] [i_13 - 2] [i_13 + 1] [i_13] = ((/* implicit */signed char) arr_17 [i_14] [i_13] [i_14]);
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 0LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), ((unsigned char)213))))) : (3236907666200057495ULL)));
                        arr_62 [i_10] [i_14 + 1] [i_10] [i_10] = ((unsigned char) ((long long int) arr_29 [i_14] [i_14]));
                        var_27 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((17027897690705396522ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (arr_16 [i_10] [i_10] [i_13]))))) : (var_4))), ((+((+(var_4)))))));
                    }
                } 
            } 
            var_28 &= ((/* implicit */signed char) ((unsigned char) (unsigned char)192));
            arr_63 [i_10] [i_13 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)213))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_67 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)235)) ? (arr_30 [i_16] [i_16]) : (arr_30 [i_16] [i_16])));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_10] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_25 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_25 [i_16] [i_16] [i_16] [i_16]))));
        }
        for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            arr_70 [i_10] [i_10] [i_17] = ((/* implicit */_Bool) arr_58 [i_17] [i_17] [i_17] [i_10]);
            arr_71 [i_10] [i_17] [i_17] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_5 [i_10])) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10] [i_10] [i_10]))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_17])))))))));
        }
        for (signed char i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_19 = 1; i_19 < 16; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    for (long long int i_21 = 2; i_21 < 16; i_21 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) (((_Bool)1) ? (-557389743326735799LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))));
                            arr_82 [i_10] [i_10] [i_10] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_20])), (557389743326735788LL)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_12 [i_20]))));
                        }
                    } 
                } 
            } 
            arr_83 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -7600646508795602695LL))));
        }
        for (signed char i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
        {
            arr_87 [i_22] = ((/* implicit */_Bool) var_1);
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (1105033620223038014LL))))));
        }
    }
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 18; i_23 += 1) /* same iter space */
    {
        arr_92 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (arr_7 [i_23] [i_23] [i_23] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        arr_93 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) -5276418936797418830LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_49 [i_23] [i_23] [i_23] [i_23]))));
    }
}
