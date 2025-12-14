/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140006
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 += min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((unsigned int) (_Bool)1))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) - (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 0U)))))));
                var_18 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (~(var_4))))))));
                var_19 = ((/* implicit */unsigned short) var_16);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] = min((min(((_Bool)1), ((_Bool)1))), (((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) ((_Bool) 65535U))))));
                var_20 *= ((/* implicit */unsigned short) ((_Bool) (unsigned short)0));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_2] [i_2 - 1] [i_2 - 1])), (var_13)))))))));
                var_22 *= ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 2479724032U)))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_6))));
                var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
