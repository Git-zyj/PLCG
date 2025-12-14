/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179567
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) -1191366449);
                arr_7 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) (signed char)94))))) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((unsigned char) (_Bool)0))))) : (((/* implicit */int) arr_2 [i_1]))));
                arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_0)))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min(((unsigned short)30928), (((/* implicit */unsigned short) (signed char)-94)))))));
                arr_9 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                arr_10 [i_1] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_12 [i_3])), (arr_11 [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2])) + (((/* implicit */int) (signed char)-94))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (2471069286409961236ULL))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(arr_16 [i_2 - 2]))))));
                    arr_19 [i_3] [i_4] = arr_18 [i_2] [9LL] [9LL] [i_2];
                }
            }
        } 
    } 
}
