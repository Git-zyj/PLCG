/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168479
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (4375540806820572352LL)))), ((unsigned short)9928))))));
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (~(((/* implicit */int) (short)0)));
                var_20 = ((/* implicit */_Bool) var_9);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62772))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) 32767LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
