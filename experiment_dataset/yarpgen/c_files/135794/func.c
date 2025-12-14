/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135794
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 |= ((/* implicit */signed char) var_19);
                    var_21 = ((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_4 [17ULL] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) >= (arr_1 [i_0] [i_1]))))))) | (arr_1 [i_0] [i_1]));
                    var_22 |= ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((arr_2 [i_3 + 3]) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))) + (min((((/* implicit */unsigned long long int) arr_8 [i_3] [i_1] [i_0])), (arr_7 [i_0 + 1] [i_1] [i_1] [i_1]))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((short) ((signed char) ((((/* implicit */_Bool) -1877244353606082765LL)) ? (-690843931) : (((/* implicit */int) (unsigned short)0)))))))));
                                var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_9 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [i_0 + 1] [i_3] [i_4]))) ? (((/* implicit */int) ((_Bool) arr_7 [i_2] [i_3] [(short)0] [i_3 + 2]))) : (((/* implicit */int) ((_Bool) arr_2 [i_0 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (944427254336979472LL))) == ((-(var_19)))))), ((-(((/* implicit */int) var_13))))));
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((-1877244353606082765LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_5))))))));
}
