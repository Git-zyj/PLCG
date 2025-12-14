/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152789
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
    var_18 = ((/* implicit */short) var_6);
    var_19 = ((min((((var_6) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) var_17)) >> (((((/* implicit */int) var_15)) + (12047))))))) >> (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (signed char)103)) ? (4627521569769455251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) var_14);
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0] [i_0])))))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)41)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_21 += ((/* implicit */unsigned int) min((max((var_10), (arr_1 [i_0] [i_0]))), (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)127)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_12))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((var_6), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11)))))))));
}
