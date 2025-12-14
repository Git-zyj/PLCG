/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120952
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
    var_14 = ((int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39439))) ^ (1400640940U)))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) ((short) -297387888))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_16 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) 1124573412458389396ULL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (12867294642699910048ULL)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) 295636724);
            }
        } 
    } 
}
