/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12611
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1] [i_0]))))) * (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)88)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) > (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_1] [6LL]) % (((/* implicit */int) (short)-1))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_13)) & (((/* implicit */int) arr_6 [5ULL] [i_1] [5ULL] [i_1] [i_1]))))));
                            var_18 = ((/* implicit */unsigned short) (signed char)-52);
                            var_19 = ((/* implicit */long long int) (short)1);
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)65010)))))))))));
                var_21 |= ((/* implicit */signed char) (unsigned short)65535);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_10);
}
