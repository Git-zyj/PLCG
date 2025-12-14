/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163717
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (arr_4 [i_0])))) % (((/* implicit */int) var_4)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2967663693U), (((/* implicit */unsigned int) min((var_4), (arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [8LL]))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_0 [i_0])), ((short)-13970)))))))));
                                arr_12 [4U] &= ((/* implicit */unsigned short) ((signed char) (short)32767));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_12);
    var_20 ^= ((/* implicit */unsigned long long int) var_10);
    var_21 = ((/* implicit */signed char) var_17);
}
