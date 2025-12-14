/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148616
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)235)))), (((int) (unsigned char)246))))) ? (((((/* implicit */int) var_6)) / ((+(((/* implicit */int) var_5)))))) : (max((((((/* implicit */int) (signed char)4)) / (var_11))), (((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)6))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_17 [(unsigned short)10] [(unsigned short)10] = ((short) ((((/* implicit */_Bool) arr_5 [i_4] [i_3 + 1] [i_0 + 3])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_3 + 2] [i_4] [i_1])) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_4]))));
                                arr_18 [(_Bool)0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))), (((unsigned long long int) arr_10 [i_0] [14LL] [i_3 + 2] [i_4]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
}
