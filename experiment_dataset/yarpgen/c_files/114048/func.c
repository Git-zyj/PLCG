/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114048
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
    for (int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) 16318802523447967169ULL);
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) 201408386))));
                            var_15 |= ((/* implicit */signed char) max(((((-(18446744073709551615ULL))) >> (((((int) -201408386)) + (201408437))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_2] [12])) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0 - 2] [i_3])) - (56)))))), (((((/* implicit */_Bool) arr_8 [i_1] [(signed char)13] [(unsigned char)7] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_0 [i_2])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */long long int) arr_9 [i_0] [0] [i_0] [i_1])) : (arr_1 [(short)8] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2127941550261584458ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)23290)))))))) ? (((/* implicit */int) ((short) (+(2127941550261584474ULL))))) : (((((/* implicit */int) var_8)) >> (((((2890314027899127105LL) + (((/* implicit */long long int) 201408385)))) - (2890314028100535483LL)))))));
                var_17 = ((/* implicit */_Bool) arr_7 [(signed char)5] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 2248054459519588101LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 930361087))))) : (((/* implicit */int) var_3))));
}
