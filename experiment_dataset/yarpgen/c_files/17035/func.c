/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17035
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] [8U] [8U] = ((/* implicit */_Bool) min(((+(max((18ULL), (((/* implicit */unsigned long long int) (unsigned char)215)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned char)240), (((/* implicit */unsigned char) var_1))))), (((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))));
                var_13 ^= ((/* implicit */signed char) arr_1 [i_0 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_2])) ? (((/* implicit */int) arr_10 [(signed char)20] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_2 + 3] [i_3]))))) ? (((/* implicit */int) max((var_5), (arr_10 [i_2] [i_3])))) : ((+(((/* implicit */int) arr_10 [i_2 + 2] [i_3]))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) != (((/* implicit */int) arr_11 [10U]))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) || (((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) arr_9 [i_3] [i_2 + 3])) ^ (((/* implicit */int) arr_8 [i_3])))))))))));
            }
        } 
    } 
}
