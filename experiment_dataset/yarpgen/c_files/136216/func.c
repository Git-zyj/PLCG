/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136216
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
    var_17 = ((/* implicit */unsigned short) (+(max((min((var_7), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_10))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned long long int) var_2);
                                var_19 = ((/* implicit */unsigned short) 284642057);
                                var_20 += ((/* implicit */unsigned char) (unsigned short)16546);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) arr_3 [i_0] [(short)5] [i_0]);
                arr_15 [i_0] [i_1] [i_0] = ((_Bool) (((_Bool)1) ? (arr_3 [i_0 - 3] [i_1 - 1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((17200809906734371469ULL), (16893072299269973534ULL)));
    var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) var_3)) : (((1360107180U) << (((((/* implicit */int) (signed char)127)) - (116)))))))));
}
