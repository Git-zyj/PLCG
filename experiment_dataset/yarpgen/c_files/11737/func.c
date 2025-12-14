/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11737
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
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1])) == (((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-30518)) : (((/* implicit */int) (short)20929))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))))));
                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18372)) ? (3144915433454209798ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (var_11) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))), (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) (unsigned short)34898)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)2652)) || (((/* implicit */_Bool) (signed char)29))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1]))) % (((unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) arr_5 [i_2]))));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max(((short)30517), (((/* implicit */short) arr_3 [i_2] [i_2 + 2]))));
                arr_14 [i_2] [i_2] = arr_0 [i_2 + 2];
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) var_12)), (min((min((((/* implicit */long long int) var_7)), (var_9))), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_9)))))));
    var_20 = ((/* implicit */unsigned char) var_4);
}
