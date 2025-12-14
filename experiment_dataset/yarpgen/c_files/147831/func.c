/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147831
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
    var_17 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [(signed char)0]))))) ^ (((((/* implicit */_Bool) (unsigned char)223)) ? (-9100725686340267463LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            var_20 = ((/* implicit */unsigned char) ((unsigned short) max((arr_9 [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2221)) && (((/* implicit */_Bool) (unsigned char)208))))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (2419120693915202348ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [8U] [i_2] [i_3 + 1] [i_4])))))))) : (((/* implicit */unsigned long long int) (-(var_3)))))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [(unsigned short)4] [(unsigned short)4] [i_4])) : (((/* implicit */int) arr_7 [0] [i_1] [i_2])))) > (arr_9 [4U]))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) var_12);
                    }
                    var_24 = ((/* implicit */short) (signed char)46);
                    var_25 = ((/* implicit */unsigned char) 1889751803U);
                    var_26 = (!(((((/* implicit */int) ((((/* implicit */int) arr_14 [i_0 - 1] [i_1] [i_1] [(signed char)1] [i_1] [i_0 - 1] [i_2])) >= (((/* implicit */int) (short)56))))) >= (((/* implicit */int) arr_1 [i_0 - 1])))));
                }
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)1) ? (((/* implicit */int) arr_4 [(unsigned char)0])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_6 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(signed char)8] [i_1] [i_0] [i_1] [i_0])) ? (min((((/* implicit */int) arr_5 [4LL] [4LL])), (268435448))) : (((/* implicit */int) var_11))))) : (min((max((1183810331U), (((/* implicit */unsigned int) var_15)))), (((var_6) << (((/* implicit */int) (_Bool)1)))))))))));
                var_28 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((long long int) 14937946292715669086ULL))))));
                var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_0] [i_0] [i_0] [i_1])) != (1513885177U))))) : (var_8))) % (((((/* implicit */_Bool) ((var_9) & (1650262266U)))) ? (((((/* implicit */_Bool) (signed char)45)) ? (var_1) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
            }
        } 
    } 
}
