/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183464
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
    var_19 = ((/* implicit */short) var_15);
    var_20 = ((/* implicit */unsigned char) 144115188075851776ULL);
    var_21 ^= ((/* implicit */unsigned long long int) ((short) min((18302628885633699839ULL), (((/* implicit */unsigned long long int) 4261998730U)))));
    var_22 = ((/* implicit */unsigned long long int) (unsigned short)53593);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_23 = ((((unsigned long long int) arr_0 [i_0 - 2])) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))));
                var_24 = ((/* implicit */signed char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1 - 3] [i_2] = ((/* implicit */signed char) var_3);
                            var_25 = min((min(((-(4261998732U))), (((/* implicit */unsigned int) (unsigned short)65535)))), ((-(32968583U))));
                        }
                    } 
                } 
            }
        } 
    } 
}
