/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122731
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = var_13;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) min((var_5), (arr_3 [i_0] [i_1] [i_2])))) - (var_10)));
                            var_20 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_3])))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_5))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((_Bool) var_6)))));
            }
        } 
    } 
    var_23 -= ((/* implicit */_Bool) (~(min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45528))) <= (var_14)))), (var_15)))));
    var_24 = ((/* implicit */unsigned char) var_4);
    var_25 = ((/* implicit */_Bool) min((((long long int) ((_Bool) -8366178373827664667LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (1265250319U) : (((/* implicit */unsigned int) var_17)))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-3125)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_12 [i_5])))))) : (((/* implicit */int) var_3))));
                arr_16 [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_2)))));
                var_27 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (((arr_15 [i_5] [(unsigned short)14]) | (((/* implicit */unsigned int) var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_14)) : (var_4)))) ? (((long long int) 18)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)104)))))));
            }
        } 
    } 
}
