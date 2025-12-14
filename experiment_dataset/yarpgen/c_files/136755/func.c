/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136755
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
    var_15 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) 2547568911U)))) ? (((/* implicit */int) var_13)) : ((~(var_0))))))));
    var_16 &= ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (min((((/* implicit */unsigned long long int) var_0)), (var_10)))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_7))))) ? (var_8) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) % (((/* implicit */unsigned long long int) var_0))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))));
                var_19 = ((/* implicit */unsigned char) ((_Bool) (-(((((/* implicit */_Bool) -1737465699)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)26)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (-((-((~(((/* implicit */int) var_2))))))));
                                arr_14 [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_3))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) var_2)), (min(((short)18114), ((short)2805))))))));
                                arr_16 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(((int) ((var_8) == (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
