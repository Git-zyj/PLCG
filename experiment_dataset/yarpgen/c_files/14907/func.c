/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14907
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-112)) == (((/* implicit */int) (unsigned char)63))));
        var_13 |= ((/* implicit */long long int) ((short) max((arr_0 [i_0 + 1] [(_Bool)1]), (((/* implicit */short) (signed char)111)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) min((((/* implicit */long long int) (_Bool)1)), (-457300464741856211LL))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(min((max((295539695), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) >= (-295539696))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] |= ((/* implicit */_Bool) ((short) ((long long int) var_8)));
        arr_10 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_0 [4LL] [4LL]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : (65535LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (-2147483647 - 1))))))))) < (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_2 [i_2])), (var_11))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) arr_0 [(_Bool)1] [(signed char)10])) : (1931879733))))))))));
    }
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 295539704)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))))));
}
