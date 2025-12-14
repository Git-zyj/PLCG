/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131464
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_2)), (var_4))), ((-(var_4)))))), (var_7))))));
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_7)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_7)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)61868))))), (min((((/* implicit */int) var_8)), (var_6)))));
                            arr_10 [i_3] [8ULL] [(_Bool)1] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))))))) && ((!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_3)))))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((max((var_9), (var_9))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) > (var_7)))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) var_3)) << (((var_0) - (4299750212873850657LL))))) >> (((var_7) - (2112501312813662287ULL)))))), (min(((+(var_0))), (max((var_1), (((/* implicit */long long int) var_2)))))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_8)))))) * (((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
}
