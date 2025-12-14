/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117606
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
    var_20 = ((/* implicit */unsigned char) min((min((max((((/* implicit */long long int) (unsigned short)20289)), (3915506671870817010LL))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)127)), ((short)-15450)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_16), (var_3)))), (max((((/* implicit */unsigned int) (unsigned short)20289)), (var_1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((-1LL), (((/* implicit */long long int) 2760471912U))));
                    var_22 = max((max((max((var_9), (((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [i_1 + 3] [(unsigned char)6])))), (min((var_10), (((/* implicit */unsigned long long int) (unsigned short)15041)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */short) arr_5 [10ULL])), ((short)16383)))), (max((((/* implicit */long long int) var_4)), (var_12)))))));
                }
            } 
        } 
    } 
}
