/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16268
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(6660163244452645870LL)))) ? (min((2588923198461595849ULL), (((/* implicit */unsigned long long int) (short)-1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((var_0) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_3), ((-(min((((/* implicit */unsigned int) var_9)), (var_3)))))));
                                arr_16 [i_1] [i_1] [0ULL] [i_3] [i_0] [0ULL] [i_3] = min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (var_2)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (var_9)))))))), (var_4));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (var_8))))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 14; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_0] = (~(((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))));
                            arr_24 [i_0] [i_0] [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_2);
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (((unsigned char) var_7))))))))));
                            var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_9)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
