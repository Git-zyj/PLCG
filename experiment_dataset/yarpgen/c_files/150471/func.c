/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150471
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 2] [(unsigned short)0]))));
                    var_16 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)141));
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_6)))));
    }
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_3] [i_3 + 2])) >> (((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1])) + (23977)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_7 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49884))) : (((unsigned long long int) arr_10 [i_3] [i_3])))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) ((short) 7788643970197081316ULL))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 5611260159831551651LL)) && (((/* implicit */_Bool) (unsigned char)242))))) & (((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_0))))))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (10198819830704097116ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))))));
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 10198819830704097116ULL)))) ? (8247924243005454499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))))));
            var_22 &= ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_7 [i_4 - 3] [i_3 + 1])) : (((/* implicit */int) arr_7 [i_4 - 1] [i_3 - 1]))));
        }
        for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((signed char) arr_16 [i_7] [i_3]));
                        /* LoopSeq 4 */
                        for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned short)33988)))) + (2147483647))) << (((((/* implicit */int) var_14)) - (52914)))));
                            var_25 = ((/* implicit */int) (+(((long long int) arr_3 [i_3 + 2]))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((int) (_Bool)0)))) ? (((unsigned long long int) arr_19 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5])) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)49880)))))))));
                            var_27 = ((/* implicit */unsigned char) (+(((long long int) ((unsigned short) var_4)))));
                            var_28 = ((/* implicit */unsigned long long int) ((_Bool) (((+(arr_12 [i_7] [0] [i_6]))) ^ (((/* implicit */unsigned int) var_5)))));
                        }
                        for (short i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) ((unsigned char) var_13));
                            var_30 = ((/* implicit */unsigned long long int) var_3);
                            var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_24 [i_3] [(unsigned char)10] [i_5] [i_3] [i_6] [i_7] [i_9])))) ? (min((arr_21 [i_3] [i_5] [i_6] [i_3] [i_3]), (((/* implicit */unsigned int) arr_26 [i_3] [i_3] [i_9])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)85)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_9))) & (((/* implicit */int) ((signed char) var_12))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_32 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [(unsigned short)16] [i_6] [(unsigned short)16] [(short)11]), (((/* implicit */int) var_8))))) ? ((+(var_5))) : ((+(var_0)))))), (((unsigned int) (((_Bool)0) || (((/* implicit */_Bool) arr_22 [i_10] [i_7] [(signed char)3] [i_6] [i_5] [(unsigned char)1] [(signed char)3]))))));
                            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_26 [i_3 + 1] [i_7] [i_3 + 1])) : (((/* implicit */int) var_12))))) : (8247924243005454516ULL)))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (10658100103512470293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3] [i_3] [i_3]))))))));
                        }
                        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) min((((unsigned char) min((var_0), (((/* implicit */int) (short)11732))))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7 + 1]))) < ((+(10658100103512470300ULL))))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4)))))) >= ((+(((/* implicit */int) var_9))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) ((min((arr_37 [(unsigned short)7] [i_3] [i_3 - 1] [i_13]), (arr_37 [i_3 + 1] [i_3] [i_3 + 2] [i_3]))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_7)), (5611260159831551647LL))))))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((unsigned char) var_6)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 13; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    {
                        var_38 = ((/* implicit */long long int) ((unsigned int) arr_25 [i_3] [i_5] [i_15]));
                        var_39 *= ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((unsigned short) var_9))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_17 = 4; i_17 < 21; i_17 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 2; i_18 < 23; i_18 += 4) 
        {
            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) 8247924243005454499ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_46 [i_17])) != (6213348310215256979ULL)))) : ((+(((/* implicit */int) (short)-7006))))));
            var_41 = ((/* implicit */short) arr_48 [i_18 - 2]);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 4) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                for (unsigned long long int i_21 = 1; i_21 < 22; i_21 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_49 [i_17] [i_19]))) ? (((((/* implicit */_Bool) arr_55 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) ? (min((15685400874080750247ULL), (8247924243005454513ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((7788643970197081303ULL), (((/* implicit */unsigned long long int) arr_53 [i_17])))))))));
                        var_43 = ((((/* implicit */_Bool) var_10)) ? (((long long int) ((unsigned char) 9223372036854775680ULL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (+(var_13)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_22 = 0; i_22 < 24; i_22 += 4) 
        {
            var_44 += ((/* implicit */short) var_14);
            var_45 = ((((_Bool) ((long long int) var_0))) ? (((((((/* implicit */int) var_14)) / (((/* implicit */int) (signed char)-4)))) | ((+(var_10))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)31328))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_1))))))));
            var_46 = ((/* implicit */int) ((unsigned char) (unsigned short)64779));
            var_47 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_14)) >> (((arr_46 [i_17 - 3]) + (1928897056))))));
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)3))) ? (arr_55 [i_17] [i_17] [i_17] [i_17] [i_17] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))) > (arr_57 [i_17 - 2] [i_17 + 2] [i_17] [i_17 + 1] [i_17] [i_17 - 1])))))));
        }
    }
    for (unsigned char i_23 = 3; i_23 < 18; i_23 += 1) 
    {
        var_49 = var_2;
        var_50 |= ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_5 [i_23])))))) ^ (((/* implicit */int) ((short) ((((/* implicit */int) arr_4 [i_23])) * (((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (signed char i_24 = 0; i_24 < 22; i_24 += 1) 
        {
            for (long long int i_25 = 0; i_25 < 22; i_25 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_26 = 2; i_26 < 21; i_26 += 4) 
                    {
                        for (unsigned long long int i_27 = 1; i_27 < 21; i_27 += 4) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_67 [i_23 + 1] [i_26 + 1] [i_27 + 1]))) ? (((/* implicit */int) ((signed char) arr_67 [i_23 - 3] [i_26 + 1] [i_27 + 1]))) : (((/* implicit */int) (signed char)-80))));
                                var_52 = ((/* implicit */int) (+(((unsigned long long int) var_4))));
                                var_53 = ((/* implicit */unsigned short) ((((unsigned long long int) ((unsigned short) arr_70 [i_24]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_64 [i_27] [i_26 - 1])) | (((var_1) ? (((/* implicit */int) arr_6 [i_26] [i_24] [12U])) : (((/* implicit */int) (signed char)-71)))))))));
                                var_54 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_9)), (2916552644U)))))) ^ (((long long int) 129024))));
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 33538048U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_23 + 3]))) : ((+(arr_57 [i_23] [i_23] [i_24] [i_23] [i_25] [i_25])))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (666904442131854959LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_4 [i_24]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_23 + 4])))));
                    var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)114)) || (var_1)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_28 = 0; i_28 < 22; i_28 += 3) 
        {
            for (unsigned short i_29 = 1; i_29 < 20; i_29 += 2) 
            {
                {
                    var_57 = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)194)) ? (4261429248U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)53)) ^ (((/* implicit */int) (unsigned char)53)))))));
                    var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((unsigned int) 1378414651U)))));
                    /* LoopNest 2 */
                    for (long long int i_30 = 4; i_30 < 19; i_30 += 4) 
                    {
                        for (long long int i_31 = 2; i_31 < 18; i_31 += 3) 
                        {
                            {
                                var_59 ^= ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) (signed char)69)) ? (803289154) : ((-2147483647 - 1)))))), (((/* implicit */int) (unsigned char)179))));
                                var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) (+(((arr_67 [i_31 + 3] [i_30 + 1] [i_23 + 2]) & (arr_67 [i_31 + 3] [i_30 - 4] [i_23 - 2]))))))));
                            }
                        } 
                    } 
                    var_61 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-65))))) ? ((+(arr_81 [(short)0] [i_28] [15LL]))) : (((/* implicit */int) ((arr_0 [i_28]) || (((/* implicit */_Bool) (signed char)-4)))))))));
                }
            } 
        } 
        var_62 = ((/* implicit */unsigned long long int) arr_2 [i_23] [i_23] [i_23]);
    }
    var_63 = ((/* implicit */unsigned short) 2404718978169508189LL);
    var_64 = ((/* implicit */signed char) (+(((long long int) var_13))));
    var_65 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) (unsigned char)247)));
    var_66 -= var_8;
}
