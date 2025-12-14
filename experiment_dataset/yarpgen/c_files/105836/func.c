/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105836
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((var_0) ? (((/* implicit */int) var_7)) : (var_2))) : (((((/* implicit */_Bool) 3167245637U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((7646559961353012275ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned long long int) (~(var_4))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 2; i_2 < 8; i_2 += 4) /* same iter space */
            {
                var_13 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33431)) ? (((((/* implicit */_Bool) -59037422)) ? (var_4) : (((/* implicit */long long int) arr_3 [i_0])))) : (min((var_10), (((/* implicit */long long int) arr_4 [3U]))))))) + (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_2 [(short)9] [i_1]))) + (max((((/* implicit */unsigned long long int) arr_4 [i_2 + 2])), (arr_2 [i_1] [i_2])))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2 - 1]))))) : (((arr_1 [4ULL]) << (((((/* implicit */int) (unsigned short)33431)) - (33375)))))));
                var_15 |= ((/* implicit */unsigned short) ((((var_6) + (var_6))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((-1496314279), (((/* implicit */int) arr_4 [i_0])))))))));
            }
            for (long long int i_3 = 2; i_3 < 8; i_3 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned char) max((min((var_2), (((/* implicit */int) arr_5 [i_3] [i_3 + 2] [i_1])))), ((-(((/* implicit */int) (unsigned short)33432))))));
                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9933)) || (((/* implicit */_Bool) (short)32766)))))));
            }
            for (long long int i_4 = 2; i_4 < 8; i_4 += 4) /* same iter space */
            {
                var_18 += ((/* implicit */short) (~(((((/* implicit */int) arr_5 [i_4 - 2] [i_1] [i_1])) * (((/* implicit */int) (short)-22661))))));
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_4 - 1])), (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28846)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_4 + 3])) >= (arr_1 [i_4 + 1])))) : (min((((int) var_1)), (((/* implicit */int) min((((/* implicit */short) var_0)), (var_7))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_20 = ((int) max((((/* implicit */int) max((arr_4 [i_0]), ((unsigned short)55589)))), (max((arr_3 [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    arr_16 [i_0] [i_0] [(short)3] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((732387055U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max(((unsigned short)42823), (arr_4 [i_0])))) : (max((((/* implicit */int) (unsigned short)32101)), (arr_10 [i_0] [i_1] [(short)4] [i_6 + 1])))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [8ULL])) ? (((/* implicit */int) (unsigned short)42177)) : (((/* implicit */int) arr_4 [i_6]))))) ? (((((/* implicit */_Bool) arr_12 [i_6 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_12 [7U])) : (((/* implicit */int) arr_12 [i_5])))))));
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1]))) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_5] [8U])))) ? ((-(var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (arr_3 [i_5])))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [(unsigned short)1] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) != (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))))))));
                var_22 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_5] [i_5] [i_1] [i_1] [i_1] [i_0])), (arr_8 [i_0] [i_5])))) ? ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_12 [i_0]))))));
                var_23 = ((/* implicit */unsigned int) var_8);
            }
            var_24 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [3U] [i_1] [(unsigned char)6])), (16903450410035123033ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((arr_1 [i_1]) - (15421796092873049921ULL)))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_7)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_6) : (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-22318))))) : (((((/* implicit */_Bool) (unsigned short)39870)) ? (var_4) : (var_4))))) - (22277LL)))));
            var_25 += ((/* implicit */short) (!(var_0)));
            var_26 += ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) -59773667)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
            var_27 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((arr_15 [i_0] [i_1] [i_1] [(short)5]) >= (((/* implicit */int) (unsigned short)26057)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_9 [i_1] [6LL] [i_1] [6LL])), (var_7))))) : (max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_1] [i_1])), (-1392426157906788032LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (arr_14 [(unsigned short)10] [8U] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_1])) ? (10160818324888617640ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1]))))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 4; i_8 < 8; i_8 += 4) 
            {
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_8 - 3] [i_8 - 4] [i_8 + 3] [i_8 - 1]))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 11879096687035844205ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_12 [i_8 + 2]))));
            }
            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_13 [(unsigned short)8] [i_0] [i_0] [i_0] [i_0] [i_7])) ^ (-1LL)))) ? (((/* implicit */int) max((var_1), (arr_12 [i_0])))) : ((~(((/* implicit */int) arr_18 [i_0] [i_0] [i_7]))))))) >= (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4226))) / (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0])))))));
            var_31 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))) : (6567647386673707399ULL))), (((/* implicit */unsigned long long int) max((arr_18 [i_0] [i_7] [i_0]), (((/* implicit */unsigned short) arr_12 [i_7])))))));
        }
    }
}
