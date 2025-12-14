/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118197
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((-7469206850240167527LL) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (7469206850240167536LL))) & (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)63))))) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29559))) : (5834150066866053892LL))) : ((+(-412317693248948517LL)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1 + 2] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) ((-7469206850240167527LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)47)))))), ((+(14720263871257699053ULL)))))));
                                var_12 *= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12354677537490521580ULL)) ? (1048575LL) : (var_2))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((-8726332862471456507LL), (var_10)))) ? (min((arr_13 [10LL] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)22752)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_0]))))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)28434)))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (var_0) : (((/* implicit */unsigned long long int) var_10))))))))))));
}
