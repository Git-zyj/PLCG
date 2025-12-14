/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182986
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
    var_20 += ((/* implicit */unsigned short) max((((((_Bool) var_5)) ? (((((/* implicit */unsigned long long int) var_16)) & (18411405817537652084ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((var_10) - (760643944)))))))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) var_11)), (7321309197577779521ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */_Bool) min((var_22), (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) min(((_Bool)1), (arr_5 [i_0] [i_0] [i_0])))))) & (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)20325)) ? (((/* implicit */long long int) ((arr_6 [i_3] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_3 + 1]))))) : (((8140382163861498339LL) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [5U] [i_3 - 1] [i_3 + 1])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
}
