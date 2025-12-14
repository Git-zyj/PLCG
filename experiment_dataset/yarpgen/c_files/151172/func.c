/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151172
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_14 = (~(var_8));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_15 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)28599)) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_9))) : (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_5 [i_1 - 2])))) * (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned short)20])) * (((/* implicit */int) var_7))))) > ((+(7760424137067360100LL)))))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) (unsigned char)46);
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_11 [i_3] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_2])), (var_3)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)66)) ^ (((/* implicit */int) (unsigned char)61))))) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_12 [(signed char)2] [i_4] [8LL] [i_3] [8LL] [(signed char)2]))))) & (var_1))))));
                            var_19 = (~(((((/* implicit */_Bool) max(((unsigned char)13), ((unsigned char)66)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_4]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_3))))));
                        }
                    } 
                } 
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((var_3), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (1294073217152764408LL))))))));
                    arr_23 [(unsigned short)13] [(unsigned short)13] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_7 [i_2] [i_6]) : (arr_7 [i_1] [i_2])))), (max((((/* implicit */long long int) arr_7 [i_2] [i_2])), (var_12)))));
                    arr_24 [0ULL] [i_6] [(_Bool)1] [i_7] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)34))));
                    var_21 += ((((((/* implicit */_Bool) (~(var_6)))) && (arr_6 [i_1 - 4] [i_7 - 1] [i_7 - 1]))) ? ((~(7839791507973003068ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (max((((/* implicit */unsigned char) arr_5 [(unsigned short)19])), ((unsigned char)166))))))));
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) ((((/* implicit */_Bool) arr_26 [i_9] [i_1 - 3] [i_6] [(_Bool)1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned short)8] [i_1 + 2] [(unsigned short)8] [i_1 - 3] [i_1 + 2] [i_1 + 2]))) : (arr_26 [i_1] [i_1 - 3] [i_6] [0ULL] [i_1]))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 1])) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2] [(unsigned short)11] [i_1 - 3])))) : (max((((/* implicit */unsigned long long int) arr_5 [i_1 - 1])), (var_3)))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1] [(short)13] [i_9] [i_1] [10LL]))));
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_25 *= min(((+(4706604883915868622LL))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 4] [i_1])) : (((/* implicit */int) var_2)))))));
                        var_26 = ((/* implicit */long long int) arr_9 [i_1 - 2] [i_1 - 1] [i_1 - 4] [i_1]);
                    }
                    arr_35 [i_8] [i_6] [(_Bool)1] [(_Bool)1] = (-(((unsigned long long int) arr_28 [i_8] [i_2] [i_6] [i_1 - 4])));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) ((var_8) != (var_1)));
                    arr_39 [i_6] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)90)) << (((var_8) + (8451785199014925375LL)))));
                    var_28 = ((/* implicit */_Bool) 1490624254U);
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((_Bool) arr_16 [i_1 - 2] [i_2] [i_6] [i_6] [(unsigned short)10] [5LL])))));
                }
                var_30 = ((/* implicit */unsigned int) ((unsigned long long int) var_11));
                var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_1] [i_1] [i_1]))))), (max((arr_17 [i_1] [i_6] [i_2] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)240))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 1) 
                {
                    arr_42 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((unsigned long long int) 1985894670923020812LL)), (((/* implicit */unsigned long long int) ((unsigned short) var_7)))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        arr_46 [i_6] [i_2] [i_2] [(_Bool)0] = ((/* implicit */unsigned short) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_5)))) > (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_6]))))))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_2))));
                        var_33 += ((/* implicit */unsigned int) ((_Bool) (unsigned char)210));
                    }
                }
            }
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_10 [i_1 - 4] [i_1 + 2]), (arr_10 [i_1 + 2] [i_1 - 1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_2])))))));
            arr_47 [i_2] [i_1] [1LL] = ((/* implicit */unsigned short) var_1);
        }
    }
    var_35 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_12)) ? (7278917562770967671ULL) : (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))) <= (((/* implicit */unsigned long long int) var_12))));
    var_36 = ((/* implicit */unsigned int) ((max((((6678863194469219389ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((var_1) <= (var_12)))))) > (((/* implicit */unsigned long long int) ((((var_2) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))) * (((((/* implicit */int) var_4)) * (((/* implicit */int) var_7)))))))));
    var_37 *= ((/* implicit */unsigned char) (((((~(((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned char)195)))))) + (2147483647))) << (((((/* implicit */int) (unsigned short)14457)) - (14457)))));
    var_38 = ((var_10) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7791)) ? (((((/* implicit */int) (short)9135)) << (((var_9) - (2174863914876558021ULL))))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20813))) % (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (6678863194469219389ULL))))));
}
