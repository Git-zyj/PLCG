/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130456
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) var_12));
    var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((var_12), (((/* implicit */unsigned char) (_Bool)1)))), (((unsigned char) var_7)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (signed char)118);
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_12);
                                var_21 = ((int) ((((/* implicit */_Bool) ((arr_7 [i_3] [i_1] [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0)))) ? (min((((/* implicit */int) (signed char)5)), (var_16))) : ((+(((/* implicit */int) arr_11 [i_3] [i_3] [5U] [i_3]))))));
                                arr_14 [i_0] [i_0] [i_3] [3LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */int) ((_Bool) max((var_9), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_5)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
