/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157732
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
    var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (1223957339668693642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */unsigned char) (-((~(min((((/* implicit */int) (_Bool)1)), (819432581)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) ((unsigned char) (~((-(((/* implicit */int) arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(max(((-(arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]))), (((/* implicit */long long int) arr_0 [i_0])))))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20316))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (3492154721223889862ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_1)))))), (max((((/* implicit */unsigned long long int) var_3)), ((-(var_16)))))))));
}
