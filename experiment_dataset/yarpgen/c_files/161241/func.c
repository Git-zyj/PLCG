/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161241
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
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) max(((unsigned short)58459), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_6)))))), (max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)55))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned int) var_11);
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_3 [i_0])))) % ((~(((/* implicit */int) (short)7721))))))))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((4615986544953902807LL), (7134868435906757035LL))) << (((880201913U) - (880201913U)))));
            }
        } 
    } 
}
