/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161423
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
    var_20 -= ((/* implicit */unsigned int) ((((_Bool) max((var_10), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (short)15374)), (5926699026272767323ULL))))) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] |= ((/* implicit */signed char) ((unsigned int) var_4));
                var_21 += ((/* implicit */short) max((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) 1719990333))));
                arr_5 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) min(((_Bool)1), (var_7))))))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned int) (_Bool)1)), (var_10))))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)6020))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)448)) ? (1832241578) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                            var_23 = ((/* implicit */unsigned long long int) (short)-19804);
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2368)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6035))) | (16889510502836934705ULL)))) ? ((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) (_Bool)1)))))))));
            }
        } 
    } 
}
