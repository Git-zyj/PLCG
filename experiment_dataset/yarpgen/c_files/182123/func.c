/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182123
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((max((max((((/* implicit */unsigned long long int) var_4)), (1152358554653425664ULL))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (unsigned short)35755))));
                            arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (-(((4294967283U) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            var_17 &= ((/* implicit */unsigned long long int) 1361210001);
                        }
                    } 
                } 
                var_18 &= ((/* implicit */unsigned char) (+((+((+(-1361210002)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min(((+((-(-1361209997))))), (((/* implicit */int) (unsigned short)35760))));
}
