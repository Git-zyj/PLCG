/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18613
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
    var_17 = ((/* implicit */long long int) var_10);
    var_18 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (unsigned short)65504)))) << (((/* implicit */int) ((signed char) 5U))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)20114)) : (((/* implicit */int) var_16))))), ((+(var_9))))), (((/* implicit */long long int) max((max((4294967290U), (6U))), (((/* implicit */unsigned int) ((signed char) 1756152087))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_2] [i_0] [3ULL] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max(((-(4294967290U))), (((((/* implicit */_Bool) -5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30719))) : (1176992722U)))))) / (((((/* implicit */_Bool) max((((/* implicit */long long int) 547127443U)), (-4749730931116731629LL)))) ? (var_9) : (((/* implicit */long long int) var_0))))));
                                arr_11 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) (-((~(min((var_0), (((/* implicit */unsigned int) arr_4 [i_1] [2U] [i_0] [i_1]))))))));
                                var_21 = ((/* implicit */_Bool) arr_7 [(short)7] [i_1] [i_1] [i_4] [0U] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */short) var_0);
}
