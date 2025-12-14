/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155746
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_7))))) ? (3851366983U) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((var_12) > (var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43)))))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (0ULL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (((!(arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 696869448U)) < (4ULL))))) : (max((arr_4 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_4))))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((0ULL) / (max(((+(0ULL))), (((/* implicit */unsigned long long int) (-(2267162663U)))))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((short) arr_3 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)7))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1 - 3] [i_1] [i_1 - 3]))) : (((/* implicit */int) ((unsigned short) var_5)))))) : (((((/* implicit */_Bool) -1695128001)) ? (0ULL) : (((/* implicit */unsigned long long int) 15U))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) ? (-984139572) : (((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -984139572)) : (16U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (5U)))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned int) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) arr_4 [(unsigned char)0] [(unsigned char)0]))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])))))))));
    }
    var_19 &= min(((~(var_9))), (((/* implicit */long long int) var_3)));
    var_20 = ((/* implicit */signed char) ((min((var_12), (((var_0) ^ (var_12))))) < (max((var_11), (var_12)))));
}
