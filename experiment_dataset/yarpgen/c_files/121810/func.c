/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121810
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
    var_12 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1068510798U)) ? (1438143957U) : (2856823338U)))) ? (min((((/* implicit */unsigned int) var_0)), (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_7)))) ? (((var_5) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (var_11)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (var_4) : (var_1))) - (3832139417842872497LL)))))) && (((/* implicit */_Bool) max((var_0), (var_3))))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_11) : (var_11))) / ((~(((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            var_15 -= ((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) var_6))))))));
                            arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_5))))), (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3169))) : (0ULL))))), (max((max((var_11), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (var_1))))))));
                            var_16 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (var_1))) - (((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
