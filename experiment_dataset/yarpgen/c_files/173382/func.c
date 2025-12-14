/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173382
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) min(((signed char)8), ((signed char)6)))))))));
                                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                                var_19 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)7461))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4 - 3] = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (arr_0 [i_3]))) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) 6879395266354946430ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29012))) : (8384483853994258479ULL))) : (((/* implicit */unsigned long long int) 4611686018427387903LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((int) (unsigned short)58084))) ? (var_10) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) (short)23497))))) | (var_10)))));
}
