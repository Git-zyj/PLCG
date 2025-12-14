/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165286
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_4))))) : (var_7))))));
    var_21 &= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2]);
        var_23 = ((/* implicit */short) ((arr_1 [i_0 - 1]) << ((+(((/* implicit */int) var_8))))));
        var_24 = var_12;
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((unsigned char) (unsigned char)20)))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) var_14)) : (var_1)))));
                            var_27 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)235))));
                        }
                    } 
                } 
            } 
            var_28 = ((arr_7 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                var_29 = ((/* implicit */int) arr_14 [i_6] [i_5] [i_6]);
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_15 [i_0 - 1] [i_0])));
                var_31 = ((/* implicit */unsigned long long int) (unsigned char)239);
                var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_10) <= (((/* implicit */int) (unsigned char)239))))) + (((/* implicit */int) arr_9 [i_0 + 2] [i_5] [i_6 + 3] [i_5] [i_5] [i_5]))));
                var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
            }
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            var_34 = (unsigned char)239;
                            var_35 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) < (((/* implicit */int) (unsigned char)234))));
                        }
                    } 
                } 
                var_36 = (unsigned char)22;
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) (unsigned char)248)))))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                {
                    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_32 [i_0] [i_5] [i_7] [i_7] [0U] [(short)0])))))));
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (unsigned char)248))));
                    var_40 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) (unsigned char)21)));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_41 = ((/* implicit */int) ((unsigned char) (unsigned char)20));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_18))));
                        var_43 += ((/* implicit */_Bool) ((signed char) arr_2 [i_0]));
                    }
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) var_11);
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)3)))))));
                        var_46 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)7));
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                {
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_0] [0ULL] [i_7 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_5] [i_13]))))) : (((unsigned long long int) (unsigned char)222)))))));
                    var_48 = ((/* implicit */int) ((short) arr_18 [i_0 + 3]));
                }
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                {
                    var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned char)22)))));
                    var_50 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0 + 1] [i_5] [i_7 + 2])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)224))));
                    var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) ^ (((/* implicit */int) (unsigned char)215))));
                    var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((var_9) ? ((~(((/* implicit */int) (unsigned char)21)))) : (((/* implicit */int) ((unsigned char) (unsigned char)253))))))));
                }
            }
            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)233))))) ? (arr_40 [i_0 + 2] [(unsigned char)6] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)236))))) || ((!(((/* implicit */_Bool) var_16))))));
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                for (short i_17 = 1; i_17 < 9; i_17 += 1) 
                {
                    for (unsigned char i_18 = 2; i_18 < 10; i_18 += 1) 
                    {
                        {
                            var_55 -= ((/* implicit */unsigned int) var_3);
                            var_56 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)234)))));
                            var_57 -= ((/* implicit */unsigned long long int) var_12);
                            var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_56 [i_15] [i_17 - 1] [i_17] [i_17 + 2] [i_18 - 2] [i_18 - 1])) & (arr_34 [(unsigned char)5] [i_15] [i_15] [i_16] [i_15] [i_16])));
                        }
                    } 
                } 
            } 
            var_59 = arr_30 [i_0 - 1] [(_Bool)1] [i_15];
            /* LoopNest 2 */
            for (unsigned int i_19 = 1; i_19 < 8; i_19 += 2) 
            {
                for (signed char i_20 = 2; i_20 < 9; i_20 += 1) 
                {
                    {
                        var_60 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (unsigned char)225)))));
                        var_61 = ((arr_40 [i_20 + 2] [(signed char)0] [i_19 + 2] [i_19]) > (arr_40 [i_20 + 1] [i_15] [i_19 + 2] [i_19]));
                        var_62 = (-(((/* implicit */int) var_9)));
                        var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)250)))))));
                    }
                } 
            } 
            var_64 = (+(((unsigned long long int) (unsigned char)25)));
        }
    }
    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 1) 
    {
        var_65 = ((/* implicit */_Bool) (unsigned char)234);
        var_66 += ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)22)))) | (max((((/* implicit */int) var_17)), (var_10)))))));
    }
    for (unsigned long long int i_22 = 2; i_22 < 13; i_22 += 3) 
    {
        var_67 = (((~(((/* implicit */int) ((_Bool) arr_68 [i_22] [(short)0]))))) | (((((/* implicit */int) (unsigned char)241)) ^ ((~(((/* implicit */int) (unsigned char)20)))))));
        var_68 *= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) == (((/* implicit */int) (unsigned char)20)))))))));
        var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) ^ (((/* implicit */int) (unsigned char)248))))))))));
        /* LoopNest 2 */
        for (unsigned char i_23 = 2; i_23 < 14; i_23 += 3) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_70 = ((/* implicit */_Bool) min((var_70), (((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)234)))))) == (((/* implicit */int) (unsigned char)17))))));
                    var_71 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_68 [i_22] [i_24])))) : (((/* implicit */int) arr_70 [i_24]))))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) (unsigned char)6))))));
                    var_72 = ((/* implicit */unsigned long long int) var_13);
                    var_73 = ((/* implicit */int) max((var_73), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned char)1))))))))));
                }
            } 
        } 
    }
}
