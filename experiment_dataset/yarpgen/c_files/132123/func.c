/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132123
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) var_12);
                var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))) && (((/* implicit */_Bool) arr_0 [i_0])))), ((!(((((/* implicit */_Bool) (signed char)112)) || (((/* implicit */_Bool) 618187214U))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((int) 478249253787030902LL))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (966134120U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)7168))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) arr_8 [i_0] [i_2]);
                                var_17 = ((/* implicit */long long int) var_7);
                                var_18 = ((/* implicit */unsigned short) max((var_18), ((unsigned short)40276)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (((((/* implicit */_Bool) (unsigned short)40291)) ? (966134120U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))) + (((((int) -2053447441)) & ((+(((/* implicit */int) (signed char)49))))))));
    var_20 = ((/* implicit */unsigned int) var_8);
}
