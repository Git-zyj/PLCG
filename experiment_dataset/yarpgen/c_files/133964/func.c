/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133964
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_4] [i_1] [8U] = ((/* implicit */unsigned int) -3900829805118713448LL);
                                var_11 = ((/* implicit */unsigned char) -837669437);
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((837669429) & (((/* implicit */int) (short)32747))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-23665))))) ? (((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) >> (((837669436) - (837669416))))) : (((((/* implicit */int) var_7)) / (((((/* implicit */int) (unsigned char)131)) * (((/* implicit */int) (short)-32269))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) (short)-19178);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)23028)))));
    var_15 &= (!(((/* implicit */_Bool) var_1)));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)181))))))) || (((/* implicit */_Bool) max((max((var_2), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((-837669426) / (((/* implicit */int) (unsigned char)79)))))))))))));
}
