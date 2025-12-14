/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141318
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */_Bool) ((var_6) ? (var_0) : (((/* implicit */unsigned long long int) var_11))))) ? (13730872479180720703ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_0))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))))))));
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_2))))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26404)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)192))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (4715871594528830913ULL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((var_11), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((-17) != (((/* implicit */int) (short)-20274)))))))))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1103697695285888100LL)) ? (1328902223U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1103697695285888094LL)) && (((/* implicit */_Bool) -735069392))))))))) : ((+(((arr_1 [i_0]) >> (((7668284534997728013LL) - (7668284534997727991LL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_4);
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)-4752), (((/* implicit */short) (unsigned char)192)))))))) : ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(unsigned char)21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)6] [i_0]))) <= (arr_1 [i_0])))))))));
    }
}
