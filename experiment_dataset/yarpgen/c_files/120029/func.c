/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120029
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)2] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0]);
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((-4238319936187422839LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_1]))))))))));
                var_17 = ((/* implicit */short) max((((((1163030768) % (var_8))) + (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) max(((unsigned short)33118), (((/* implicit */unsigned short) (_Bool)1)))))));
                arr_9 [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15)) / (((/* implicit */int) arr_0 [i_0 - 2])))))));
                var_18 ^= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)3]))) : (14787930558632791658ULL))))) > (((/* implicit */unsigned long long int) ((var_4) ? (max((((/* implicit */long long int) 1642027152)), (-4238319936187422839LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4238319936187422839LL)))))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((unsigned short)2047), (((/* implicit */unsigned short) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_14)) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32219)))))))));
}
