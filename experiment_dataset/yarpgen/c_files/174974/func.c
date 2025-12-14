/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174974
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
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((arr_5 [i_3] [i_2 - 1] [i_1 + 1]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1 - 2] [i_2 - 1]))) ? (((/* implicit */int) ((arr_5 [(unsigned short)1] [(unsigned short)1] [i_2 - 1]) || (((/* implicit */_Bool) arr_1 [i_1]))))) : (((/* implicit */int) arr_7 [i_1 - 2])))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_0] [i_0] [i_0]))))), (min(((unsigned short)8111), ((unsigned short)65532))))))));
                            var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) % (((unsigned long long int) arr_3 [i_1] [i_3])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)7);
                var_20 -= ((((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 + 1])) % (((/* implicit */int) arr_7 [i_1 - 1])))) * (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 2] [(unsigned short)11])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0])))));
            }
        } 
    } 
}
