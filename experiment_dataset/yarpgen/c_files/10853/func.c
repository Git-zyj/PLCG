/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10853
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
    var_10 = ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */short) (unsigned short)65535);
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (3558540058354446550LL)))) && (((/* implicit */_Bool) 2032U)))) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned short)65516))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) (unsigned short)27)))), (((((/* implicit */_Bool) (unsigned short)27)) || (((/* implicit */_Bool) (unsigned short)14383)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 2] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) -644851241)) & (var_6))), (((/* implicit */long long int) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                                var_14 *= ((/* implicit */_Bool) (unsigned short)14371);
                                var_15 = ((/* implicit */short) max((min((((((/* implicit */unsigned int) var_4)) - (343563145U))), (3545313435U))), (((/* implicit */unsigned int) var_7))));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */short) max((644851240), (((((/* implicit */int) var_7)) / (var_5)))));
                }
            } 
        } 
    } 
}
