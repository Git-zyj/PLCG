/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167770
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
    var_10 = ((/* implicit */long long int) min((min((((/* implicit */int) ((_Bool) var_0))), (min((16), (1436031400))))), (((/* implicit */int) max((((_Bool) 1436031400)), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 5897982588189350447ULL)))))))));
    var_11 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) arr_1 [16ULL]);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((int) min(((short)-26612), (((/* implicit */short) arr_2 [i_0] [i_0 + 1]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_14 += ((/* implicit */short) ((signed char) max((12275049853143939659ULL), (((/* implicit */unsigned long long int) 7)))));
        arr_5 [i_1] [i_1] = 1;
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) (short)16481))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-79)) ^ (-19))))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-83))))) : (((/* implicit */int) ((_Bool) arr_1 [(unsigned char)9])))));
        var_16 = ((/* implicit */unsigned int) max(((unsigned char)10), (((/* implicit */unsigned char) (_Bool)0))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) 201326592);
        var_17 = ((/* implicit */long long int) max((((18446744073709551601ULL) << (((var_6) - (1022410704U))))), (min((arr_7 [i_2] [i_2]), (14558995229230408935ULL)))));
        arr_9 [i_2] [i_2] = min((((((/* implicit */_Bool) 12275049853143939661ULL)) ? (arr_7 [i_2] [3ULL]) : (96517849155743143ULL))), (((/* implicit */unsigned long long int) ((unsigned short) 3030170239484062208LL))));
    }
}
