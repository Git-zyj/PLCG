/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12379
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [13LL] [13LL] [i_0] = ((/* implicit */unsigned short) -670445358701753531LL);
                arr_7 [i_0] [15ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) - (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)15134))) ? ((+(-9136929058341655038LL))) : ((-(arr_3 [i_0]))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */int) arr_5 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                arr_15 [i_2] &= ((/* implicit */long long int) (-(((arr_1 [i_3]) - (((((/* implicit */_Bool) 13395231860703660775ULL)) ? (((/* implicit */unsigned long long int) -670445358701753523LL)) : (var_9)))))));
                arr_16 [(unsigned short)0] [i_3] = ((/* implicit */signed char) min((((unsigned long long int) arr_2 [i_3])), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (-670445358701753531LL) : (-9136929058341655058LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27813))) : (((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (-9136929058341655048LL) : (((/* implicit */long long int) arr_12 [i_2])))))) << (((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_12 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27815)))))))) - (1961909193U)))));
                arr_18 [i_3] [i_2] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -9136929058341655048LL))))), (arr_10 [i_2] [9ULL]))));
            }
        } 
    } 
}
