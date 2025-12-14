/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168630
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
    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_0)), (var_6))), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_5))))))))) * (min((((var_11) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_4))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((var_9) + (2147483647))) >> (((((/* implicit */int) var_0)) - (93))))) - (min((((/* implicit */int) var_4)), (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) max((((/* implicit */unsigned int) var_11)), (var_10))))));
    var_14 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (((var_4) ? (((/* implicit */unsigned int) ((int) var_5))) : (((unsigned int) var_9))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */int) ((short) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_3)))))), (((((/* implicit */int) ((_Bool) var_9))) * (((((/* implicit */int) var_4)) * (((/* implicit */int) var_5)))))))))));
                    arr_7 [i_0] [i_0] [i_2 + 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_2)))))) / (((/* implicit */int) ((signed char) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_11))))))));
                    var_16 = ((/* implicit */signed char) ((unsigned int) var_9));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 += ((unsigned long long int) 1361438169U);
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
