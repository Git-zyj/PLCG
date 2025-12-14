/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179421
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
    var_13 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13662)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13662))) : (0LL))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_1] [i_0] [i_3] [(_Bool)1] = arr_3 [i_0];
                                var_14 &= ((/* implicit */unsigned int) max((((long long int) ((unsigned int) arr_1 [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51880)) ? (1862847770U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) (unsigned short)13664);
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_6))))))) & (((((/* implicit */_Bool) min((6417629967272663316LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) var_9)))));
}
