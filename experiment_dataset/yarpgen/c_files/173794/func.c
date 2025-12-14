/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173794
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_16 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (~(var_9)))) | (arr_3 [i_0 + 1] [i_1 + 2]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) + (((/* implicit */int) arr_0 [i_1])))) ^ (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [8ULL] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((signed char) arr_4 [14] [i_0 - 2]))))))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) var_15);
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_10 [i_0] [i_2] [i_0] |= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (arr_2 [i_2]) : (((/* implicit */int) var_7))))))) + (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2108513608U))))));
            var_18 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_2] [i_0]), (((/* implicit */short) var_6))))) ? (((((/* implicit */_Bool) -5550375099107950709LL)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (signed char)-68)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [(unsigned char)12] [i_2] [i_2])))))));
            arr_11 [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_2] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_0]))));
                var_19 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_12 [i_0 - 1] [i_0 - 2]))));
                var_20 += ((/* implicit */unsigned char) ((arr_2 [i_3]) != (((/* implicit */int) (!(((/* implicit */_Bool) 17336684875286207862ULL)))))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
            {
                var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (5550375099107950692LL))) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) var_4))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_12 [i_4] [i_4])))) : (var_12)));
                arr_18 [i_0] [9] [(_Bool)1] [i_0] = ((/* implicit */int) arr_8 [i_0 + 3] [i_0 - 2] [i_0]);
                arr_19 [i_2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_10)) % (((/* implicit */int) arr_16 [i_4] [i_4]))))));
            }
            var_23 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_0] [(signed char)1] [i_2] [i_2])) ? (var_9) : (max((((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2])), (5550375099107950703LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 3146690408110337851ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((_Bool) 14544879894535532777ULL))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_24 [i_0] = ((/* implicit */_Bool) var_12);
            arr_25 [i_0] = ((/* implicit */unsigned short) var_14);
        }
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1469167629)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) <= (((/* implicit */int) (unsigned short)65535))))) : ((~(((/* implicit */int) var_14))))))) ? (arr_2 [i_6]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 + 1])))))));
            var_25 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -728809385))))), (min((var_5), (arr_0 [i_6]))))), (((unsigned short) (-(var_0))))));
        }
        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((var_15), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_2 [(signed char)2]))))))));
        var_27 = ((/* implicit */int) (+(((long long int) (!(((/* implicit */_Bool) var_1)))))));
        arr_28 [0LL] [i_0 + 1] |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3]))));
    }
    var_28 = ((/* implicit */long long int) ((unsigned int) max((((var_7) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))), (min((var_3), (((/* implicit */unsigned long long int) var_15)))))));
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) << ((((+(((/* implicit */int) (unsigned short)15333)))) - (15331)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
}
