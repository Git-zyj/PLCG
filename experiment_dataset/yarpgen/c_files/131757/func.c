/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131757
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) var_1);
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 3] [i_4 + 3] = var_14;
                                var_17 = ((/* implicit */short) (!((_Bool)0)));
                                arr_15 [i_0] [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_18 &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-32765))))) - ((+(27LL)))));
                            }
                        } 
                    } 
                    arr_21 [i_2 - 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) : (((/* implicit */int) ((min(((_Bool)1), (arr_0 [i_2]))) || ((!((_Bool)0))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((((/* implicit */long long int) min((((short) 27LL)), (((/* implicit */short) var_2))))), (var_9)));
    var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_10))))))));
}
