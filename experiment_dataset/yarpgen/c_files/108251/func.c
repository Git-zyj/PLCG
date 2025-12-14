/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108251
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-112))))), (((unsigned short) arr_1 [i_1 - 1] [i_1 + 1]))));
                var_15 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))) + (((/* implicit */int) max((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 + 1]))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) min((10679436278212513603ULL), (((/* implicit */unsigned long long int) (signed char)-103)))))) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))))) - (11211)))));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((long long int) arr_4 [i_2] [i_3]));
                arr_13 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) : (var_0)))), (max((var_13), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_3])))))))));
            }
        } 
    } 
}
