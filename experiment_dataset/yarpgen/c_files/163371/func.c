/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163371
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) var_9);
                var_16 += ((/* implicit */unsigned char) var_4);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned char) (~(5192276537523081037ULL)))))));
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) -2147483640)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)4] [(unsigned short)10])) ? (144115188075855871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))))))), (((short) 13051724886953475513ULL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                var_19 = arr_6 [i_2] [i_2];
                var_20 = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
}
