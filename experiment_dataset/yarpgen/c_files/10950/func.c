/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10950
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
    var_10 += ((/* implicit */signed char) var_1);
    var_11 = ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (arr_5 [i_0] [i_0] [i_0])))) ? (((arr_5 [i_0] [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3])))))))))))));
                            var_15 = ((/* implicit */signed char) ((long long int) max((arr_10 [i_0] [i_0] [i_2] [i_2] [i_3]), (arr_10 [i_0] [i_1] [i_0] [i_2] [i_3]))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_4)))) << (((((arr_11 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]) << (((/* implicit */int) arr_8 [i_1] [i_0] [i_1])))) - (2440626858U))))))));
                            arr_13 [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)65509);
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]);
            }
        } 
    } 
}
