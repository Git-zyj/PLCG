/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10758
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
    var_19 = ((/* implicit */_Bool) min((3404254159370011286LL), (((/* implicit */long long int) (short)-12973))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) min(((short)12973), ((short)12973))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [i_0])) && (((/* implicit */_Bool) var_13))))) : ((~(((/* implicit */int) (short)12973))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) % (var_17)))));
                    var_22 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0 + 1] [i_1 - 1] [i_2]);
                    var_23 = ((/* implicit */unsigned long long int) arr_8 [i_0 - 2]);
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_24 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1])) / (((((/* implicit */_Bool) 7280743109392371081ULL)) ? (1445293661) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [(unsigned char)8]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 2] [(signed char)0])) != (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [(signed char)0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8000325184175683365LL))))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)12957))))) ? (((((/* implicit */int) (unsigned char)131)) ^ (((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-45)), ((unsigned short)42707))))))) != (((((/* implicit */unsigned int) min((((/* implicit */int) (short)10080)), (arr_10 [i_0] [i_0] [i_0])))) & (var_1)))));
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 9; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_19 [i_5] [i_1 - 4] [i_0 - 2])) : (((/* implicit */int) arr_19 [i_1] [i_1 + 2] [3ULL]))))) || (((/* implicit */_Bool) min((arr_14 [i_0 + 1] [i_1 - 1] [i_0 - 2] [i_4 - 1] [i_5] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_1 - 2] [i_0])))))));
                            arr_21 [i_0] [i_4 - 3] [i_5] = ((/* implicit */int) arr_11 [i_0 - 2]);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_4 + 1] [i_0] [i_4] [i_0]))) : (var_17)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16117)) ? (6068933424280598298LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24466))))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)81)) != (((/* implicit */int) arr_0 [i_0]))))), (arr_0 [i_0])));
                            var_29 &= ((/* implicit */long long int) arr_10 [i_1] [i_3] [i_3]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_30 -= ((/* implicit */long long int) min((((/* implicit */int) min((arr_2 [i_1 - 3] [i_4 - 1]), (arr_2 [i_1 - 3] [i_4 + 1])))), (((((/* implicit */int) arr_2 [i_1 - 1] [i_4 + 1])) << (((var_1) - (3890076146U)))))));
                            var_31 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7280743109392371108ULL)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_9)))))))), ((+(((int) arr_0 [i_0]))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)23768)) != (((/* implicit */int) (unsigned short)3763))));
                            var_33 = ((/* implicit */signed char) var_3);
                        }
                        arr_28 [i_0 + 1] [i_0] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) (((((+(((/* implicit */int) (short)-28447)))) / (((-1164525059) + (((/* implicit */int) (signed char)22)))))) / (((((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2])) * (((/* implicit */int) arr_0 [i_0]))))));
                        var_34 = var_16;
                    }
                    var_35 *= ((/* implicit */short) arr_27 [(short)2]);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_36 = ((/* implicit */short) ((unsigned long long int) ((3051559577U) - (((/* implicit */unsigned int) ((/* implicit */int) ((-1997005302) <= (((/* implicit */int) arr_32 [i_1] [i_8])))))))));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_8] [i_0]))))) ? (((((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_0] [i_0] [5LL])) && (((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_3] [i_8] [i_9])))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_4)) : (-7152660440621331944LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_3] [i_9]))) % (303477691U)))))) : (((((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0 + 1] [i_3 - 1] [i_8] [i_9]), (var_10))))) ^ (((long long int) arr_18 [i_0] [i_0] [i_3] [i_0 - 1] [i_9]))))));
                            arr_35 [i_0 + 1] [i_1 - 4] [i_0] [7] = ((/* implicit */unsigned int) ((((((((/* implicit */int) ((short) (short)-31555))) + (2147483647))) << (((((/* implicit */int) (unsigned short)62367)) - (62367))))) / (((/* implicit */int) var_15))));
                        }
                        arr_36 [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3 - 1] [i_0 - 2] [i_0] [i_1 - 1])) ? (arr_23 [i_3 - 1] [i_0 - 2] [i_0] [i_1 - 2]) : (arr_23 [i_3 - 1] [i_0 - 1] [i_0] [i_1 + 2]))))));
                    }
                }
            }
        } 
    } 
}
