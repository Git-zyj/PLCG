/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139803
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)-5875))) ? (((((((/* implicit */int) (unsigned short)51873)) & (-1))) << ((((~(((/* implicit */int) (unsigned short)16383)))) + (16385))))) : ((-(((/* implicit */int) ((_Bool) 933340826U))))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */long long int) min((max((11U), (2235379328U))), (((/* implicit */unsigned int) ((arr_11 [i_0] [i_0]) >= (arr_11 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-14843)), (2235379328U)))) ? (((/* implicit */long long int) arr_1 [i_0])) : (min((((/* implicit */long long int) arr_13 [i_0] [i_1 - 1] [i_2])), (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [(short)9] [i_1]))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_1))))) * (min((((/* implicit */unsigned int) var_7)), (var_8))))), (((/* implicit */unsigned int) ((var_7) || (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_8))))))));
    var_14 = var_2;
    var_15 = ((/* implicit */long long int) min((var_15), (((var_6) ? (((((/* implicit */_Bool) -538813138)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)-26466))))))))))));
}
