/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177396
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_17))));
    var_19 = var_3;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_16)))) ? (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((var_12) | (var_9)))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_8 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)56)) - (((/* implicit */int) (unsigned char)145))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_1))))))))));
                                var_21 = ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((/* implicit */int) var_10))))) ? (((var_9) + (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((-(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (var_4))))) * (((unsigned int) -1078495257378607481LL)))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((var_12) ^ (((/* implicit */long long int) var_4)))) > (((/* implicit */long long int) ((/* implicit */int) ((max((var_6), (var_16))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) (unsigned char)0))))))))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
                }
                for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    arr_26 [i_0 + 1] [i_0] [i_1] [(unsigned char)13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) + (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_4)))))))));
                    var_24 = ((/* implicit */unsigned char) max((((var_6) | (var_16))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_16)))));
                    arr_27 [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) -8847693710777846847LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)9)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)218)) << (((((/* implicit */int) (unsigned char)251)) - (235))))) - ((+(((/* implicit */int) ((((/* implicit */_Bool) 3421357263U)) || (((/* implicit */_Bool) (unsigned char)248)))))))));
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(var_0))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((var_9) << (((var_14) - (2043119249U))))) : (max((((/* implicit */long long int) var_10)), (var_15))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))));
                        var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)39)) >= (((/* implicit */int) (unsigned char)37))))), (max((680826041U), (31U))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_32 [i_0 + 1] [3U] [i_7] [1LL] [i_7 + 1] [i_0] [i_9] = ((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_28 = ((var_13) & (((/* implicit */long long int) var_14)));
                            var_29 ^= ((/* implicit */unsigned int) ((unsigned char) (unsigned char)255));
                            var_30 *= var_14;
                        }
                        var_31 = ((/* implicit */unsigned int) max((-8315966289386718716LL), (-676168417011314327LL)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_36 [i_0 - 1] [i_0] [i_7] [17LL] = ((unsigned int) var_15);
                        var_32 = ((unsigned int) ((unsigned char) 2671024768U));
                        var_33 = ((/* implicit */long long int) ((((((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) > (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) ((((-5048685943026051413LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) ? (((unsigned int) var_5)) : (var_4))))));
                        var_34 += ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) (+(((/* implicit */int) (unsigned char)8))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_35 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)117))))) | (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7))) & (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                        var_36 = ((((9223372035781033984LL) | (((/* implicit */long long int) 2759043477U)))) | (((long long int) var_4)));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((unsigned int) max((var_9), (var_9))))));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (var_0))))) <= (((var_12) ^ (var_15)))))))))));
                    }
                    arr_39 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_39 |= ((/* implicit */unsigned char) var_3);
                    var_40 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)145))));
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) | (max((var_12), (((/* implicit */long long int) var_2))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) | (var_14))) : (((unsigned int) (unsigned char)0)))))));
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_12)))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_43 += ((/* implicit */long long int) ((((4294967295U) % (3073261831U))) <= (((((/* implicit */_Bool) var_6)) ? (var_0) : (var_16)))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((var_7) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((var_0) - (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((unsigned int) var_10)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 2; i_17 < 18; i_17 += 1) 
                        {
                            var_46 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_0)))) ? (((/* implicit */long long int) ((unsigned int) var_10))) : (((long long int) var_10)));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) var_12))) + (((var_12) + (var_15)))))) || (((((/* implicit */_Bool) var_15)) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9))))))));
                            var_48 = ((unsigned char) ((unsigned int) var_12));
                        }
                        arr_53 [9U] [(unsigned char)11] [0LL] [i_0] [13U] [(unsigned char)9] = ((/* implicit */long long int) var_0);
                    }
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))))));
                        var_50 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) -9167398479569224649LL)));
                        var_51 = ((/* implicit */long long int) ((max((var_0), (var_6))) % (((((/* implicit */_Bool) var_2)) ? (var_6) : (var_14)))));
                    }
                    for (unsigned char i_19 = 3; i_19 < 17; i_19 += 2) 
                    {
                        var_52 = ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) var_14))));
                        var_53 = ((/* implicit */unsigned char) (((~(var_7))) > (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) var_16))))));
                    }
                }
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))))))) && (((/* implicit */_Bool) ((unsigned int) (unsigned char)188)))));
}
