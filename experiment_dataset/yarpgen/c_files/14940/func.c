/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14940
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10508897521254579524ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((var_0), (var_0)))))) : (min((((var_4) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((_Bool) var_9)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_5)) : (var_10))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((_Bool) (_Bool)1)), (((_Bool) var_8)))))));
                            var_13 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (212531726194436527ULL)))) ? ((+(5832063607436047569ULL))) : (arr_0 [i_0] [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_15 = ((/* implicit */signed char) ((var_1) ? (max((((arr_6 [i_0] [i_1] [i_4] [i_1] [i_5 + 2]) ^ (arr_7 [i_0] [i_1] [i_1] [i_5 - 2] [i_4] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12108163473552963076ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) : (arr_12 [i_1] [i_1] [i_1])));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(4294967295U))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
