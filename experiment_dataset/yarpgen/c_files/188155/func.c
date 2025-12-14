/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188155
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) ((short) (signed char)115))) - (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
    var_20 &= ((/* implicit */short) ((4095ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */int) arr_9 [i_2]);
                arr_14 [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
}
