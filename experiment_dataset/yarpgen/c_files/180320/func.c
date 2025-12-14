/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180320
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned char)18), ((unsigned char)251))))))) ? (max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_7)) ? (var_2) : (4013410018761757515ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (((8796076244992LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36728)))))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (1708552498504510540LL)))), (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    var_17 |= ((/* implicit */unsigned short) ((min((var_9), (var_2))) == (8192ULL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (+(var_3)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned short)120), (((/* implicit */unsigned short) var_4)))))))));
    }
}
