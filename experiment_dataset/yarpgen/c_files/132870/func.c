/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132870
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0 + 2] [(_Bool)1] [i_2] = min(((short)-4924), ((short)-11361));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (7188966906564829371LL)))) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) var_4)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned long long int) arr_3 [i_4] [i_4] [i_4]);
                                arr_14 [i_0] [i_0] [(unsigned char)10] [11ULL] [i_0 - 2] = ((/* implicit */short) (unsigned char)172);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */int) (-(var_6)));
                }
            } 
        } 
    } 
    var_20 = ((_Bool) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)158)), (var_12))))));
}
