/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103353
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
    var_12 -= ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (15433439338935090507ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 3932160)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 *= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))) : ((~(((25ULL) & (((/* implicit */unsigned long long int) 1141733786U)))))));
                var_14 += ((/* implicit */_Bool) 2942396565520146658ULL);
                arr_4 [9LL] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) var_11))), ((-(((/* implicit */int) min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0]))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) var_2))), ((-(20ULL))))))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((int) var_1)))) || (((/* implicit */_Bool) 2U))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_6), (min((((/* implicit */unsigned long long int) ((var_7) << (((((/* implicit */int) (unsigned short)18208)) - (18180)))))), ((-(var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (max(((-(min((arr_8 [(signed char)16] [(signed char)16]), (var_6))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)47327)))) + ((-(arr_6 [4]))))))))));
        var_18 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)18208)) / (arr_6 [20]))));
        arr_9 [i_2] [i_2] = max((max((max((arr_8 [i_2] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)0)))), (min((var_9), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (min((((/* implicit */long long int) arr_6 [i_2])), (-5013584842752787717LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 14422262108400761279ULL))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47322))))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3]))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? ((+(arr_0 [i_3] [i_3]))) : (arr_10 [i_3] [8U])));
    }
}
