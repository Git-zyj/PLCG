/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179688
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
    var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_8)), (((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [(_Bool)1] [i_2] = ((/* implicit */signed char) var_12);
                        var_17 = ((/* implicit */unsigned int) (+(var_7)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))))))));
                arr_17 [i_0] [i_4 + 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_11))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_10))));
                var_20 = ((/* implicit */unsigned short) var_2);
            }
            arr_18 [i_4] [(_Bool)1] [i_4] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
        }
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_21 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_10)))))));
            arr_22 [i_0] [i_0 + 1] [i_0] = ((/* implicit */short) var_2);
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-((~(((/* implicit */int) var_2)))))))));
            arr_23 [i_0] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_5))));
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_13))));
            arr_27 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))));
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                var_23 *= ((/* implicit */signed char) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_12))));
                var_24 = (!(((/* implicit */_Bool) var_5)));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_2))));
            }
            for (unsigned short i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_13))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_27 = ((/* implicit */long long int) var_6);
                    var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_3)));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_14))));
                    arr_36 [i_0] = ((/* implicit */unsigned char) ((((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                }
                var_30 &= ((/* implicit */long long int) (!(var_13)));
            }
            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
        }
        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            arr_41 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (var_9)));
            /* LoopSeq 1 */
            for (signed char i_12 = 2; i_12 < 20; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 2; i_13 < 21; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_33 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                            var_34 -= ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                            var_35 = ((/* implicit */unsigned char) var_3);
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (var_3)));
                        }
                    } 
                } 
                var_37 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_8)) - (4612)))));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            var_38 = ((/* implicit */long long int) (!(((var_6) && (((/* implicit */_Bool) var_7))))));
            /* LoopNest 2 */
            for (unsigned char i_16 = 1; i_16 < 19; i_16 += 4) 
            {
                for (short i_17 = 4; i_17 < 19; i_17 += 4) 
                {
                    {
                        var_39 = ((/* implicit */signed char) (-(var_4)));
                        /* LoopSeq 3 */
                        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
                        {
                            var_40 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > ((~(var_14)))));
                            var_41 = ((var_9) == (((/* implicit */int) var_5)));
                            arr_61 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                            var_42 += ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_8))));
                        }
                        for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) 
                        {
                            var_43 = ((/* implicit */long long int) (-(var_14)));
                            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_4))))));
                            arr_64 [i_17 - 2] [9LL] [i_16 - 1] [i_17] [i_0] [(signed char)14] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (var_4)));
                        }
                        for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
                        {
                            var_45 = ((/* implicit */short) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_5))));
                            var_46 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_11)) - (119)))));
                            arr_69 [i_0] [13] [i_16 + 1] [i_17 + 3] [i_20] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (var_9)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_21 = 1; i_21 < 22; i_21 += 1) 
                        {
                            arr_72 [i_0] [(unsigned char)5] [(unsigned char)5] [i_17] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                            var_47 = ((/* implicit */signed char) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_73 [i_0] [i_0] [i_0] [i_16] [i_17] [16LL] = ((/* implicit */short) (~(var_9)));
                            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                        }
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
                        {
                            var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                            var_50 ^= ((/* implicit */short) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        }
                        var_51 = ((/* implicit */short) (!(var_6)));
                        var_52 *= ((/* implicit */signed char) var_4);
                    }
                } 
            } 
            arr_76 [i_0] [12LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
            var_53 = ((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        }
        arr_77 [i_0] = ((/* implicit */unsigned short) ((var_4) != (var_4)));
        var_54 = ((/* implicit */unsigned char) (!(var_2)));
    }
    for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_24 = 0; i_24 < 24; i_24 += 4) 
        {
            /* LoopNest 2 */
            for (short i_25 = 0; i_25 < 24; i_25 += 4) 
            {
                for (signed char i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    {
                        var_55 &= ((/* implicit */unsigned char) ((min((((/* implicit */int) min((((/* implicit */short) var_13)), (var_8)))), (((((/* implicit */int) var_13)) | (((/* implicit */int) var_13)))))) >= (((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        arr_91 [i_23] = var_12;
                        var_56 |= (((+(var_7))) % (((/* implicit */int) var_15)));
                        var_57 += ((/* implicit */long long int) var_5);
                        var_58 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_5)))))));
                    }
                } 
            } 
            arr_92 [i_23] = ((/* implicit */long long int) (+((-(((/* implicit */int) var_2))))));
        }
        /* LoopNest 2 */
        for (signed char i_27 = 1; i_27 < 22; i_27 += 2) 
        {
            for (unsigned char i_28 = 2; i_28 < 23; i_28 += 4) 
            {
                {
                    var_59 |= ((/* implicit */short) var_15);
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 24; i_29 += 4) 
                    {
                        for (long long int i_30 = 0; i_30 < 24; i_30 += 4) 
                        {
                            {
                                var_60 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10))))), (max((var_3), (((/* implicit */long long int) var_13))))));
                                var_61 = ((/* implicit */int) max((var_61), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) << (((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_0))))) - (42166)))))) & (((var_3) - (((/* implicit */long long int) ((/* implicit */int) min((var_12), (var_6))))))))))));
                                var_62 |= ((/* implicit */_Bool) max(((+(min((((/* implicit */int) var_12)), (var_7))))), (min((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_5))))), (var_9)))));
                            }
                        } 
                    } 
                    var_63 = min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned int) var_0)), (var_4))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_12)) * (((/* implicit */int) var_2))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_31 = 0; i_31 < 24; i_31 += 4) 
                    {
                        arr_106 [i_31] [i_27] [i_28] = ((/* implicit */short) ((((((/* implicit */unsigned int) var_9)) ^ (var_14))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_64 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    }
                    for (signed char i_32 = 0; i_32 < 24; i_32 += 1) 
                    {
                        arr_110 [i_23] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_4)))), (var_13)));
                        var_65 = ((/* implicit */long long int) min((min((min((var_9), (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_6)))))), (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) var_0))))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) var_5))))))))));
                    }
                }
            } 
        } 
        var_66 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_13)) << (((var_14) - (3951880667U))))), ((+(((/* implicit */int) var_15))))));
        var_67 *= ((/* implicit */_Bool) max((((var_9) & (((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */signed char) var_13)), (var_0))))));
    }
    var_68 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))), (var_6))))) >= (var_14)));
}
