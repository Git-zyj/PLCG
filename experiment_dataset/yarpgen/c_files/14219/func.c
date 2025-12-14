/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14219
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (~((~(((/* implicit */int) ((1845548013) <= (((/* implicit */int) (short)27341)))))))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_2] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (((arr_8 [i_3] [i_1] [i_1] [i_1]) ? (855085270U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [23]))))))))))));
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */int) (((+(((/* implicit */int) ((short) arr_3 [i_1]))))) != (((/* implicit */int) ((5868417191244019470ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9827))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_6))) << ((((((~(((/* implicit */int) (unsigned char)43)))) + (68))) - (23)))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)9816)) || (((/* implicit */_Bool) (short)-9822)))))) : (((long long int) (+(((/* implicit */int) var_2)))))));
    var_16 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)9816)))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((signed char) (short)0)))));
    var_18 = ((/* implicit */unsigned char) var_2);
}
