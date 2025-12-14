/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129819
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 15622520633683833438ULL))) ? (min((var_6), (var_0))) : (var_0)))) ? (((/* implicit */unsigned long long int) (~(min((1753241014U), (((/* implicit */unsigned int) (signed char)-1))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) + (var_6)))) ? (var_3) : (max((((/* implicit */unsigned long long int) (signed char)83)), (var_8)))))));
    var_11 = ((/* implicit */unsigned short) 10078778214532684264ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [12] [i_1] = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 1843885374)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))) : (var_9));
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) != (((((/* implicit */_Bool) 16383ULL)) ? (((/* implicit */unsigned long long int) -615659592)) : (11818760612746725403ULL)))));
        }
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) <= (arr_1 [i_0 - 1])));
    }
}
