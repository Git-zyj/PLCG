/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11646
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(2108240992U)))) + (var_9)))) ? (var_0) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56735))) : (max((((/* implicit */long long int) var_5)), (var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [8LL] [i_2] |= ((/* implicit */long long int) max((min(((-2147483647 - 1)), ((-(((/* implicit */int) arr_10 [i_2] [i_2])))))), (((((((/* implicit */_Bool) (unsigned short)2348)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)135)))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (45913)))))));
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [12U] [i_3]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) * (((/* implicit */int) (unsigned short)65535))));
                arr_12 [i_1] = ((/* implicit */unsigned int) ((((unsigned long long int) (unsigned char)129)) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_10)) > (arr_0 [i_0]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))));
}
