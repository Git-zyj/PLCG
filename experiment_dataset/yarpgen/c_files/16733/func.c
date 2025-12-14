/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16733
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
    var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    var_21 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) | (13302789582487060800ULL)))) ? (arr_3 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_3))) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])) - (106)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (max((3344604649U), (((/* implicit */unsigned int) (short)-4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1472525045U)) || ((_Bool)1)))))))));
                            arr_9 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((576459652791795712ULL) > (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (1472525042U)))))), (((((/* implicit */long long int) 4294967295U)) + (min((((/* implicit */long long int) var_12)), (var_19)))))));
                        }
                    } 
                } 
                var_23 &= ((/* implicit */int) (unsigned short)25619);
                arr_10 [i_1] [i_0] = ((/* implicit */short) var_3);
            }
        } 
    } 
}
