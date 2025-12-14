/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130012
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
    var_10 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((16123409511086803414ULL) == (2323334562622748200ULL)));
                    var_12 *= ((/* implicit */unsigned int) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)16] [i_1] [(unsigned char)16])))));
                    var_13 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26784))) % (17970102982275837484ULL)));
                }
            } 
        } 
    } 
}
