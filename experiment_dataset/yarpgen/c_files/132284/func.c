/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132284
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((arr_2 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)10711)) ? (((((/* implicit */int) (unsigned short)55498)) + (((/* implicit */int) var_4)))) : (-1816019886))), ((~(1816019908)))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [18LL])) ? (((((/* implicit */_Bool) 4294967295U)) ? ((+(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_11)))))) : (-1816019904)));
            arr_6 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) > (((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_0 [i_0] [i_1])))) ? (min((((/* implicit */int) var_4)), (var_9))) : (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0)))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) var_3);
                            var_16 = ((/* implicit */long long int) arr_0 [i_2] [i_4]);
                        }
                    } 
                } 
                arr_19 [i_0] [13ULL] = ((var_6) * (((/* implicit */unsigned int) 1816019887)));
                arr_20 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (+(((/* implicit */int) (short)-24747))));
                arr_21 [i_0] [i_0] [i_0] = var_8;
            }
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            arr_30 [i_0] [i_2] [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            arr_31 [i_0] [i_2] [i_8] = ((/* implicit */short) ((((unsigned long long int) var_12)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            } 
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_25 [(unsigned short)4] [i_2] [i_2] [i_2] [i_0])));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_28 [i_0] [i_9] [i_9] [i_9])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_9] [(_Bool)1])) : (min((var_9), (2019082602))))) : ((-(((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_45 [i_12] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))));
                            arr_46 [i_0] [i_0] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */int) var_12)), (1816019885)))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_10)) & (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) arr_10 [i_9] [i_9]);
            }
        }
        for (int i_13 = 2; i_13 < 22; i_13 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_57 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(var_9)))) & (0U)));
                            var_19 = ((/* implicit */_Bool) ((unsigned long long int) 4294967290U));
                            arr_58 [i_15] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)250))));
                            arr_59 [i_15] [i_14] [i_15] [i_16] = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
                arr_60 [15LL] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0] [i_14]))))) == (4294967288U)));
                /* LoopSeq 2 */
                for (unsigned char i_17 = 4; i_17 < 22; i_17 += 4) 
                {
                    var_20 *= ((/* implicit */unsigned long long int) var_0);
                    arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((7496356634283381902ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (1816019885) : ((+(((/* implicit */int) var_10))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((short) (unsigned char)39)))));
                }
                for (int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    arr_68 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (arr_12 [i_0] [i_13 - 1] [i_14] [i_18]))) & (((/* implicit */int) arr_49 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 1) 
                    {
                        arr_71 [i_0] [i_0] [i_14] [(short)2] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_10))))) & (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_37 [i_0] [i_13 + 1] [i_14] [i_18]))))));
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) var_4));
                    }
                    arr_73 [i_0] [i_0] [(unsigned short)12] [i_0] = ((/* implicit */unsigned char) (-(arr_12 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 - 2])));
                    var_22 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-15))));
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) 12U))));
                arr_76 [i_13 + 1] [i_20] = min((((/* implicit */unsigned long long int) (-(var_6)))), ((+(arr_51 [i_0] [i_0]))));
                var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (arr_75 [i_13 - 2] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_54 [i_0] [i_13 + 1] [i_20] [i_20])))))));
            }
            for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned long long int) 4294967270U)))));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 19; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) * (min((7887728154797528776LL), (((/* implicit */long long int) var_10)))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_69 [i_0] [i_0] [i_13] [i_21] [i_22] [i_23])) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (((/* implicit */unsigned int) var_2)))))));
                            arr_84 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) var_11)))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 2])) : (((/* implicit */int) arr_17 [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 + 1]))))));
                            var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)15)) ? (11U) : (4294967290U)))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    {
                        arr_90 [i_0] [i_0] [i_24] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65525)))) != (max((((/* implicit */int) var_8)), (var_2))))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)46284))))))) + (max((((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63029))) + (639946411U)))))));
                        var_29 = ((/* implicit */signed char) (~(var_9)));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)0)), (11181720981664933991ULL)));
            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)20179)) ? (3986813871323282048LL) : (4418205294795871960LL))))))));
            arr_91 [i_0] [i_13] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (signed char)-117)), (767043794884485869LL)));
        }
    }
    var_32 = ((/* implicit */short) ((((/* implicit */int) max(((signed char)-92), (((/* implicit */signed char) var_10))))) << (((/* implicit */int) var_10))));
    var_33 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (-(-2268689563434832061LL))))))), (var_8)));
}
