/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152985
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            var_19 = (unsigned char)108;
                            var_20 -= (~(((/* implicit */int) (short)-32751)));
                        }
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_3]))));
                    }
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)29263)) : (((/* implicit */int) (_Bool)1))))));
                        arr_18 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    arr_19 [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 11333706982831679158ULL)) ? (((/* implicit */unsigned long long int) -734232532)) : (11333706982831679158ULL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */unsigned short) arr_11 [i_6] [i_1] [i_6]);
                        arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((((((/* implicit */int) arr_2 [i_0 + 1])) < (arr_22 [i_0] [(unsigned char)18] [i_0] [i_0] [i_0] [i_0]))) ? ((-(((/* implicit */int) (short)-30585)))) : ((+(((/* implicit */int) (unsigned char)7))))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (unsigned char)7))));
                        arr_25 [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (_Bool)1);
                        var_23 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (2413114813U)));
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-122)) ^ (((/* implicit */int) (short)-32764))));
                            arr_33 [i_0] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19136))))) : ((~(((/* implicit */int) (unsigned short)8184))))));
                        }
                        arr_34 [i_0] = ((/* implicit */short) (unsigned char)49);
                    }
                }
            } 
        } 
        arr_35 [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29101)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23546)))))));
        var_25 ^= ((/* implicit */short) arr_4 [(short)3]);
        /* LoopNest 3 */
        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)217)))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_47 [17ULL] [17ULL] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) (short)496);
                            var_27 = ((/* implicit */int) (!((((_Bool)1) && ((_Bool)1)))));
                            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((10055237010869219866ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9] [i_9] [i_10])))))) ? (arr_46 [i_0] [i_10] [(short)10]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)3077)))))));
                            var_29 ^= ((/* implicit */unsigned char) (short)32765);
                            arr_48 [i_11] [i_0] [i_9] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (6364264665380773715ULL))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            var_30 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57351))));
                            arr_52 [i_0] [i_10] [i_11] = ((/* implicit */long long int) arr_37 [i_10] [i_10] [i_13]);
                            var_31 = ((/* implicit */unsigned char) arr_26 [i_0] [i_0]);
                            var_32 = ((/* implicit */unsigned char) (-(max((7113037090877872475ULL), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (short)-32754)))))))));
                            arr_53 [i_0] [i_0] [0LL] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7328))));
                        }
                        for (short i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
                        {
                            arr_57 [i_0] [i_9 - 1] [i_0] [i_9 - 1] [i_14] = ((/* implicit */long long int) 3387079071U);
                            var_33 &= ((4236818363U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))));
                            arr_58 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) (unsigned char)208)) ? (11333706982831679172ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) 7163428743822875642LL);
                            var_35 |= ((14989646839285194690ULL) % (16462970483112538600ULL));
                            var_36 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15] [i_0] [i_9] [i_9] [i_9] [i_0]))) ^ ((~(((144115188075855864ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_37 -= ((18302628885633695751ULL) == (((/* implicit */unsigned long long int) 800450988U)));
                            var_38 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) ^ (6498281670315003905ULL))) >> ((((~(((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (800450968U))))) - (32760U)))));
                        }
                        var_39 = ((/* implicit */unsigned char) arr_39 [i_0 + 1] [i_9 - 1] [i_0]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_40 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)19)) * (((/* implicit */int) (short)-2413)))) * (((/* implicit */int) (unsigned short)15872))));
                            arr_65 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1743)) ? (800450968U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))))));
                            var_41 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned char)118))));
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 1; i_17 < 17; i_17 += 3) 
                        {
                            arr_68 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (unsigned char)235))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3210503725044784831ULL)))) ? (((/* implicit */int) ((800450980U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98)))))) : ((~(((/* implicit */int) (short)-2422))))));
                            var_43 -= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) != (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_37 [i_0 + 1] [i_0] [i_0]))));
                            var_44 = ((/* implicit */_Bool) arr_0 [i_9 - 1]);
                        }
                        for (unsigned short i_18 = 3; i_18 < 16; i_18 += 2) 
                        {
                            arr_71 [i_0] [(unsigned short)13] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) (~(800450957U)));
                            var_45 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)199))));
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) 3210503725044784829ULL)) ? (7113037090877872457ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6027))) | ((~(2163630326659893152ULL)))))));
                        }
                        arr_72 [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32761))))))) % (((/* implicit */int) (unsigned short)34816))));
                    }
                } 
            } 
        } 
    }
    var_47 = (unsigned char)174;
}
