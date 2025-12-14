/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144324
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (~(max((min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)31)))), (max((0U), (((/* implicit */unsigned int) var_10))))))));
        var_17 = ((/* implicit */unsigned int) ((max((var_7), (((unsigned int) var_12)))) != (max((((((/* implicit */_Bool) 62914560U)) ? (arr_1 [i_0]) : (67108863U))), (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_18 = max((((/* implicit */unsigned int) (signed char)26)), (((unsigned int) arr_0 [i_1] [i_1])));
        arr_4 [i_1] = ((/* implicit */unsigned short) var_15);
        arr_5 [i_1] = ((/* implicit */signed char) ((var_0) >> (((max((arr_1 [i_1]), (((/* implicit */unsigned int) ((18U) != (4294967283U)))))) - (2645901157U)))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), ((signed char)51)));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_17 [i_3] [i_4] = ((/* implicit */unsigned short) var_7);
                    var_20 = min((arr_10 [i_1] [i_1] [i_1] [i_4]), (((/* implicit */unsigned int) (signed char)-52)));
                    var_21 ^= ((/* implicit */unsigned int) (signed char)0);
                }
                arr_18 [i_1] [i_2] [i_3] [i_1] = max((((((/* implicit */_Bool) 4294967294U)) ? (3584147277U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))), (((/* implicit */unsigned int) var_3)));
                var_22 = ((/* implicit */unsigned int) ((max((arr_3 [i_1]), (((/* implicit */unsigned int) var_3)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (((var_9) - (arr_1 [i_2])))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_1] [9U] [i_3])) ? (1124092369U) : (var_11))) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
            }
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            arr_22 [i_1] [i_1] [i_5] = arr_14 [i_1];
            arr_23 [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-26))));
            var_24 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (arr_19 [i_1]) : (4232052736U))), (((((/* implicit */_Bool) var_10)) ? (var_14) : (2295260480U)))))) ? (13U) : (62914544U));
        }
        arr_24 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) << (((((unsigned int) (signed char)(-127 - 1))) - (4294967163U)))))), (var_1)));
    }
    var_25 = ((/* implicit */unsigned short) var_8);
}
