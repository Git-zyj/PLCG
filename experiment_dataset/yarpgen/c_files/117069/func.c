/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117069
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */unsigned short) ((long long int) 7862490309336894763ULL));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 72057594035830784LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (-519006291057425825LL)))) : (arr_6 [i_1 + 1] [i_4 + 2])))))))));
                                var_15 ^= ((arr_8 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]) | (max((((((/* implicit */_Bool) (unsigned char)255)) ? (72057594035830786LL) : (-72057594035830787LL))), (72057594035830786LL))));
                                arr_12 [i_4 + 2] [i_3] [i_0] [i_2 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_8 [i_0] [i_2] [i_2] [i_2 + 3] [i_4 - 2] [i_2]))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 72057594035830786LL)) ? (((/* implicit */unsigned long long int) 72057594035830789LL)) : (var_10)))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (arr_1 [i_0]) : (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) != (max((-72057594035830785LL), (-72057594035830786LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -72057594035830786LL)) ? (((/* implicit */unsigned long long int) 72057594035830784LL)) : (arr_6 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_6] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_6])) ? (var_10) : (arr_9 [i_0] [i_0] [i_0] [i_7])))))));
                        var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5620097287774384636ULL)) ? (((/* implicit */unsigned long long int) -72057594035830777LL)) : (12000270141661804210ULL)))) ? (12826646785935166979ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    }
                    for (signed char i_8 = 3; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) arr_11 [i_8] [i_6] [i_5 + 1] [i_0]);
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_20 [i_5] [i_5 + 1] [i_8 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_5 - 1] [i_8 - 3]))))) : ((~(((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1] [i_8 - 1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 3; i_9 < 11; i_9 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 72057594035830784LL)) ? (-72057594035830785LL) : (72057594035830805LL))))));
                        arr_29 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-55))));
                        var_20 = ((var_0) >= (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37047))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5038530334546282415LL)) ? (((/* implicit */unsigned long long int) var_11)) : (2667527408375730790ULL)))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (signed char)3))))) : (((((/* implicit */_Bool) arr_18 [i_9 + 3] [i_6] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))));
                        arr_30 [i_0] [i_5 - 1] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) 17750192617471580810ULL));
                }
            } 
        } 
        arr_32 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_12)))));
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_10])), (5620097287774384636ULL)))))));
        var_22 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_9 [10LL] [10LL] [i_10] [i_10]))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned int) var_7);
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 1; i_13 < 18; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_40 [i_11] [i_12] [i_13 + 1])))) ? (max((((/* implicit */unsigned long long int) var_11)), (((arr_46 [i_12] [i_11]) << (((((/* implicit */int) var_3)) - (35052))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])))))))))));
                        arr_47 [i_11] [i_12] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_13 + 1] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1])) * (((/* implicit */int) arr_45 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])))))));
                        arr_48 [i_11] [i_13] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) | (((((/* implicit */_Bool) min((arr_36 [i_12] [i_12]), (((/* implicit */long long int) arr_42 [i_11] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (arr_46 [i_13 + 1] [i_13 - 1])))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) (+(min((12826646785935166966ULL), (((/* implicit */unsigned long long int) var_8))))));
            arr_49 [i_12] [i_11] = ((/* implicit */unsigned long long int) arr_36 [i_11] [i_12]);
        }
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            arr_54 [i_16] [i_15] = ((/* implicit */long long int) (+((~(var_4)))));
            arr_55 [i_15 - 1] [i_15 - 1] [i_15 - 1] |= ((/* implicit */_Bool) arr_51 [i_15 - 1] [i_16]);
            var_26 = ((/* implicit */int) 0U);
            arr_56 [i_16] [i_15] [i_15] = ((/* implicit */unsigned long long int) (~(-5584452567442135799LL)));
            var_27 ^= max((var_4), ((+(((/* implicit */int) ((_Bool) var_3))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 1; i_18 < 18; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    {
                        arr_65 [i_15] [i_18] = ((/* implicit */int) var_5);
                        var_28 = ((/* implicit */int) ((((/* implicit */int) arr_64 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_17])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4)))))));
                        var_29 += ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 4; i_20 < 17; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 1; i_21 < 18; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 19; i_22 += 4) 
                    {
                        {
                            arr_73 [i_20] [i_20] [i_20] [i_20] [i_22] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_72 [i_15] [i_17] [i_20] [i_21 - 1] [i_22]))));
                            var_30 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15] [i_15] [i_20 - 2]))) ^ (((unsigned long long int) arr_59 [i_22]))))));
                            arr_74 [i_22] [i_20] [i_20] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-72057594035830789LL)))) ? ((((+(var_10))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            } 
        }
        arr_75 [i_15] [i_15 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_15 - 1] [i_15]))) / (min((((/* implicit */long long int) arr_60 [i_15 - 1] [i_15 - 1])), (var_5)))));
        arr_76 [i_15 - 1] = ((/* implicit */unsigned long long int) arr_37 [i_15 - 1]);
        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_36 [i_15] [i_15 - 1])));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */signed char) ((-72057594035830785LL) >= (var_11))))))) ? ((+(arr_41 [i_15]))) : (((/* implicit */unsigned long long int) (~(arr_51 [i_15 - 1] [i_15 - 1])))))))));
    }
    var_33 = var_11;
}
