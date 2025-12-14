/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110782
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) min((min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */short) arr_1 [i_0])))), (((/* implicit */short) ((_Bool) (signed char)85)))));
                var_14 = ((/* implicit */unsigned int) (signed char)-106);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)100)))))) : (var_7)));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)41));
                arr_9 [i_2] = ((/* implicit */unsigned short) ((_Bool) ((int) arr_6 [i_3] [i_2])));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 456996322)))))));
            }
        } 
    } 
}
