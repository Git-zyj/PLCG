/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144816
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
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)10] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(max((arr_1 [i_0]), (((/* implicit */int) (unsigned short)60857))))))) || (((/* implicit */_Bool) ((-7147034652911187544LL) ^ (((/* implicit */long long int) -282607393)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_4] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (282607409)));
                                arr_15 [i_1] = ((/* implicit */int) ((((((/* implicit */long long int) 282607413)) & (max((arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]), (2057307117063188034LL))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_0])), (229382134U)))) ? (arr_6 [20LL] [i_2] [i_1] [i_0]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))))))));
                                arr_16 [i_1] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_16)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
