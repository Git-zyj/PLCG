/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143161
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
    var_14 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (signed char)93)), (((((/* implicit */_Bool) 4333190166709508607LL)) ? (234803156141093495LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-111)) / (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-1)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_3)))), (max((-754113020657623348LL), (((/* implicit */long long int) (signed char)-110))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)9] [i_0])) && (((/* implicit */_Bool) (signed char)112)))))) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */short) (unsigned char)70))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (short)4139))))) : (((((/* implicit */_Bool) (short)-26773)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4139))) : (2703572294439134251LL)))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))) < (min((-2976791443529391150LL), (((/* implicit */long long int) arr_3 [i_0 - 3]))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 11193177)))))));
    }
}
