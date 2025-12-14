/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10949
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(arr_2 [i_0]))))));
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])) : (20ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_1 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 3; i_3 < 18; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (~(20ULL)));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-((+(arr_11 [i_6] [i_3 - 3] [i_3 - 3]))))))));
                        var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_5])) ? (18ULL) : (((/* implicit */unsigned long long int) arr_13 [i_6 - 1] [i_5] [i_4] [i_4] [i_4] [1ULL])))), (((/* implicit */unsigned long long int) (unsigned short)19844))));
                    }
                } 
            } 
        } 
    }
}
