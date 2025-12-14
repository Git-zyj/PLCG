/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153456
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_2 [i_1 - 3]))))));
                var_13 = ((/* implicit */int) (~(max((max((((/* implicit */unsigned long long int) arr_0 [(unsigned short)2])), (4466612656555747976ULL))), (((/* implicit */unsigned long long int) var_3))))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1770655621U)), (max((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (arr_1 [i_1 - 1] [i_0])))));
                var_15 &= ((((643255788354089978LL) << (((1073741823ULL) - (1073741820ULL))))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) arr_5 [i_1] [(_Bool)1] [i_1 - 2]))))));
            }
        } 
    } 
    var_16 |= ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (unsigned short)21459)) ? (-672625012) : (((/* implicit */int) (short)-30956))))))) || (((/* implicit */_Bool) var_4)));
    var_17 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((signed char) 643255788354089978LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44080)))))))));
    var_18 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)30955)))) / (min((var_11), (((/* implicit */unsigned long long int) var_2))))))));
}
