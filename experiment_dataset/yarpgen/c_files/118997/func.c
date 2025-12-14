/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118997
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (var_9)))))) ? (((int) (!(((/* implicit */_Bool) var_3))))) : (var_3)));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_8))))), (max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned short)55131))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_10 += ((/* implicit */long long int) (((((~(((/* implicit */int) max(((unsigned short)4362), ((unsigned short)4362)))))) + (2147483647))) << (((((/* implicit */int) var_8)) + (122)))));
        var_11 = (+(max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61173))) >= (1099511627775LL)))), (((((/* implicit */_Bool) -1099511627751LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152)))))));
    }
    var_12 = ((/* implicit */unsigned char) ((short) var_7));
}
