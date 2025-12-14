/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161348
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)4] [(short)4]))) : (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))))))));
        var_20 *= ((/* implicit */short) (~(((4294967295U) | (((/* implicit */unsigned int) var_8))))));
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) (((~(((1287111017U) | (((/* implicit */unsigned int) -2075272371)))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1 - 3] [i_1 + 1])))))));
        var_22 *= ((((/* implicit */_Bool) max((arr_5 [i_1] [i_1 - 2]), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 3]))) : (((((/* implicit */_Bool) var_17)) ? (arr_5 [i_1] [i_1 - 2]) : (((/* implicit */unsigned long long int) var_13)))));
        arr_6 [i_1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 4294967279U))) && (((/* implicit */_Bool) arr_0 [i_1 - 1])))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) (~(3007856264U)))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1 - 3] [(short)6])), (var_14)))));
    }
    for (unsigned short i_2 = 4; i_2 < 21; i_2 += 3) 
    {
        var_24 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(0ULL))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (-1027506999))))))), (min((((/* implicit */int) (unsigned short)39528)), (-2075272371))))))));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 558191564)) ? ((~(((((/* implicit */_Bool) -2075272371)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U))))) : (((/* implicit */unsigned int) ((-1537795005) / (((/* implicit */int) (unsigned char)197)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 *= ((/* implicit */unsigned long long int) var_12);
    var_29 = ((/* implicit */signed char) 3007856279U);
    var_30 = ((/* implicit */unsigned short) var_8);
}
