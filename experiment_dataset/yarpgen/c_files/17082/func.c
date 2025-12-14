/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17082
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) max((arr_0 [(_Bool)1] [i_0 + 1]), (arr_0 [i_0] [i_0]))))));
        var_11 = ((signed char) ((min((-1LL), (((/* implicit */long long int) arr_1 [3LL] [i_0])))) != (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)105)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max(((+(min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_0] [11LL])))) * ((-(((/* implicit */int) (unsigned short)65535)))))))));
    }
    var_12 ^= var_6;
    var_13 = ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) <= (var_1)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) min((((unsigned char) (unsigned char)177)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1))))))))));
    var_14 = ((/* implicit */unsigned short) (+(max((var_9), (((/* implicit */unsigned int) (_Bool)0))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_7)))))))));
}
