/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105934
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
    var_19 = var_18;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_20 -= ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) arr_5 [i_0])))));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) > (583351517856269820ULL)));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6930))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)6] [(unsigned short)6] [i_0]))) + (arr_4 [i_1] [i_1] [9ULL])))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))), (((17863392555853281796ULL) * (arr_4 [i_0] [i_0] [i_1]))))))));
                var_24 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_10 [i_0])) ^ (((/* implicit */int) var_10)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_4))));
}
