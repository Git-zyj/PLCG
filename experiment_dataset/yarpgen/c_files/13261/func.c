/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13261
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((_Bool) var_2))))));
                var_16 = ((/* implicit */signed char) max((min((((arr_1 [i_1]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [10U]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (arr_2 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_8);
                var_18 = ((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3 + 2]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (12U)))) ? (((/* implicit */unsigned long long int) -1934407884)) : (((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_3] [(signed char)3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_20 = (+((-(var_1))));
    var_21 ^= ((/* implicit */unsigned char) var_5);
}
