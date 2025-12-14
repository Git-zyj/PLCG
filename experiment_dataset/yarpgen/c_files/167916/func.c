/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167916
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
    var_14 = ((long long int) (!(((/* implicit */_Bool) var_0))));
    var_15 = ((/* implicit */long long int) 22ULL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((signed char) 22ULL))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551593ULL)))))) - (max((((/* implicit */long long int) var_3)), (-3090430641623850306LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-13570)) || ((!(((/* implicit */_Bool) var_13)))))))) * ((~(arr_8 [i_3]))))))));
                                var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 1]))) : (var_13))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (short)13569)))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */short) max((((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((signed char) (short)13560)))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) min((var_21), ((-(((/* implicit */int) ((unsigned short) arr_8 [0U])))))));
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_11));
    }
    var_22 = (~(8170944307498384428LL));
}
