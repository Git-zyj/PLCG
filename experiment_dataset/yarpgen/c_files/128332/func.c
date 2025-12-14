/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128332
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_3))));
    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (max((((((/* implicit */_Bool) (signed char)56)) ? (9875265511427589329ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7095))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)56)), (var_8)))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)32767)))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2147483636))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (signed char)-94)) : (-1202333857)))) : ((-(var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(((unsigned long long int) var_1))))));
    var_17 = ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (signed char)-65)))))) / (131941395333120LL))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)45))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (signed char)45);
        var_18 = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)195)))) > (((/* implicit */int) var_2))));
        var_19 += ((/* implicit */unsigned long long int) var_11);
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) arr_2 [i_1]);
        var_20 = ((/* implicit */short) 3444746253872888586LL);
        arr_7 [i_1] = ((/* implicit */signed char) var_1);
    }
    for (int i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        arr_12 [i_2] = (+(((/* implicit */int) var_2)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-79)) <= (((/* implicit */int) (signed char)76))));
    }
}
