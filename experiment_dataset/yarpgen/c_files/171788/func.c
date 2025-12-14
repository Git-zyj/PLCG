/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171788
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) var_9)));
                                var_10 -= ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_8))))) ? (((unsigned long long int) ((short) var_8))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_4] [8U] [8U] [i_0])))))));
                                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_0))))));
                                var_12 = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) (_Bool)0)), (var_9))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((20U) & (2197792748U)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) % (max((((/* implicit */unsigned long long int) (short)-1)), (288225978105200640ULL))))))));
                var_14 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) var_8)), (var_4)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((8364852623802414746ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((+(669832371U))))))));
}
