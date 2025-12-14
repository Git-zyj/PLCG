/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147350
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -7232459389328012666LL)) ? (var_19) : (((/* implicit */long long int) 1421738372)))), (((/* implicit */long long int) max((min((0), (0))), ((~(((/* implicit */int) var_9)))))))));
        var_22 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0)), (946454897311831430ULL)))) ? (max((4738868509354855772LL), (((/* implicit */long long int) arr_1 [(signed char)1])))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_1 [i_0]))))), ((-(var_0)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_24 ^= ((/* implicit */signed char) (+(4130905462757705953LL)));
        var_25 |= arr_3 [i_1];
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (signed char)7)))))))) != (((/* implicit */int) (short)-528))));
    var_27 = ((/* implicit */unsigned short) var_18);
}
