/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122232
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) (signed char)-1);
                var_20 = ((/* implicit */unsigned char) (+(max((arr_3 [i_1] [i_1 + 1]), (((/* implicit */int) (_Bool)1))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) - (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) ((unsigned char) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_12 [i_0] [5] [i_2] [i_1] = ((/* implicit */short) ((unsigned char) max((((/* implicit */int) (_Bool)1)), (arr_5 [i_1] [(unsigned char)6] [i_1 + 1]))));
                    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((12778773853739969676ULL), (((/* implicit */unsigned long long int) -2121558277)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-11083)) : (var_1))))))) ? (((arr_0 [i_0]) + (((/* implicit */int) arr_7 [2U])))) : (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (1686512092)))));
                }
                for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7701738506076327926LL)) ? (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_1 + 1])) ? (arr_11 [i_3 - 1] [i_1 + 1]) : (arr_11 [i_3 + 1] [i_1 + 1]))) : (arr_11 [i_3 + 2] [i_1 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_13 [i_1 + 1]) && (arr_13 [i_1 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) var_17);
                            arr_21 [i_0] [i_0] = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4])))))))));
                            arr_22 [i_0] [i_0] [i_1] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */int) arr_6 [i_5 + 3]);
                        }
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_26 [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)120);
                            var_26 ^= ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_0] [i_4]);
                            var_27 |= ((/* implicit */_Bool) var_18);
                        }
                        arr_27 [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_3 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_23 [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1] [i_3 - 1])), ((unsigned short)65535)))) : (((/* implicit */int) (!(arr_23 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_3 + 2]))))));
                    }
                    arr_28 [(short)0] [(signed char)0] = ((/* implicit */unsigned char) max((arr_17 [i_3] [i_3] [i_3] [2ULL] [2ULL] [i_3 + 2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_1 + 1])))))));
                    var_28 = ((/* implicit */int) (!(arr_23 [i_0] [(short)3] [i_0] [i_1] [i_3])));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30686))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (_Bool)1)))))))) ? ((((_Bool)1) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) (unsigned char)111)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)9371))))))))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)185), (((/* implicit */unsigned char) var_4))))) | (var_1)))) : ((+((-(var_7)))))));
    var_31 ^= ((/* implicit */short) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_15)))));
}
