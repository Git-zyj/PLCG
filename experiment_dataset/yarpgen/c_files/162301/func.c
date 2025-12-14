/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162301
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) var_9)) : (-8388608)))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((long long int) 0))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_0] = ((((/* implicit */_Bool) ((int) (short)-20983))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-20983)))))))) : (((/* implicit */int) (short)20983)));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((+(-410448306))) < (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)20986)), (var_1))))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (max((((/* implicit */int) var_8)), ((+((+(((/* implicit */int) var_8))))))))));
}
