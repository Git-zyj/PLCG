/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125382
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
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) -8821677071670239533LL))))))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) < (((((/* implicit */int) arr_1 [i_0] [i_1])) >> (0U))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), ((unsigned char)0)))), (((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) && (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_2 - 1] [i_0])))))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~((~(((/* implicit */int) var_10)))))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4294967295U)))) && (((/* implicit */_Bool) (unsigned char)20))))), (var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
