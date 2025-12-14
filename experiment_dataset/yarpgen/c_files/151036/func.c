/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151036
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((signed char) 1152921504606846975ULL))))), (((int) ((var_0) >> (((5184982702453298308ULL) - (5184982702453298286ULL)))))))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)6144)))) & ((+(arr_0 [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (short)-19507);
                    var_14 = ((/* implicit */long long int) arr_1 [i_2]);
                }
            } 
        } 
    } 
}
