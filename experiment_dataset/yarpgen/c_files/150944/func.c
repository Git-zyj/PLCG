/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150944
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (((long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)1024))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((min((2649189540767874046ULL), (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1])))))) : (((((/* implicit */_Bool) ((var_8) - (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) max((1554299058), (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)16]))))) : (((((/* implicit */_Bool) (short)-32608)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1443)))))))));
                arr_8 [(unsigned char)16] = ((/* implicit */long long int) max((((/* implicit */int) ((short) 7400840874094099177LL))), (arr_2 [i_0] [i_1])));
            }
        } 
    } 
    var_12 = max((((/* implicit */long long int) (unsigned short)41346)), (-3671034927956461763LL));
}
