/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138367
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
    var_17 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (-(-2029103352547051713LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-5822548391419410943LL)))) : (((var_14) / (14417984189309535683ULL))))));
    var_18 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3108289407378441658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))))) ? ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((559829696U) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) == (((/* implicit */int) arr_0 [i_0] [i_1]))));
                arr_6 [i_1] = min((((/* implicit */unsigned long long int) ((_Bool) 6810567064440350630LL))), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11852)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61440))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4096)))));
                    var_20 = ((/* implicit */unsigned short) ((arr_5 [i_1]) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_12)))))));
                }
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (((min((var_9), (((/* implicit */long long int) var_6)))) % (((/* implicit */long long int) arr_2 [i_0])))))))));
            }
        } 
    } 
}
