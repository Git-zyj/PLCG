/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120232
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (short)-2842))));
    var_14 = (~((+((+(7U))))));
    var_15 = ((/* implicit */int) (short)-28795);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21921))) : ((+(arr_7 [i_2 + 1] [i_2] [i_2] [i_1])))));
                                var_17 |= ((/* implicit */long long int) max((((_Bool) (short)-28795)), (((((/* implicit */long long int) ((/* implicit */int) (short)28794))) < (min((var_0), (((/* implicit */long long int) arr_7 [i_0] [i_2] [i_3] [i_2]))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) min((arr_0 [i_4 + 1]), (((/* implicit */long long int) var_5))));
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) (unsigned short)2989))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-28797)), (4229674235U)))) : (max((var_9), (((/* implicit */unsigned long long int) (unsigned short)62546)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)25368))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)44))));
                arr_18 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((long long int) (unsigned short)31))) ? (((/* implicit */unsigned long long int) -7958585888983870268LL)) : (max((((/* implicit */unsigned long long int) var_2)), (1635436254620493097ULL))))), (((/* implicit */unsigned long long int) 65293060U))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_0])), (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (short)24956))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_6);
}
