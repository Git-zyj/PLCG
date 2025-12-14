/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121998
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22098))))) ? ((+(((/* implicit */int) min((((/* implicit */short) var_5)), ((short)4861)))))) : (((/* implicit */int) (signed char)-3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 2754058891U))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : ((~((+(var_3)))))));
                                var_22 = var_5;
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) ((unsigned int) arr_0 [i_0 - 3]));
                arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83)))))) * (((/* implicit */int) min(((unsigned char)166), (((/* implicit */unsigned char) arr_5 [i_0] [21U] [i_0 - 1])))))));
                var_24 = ((/* implicit */short) -6096835625930712916LL);
            }
        } 
    } 
}
