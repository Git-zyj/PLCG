/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176847
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -9223372036854775787LL)) ? (var_12) : (var_1))) ^ (var_2)))) ? (min((min((((/* implicit */unsigned int) (_Bool)1)), (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967278U)) && (((/* implicit */_Bool) 1819753330U))))))) : ((~(1488765190U)))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) -3638699810340398661LL);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7253466939047116839LL)) ? (min((var_8), (min((((/* implicit */long long int) arr_7 [i_4] [9U] [9U] [9U])), (var_7))))) : (min((var_10), (((/* implicit */long long int) min((var_2), (4294967266U))))))));
                                var_18 -= ((/* implicit */long long int) var_12);
                                var_19 = ((/* implicit */long long int) arr_13 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
