/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160895
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
    var_20 |= (-(2377480833612535613ULL));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10034768284919405382ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) arr_4 [i_0] [6ULL] [6ULL]))))) : (((((/* implicit */_Bool) var_16)) ? (arr_8 [i_0] [i_1]) : (((/* implicit */unsigned long long int) 1380174975U)))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_1 - 1] [i_2 - 1]), (arr_3 [i_1 - 1] [i_2 + 1])))) ^ ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_2 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7809)) ? (var_6) : (((/* implicit */unsigned long long int) 4294967295U))))) ? ((-(var_10))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))))) ? ((+(10461022167387545768ULL))) : (((/* implicit */unsigned long long int) (~((~(-320880631408522181LL))))))));
                var_24 = ((/* implicit */unsigned int) 7985721906322005851ULL);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((max((((/* implicit */unsigned int) var_5)), (var_11))) > (var_10)))))))));
}
