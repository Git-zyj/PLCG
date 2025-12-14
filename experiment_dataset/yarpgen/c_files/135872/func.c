/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135872
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) 57796829)))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) -57796829)) ? (3581012053U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 13; i_4 += 1) 
            {
                {
                    var_18 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((var_12) ? (((/* implicit */int) (unsigned char)155)) : (-57796853))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) >= (664804946U))))))) * (((((/* implicit */_Bool) -57796856)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_16)))) : (((((/* implicit */_Bool) 1496979154U)) ? (2515203091U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned char) ((arr_13 [i_3] [i_3] [i_4]) == (-57796826)))))));
                    var_19 = ((/* implicit */int) (~(1373738147U)));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */int) (_Bool)1);
}
