/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102961
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
    var_15 *= ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))), (((unsigned int) var_13)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((signed char) 514310502U));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((3829616330393872635LL) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))) == (var_2)))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? ((~(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) (_Bool)0)))))))));
                                var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13802)))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)16])) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_11 [i_4]))))) && (((/* implicit */_Bool) (signed char)35))));
                                var_21 = ((((((/* implicit */_Bool) arr_4 [19U] [1LL] [1LL])) ? (5045809048255048666ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6834))))) & (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_3 + 1] [i_3 + 1])));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((unsigned int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17635))) | (-5LL)))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_0 - 1])))))));
                }
            } 
        } 
    }
}
