/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14937
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (var_14)))), (((((/* implicit */_Bool) 8109249127440077439ULL)) ? (var_6) : (-1)))))) - (max((((/* implicit */long long int) 1024005884U)), (var_5)))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(1051214070U)))) ? (((/* implicit */long long int) max((-2147483625), (((/* implicit */int) max(((unsigned short)60234), (((/* implicit */unsigned short) (short)8995)))))))) : (((max((-7017226566240957350LL), (((/* implicit */long long int) (unsigned short)15921)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3))))))));
                arr_7 [10ULL] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65535)))) ^ (((18395502964537603465ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
            }
        } 
    } 
    var_17 = max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5168))) : (var_15))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10))));
}
