/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165700
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_12 -= ((/* implicit */unsigned short) var_1);
                                var_13 = ((/* implicit */int) ((signed char) max(((+(((/* implicit */int) var_6)))), ((~(-1201970421))))));
                                var_14 = ((/* implicit */signed char) 1201970421);
                            }
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(var_9))))))) <= (max((((unsigned int) 3011853073U)), (((/* implicit */unsigned int) (short)-26716))))));
                            var_16 -= ((/* implicit */int) ((_Bool) ((int) var_1)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_4))));
                var_18 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) arr_6 [i_0])) ? (-2362188803605056788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) -173126917);
    var_20 = ((/* implicit */signed char) ((unsigned long long int) (short)-8488));
}
