/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139459
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(((/* implicit */int) ((_Bool) (+(3490810542000671624ULL))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] &= ((/* implicit */short) max((((/* implicit */unsigned char) arr_10 [i_0] [i_0] [6ULL] [i_3])), (((unsigned char) (unsigned char)22))));
                            var_14 = ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)234)))) <= ((-(((/* implicit */int) (unsigned short)7105)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
