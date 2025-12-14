/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172364
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
    var_17 = ((/* implicit */short) var_14);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1316)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (min((((/* implicit */unsigned int) var_3)), (var_9)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) == (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))), (max((arr_0 [i_0 - 1]), (((/* implicit */long long int) (_Bool)1))))));
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1294))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_6 [i_0] [i_0 - 1]))))));
                                arr_15 [i_0] [(short)10] [(short)10] [i_4] [(short)10] = ((/* implicit */long long int) ((_Bool) max((15U), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (var_11))))));
                            }
                        } 
                    } 
                    var_22 = (!(((/* implicit */_Bool) arr_2 [i_1])));
                    var_23 = ((((/* implicit */int) ((short) (-(1489124234707709177ULL))))) - (var_1));
                }
            } 
        } 
    } 
}
