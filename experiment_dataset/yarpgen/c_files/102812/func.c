/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102812
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (+((-(2147483647))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_14 [(signed char)2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_7 [(unsigned char)11]))) != (((/* implicit */int) var_6))));
                            arr_15 [i_0] [(_Bool)1] [i_2] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_1] [(unsigned short)1]) - (arr_12 [i_0] [i_1] [(unsigned char)4] [i_3 + 1] [i_2] [8U])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_12 [0LL] [10U] [i_2] [i_3 + 1] [(unsigned char)9] [0LL]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                            var_12 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((4294967288U), (((/* implicit */unsigned int) (signed char)-69))))), (min((((/* implicit */long long int) (unsigned short)42556)), (arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_3 + 2] [i_3 + 1] [(_Bool)1])))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) 3851476614U);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) (~(((/* implicit */int) var_4)))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) >> (((var_8) - (1842950538U)))))) ? (((/* implicit */int) (!(var_5)))) : (((/* implicit */int) ((unsigned char) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_1)) != (443490681U))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10))))), (3851476614U)))));
    var_16 *= ((/* implicit */unsigned short) var_6);
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_6))))))), (((443490681U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
}
