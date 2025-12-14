/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146916
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
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */unsigned long long int) max((((var_6) * (((/* implicit */long long int) ((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) var_6)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -3395022304851278892LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)21749)))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */int) (short)-256)), ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_7)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (short)13543))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_1]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (short)32767);
}
