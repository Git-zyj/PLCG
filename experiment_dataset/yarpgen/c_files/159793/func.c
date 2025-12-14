/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159793
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)6] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_7));
                arr_7 [i_0 + 1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 - 1]))))) ? (((/* implicit */int) min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))) : (((/* implicit */int) ((short) arr_2 [i_1 - 1])))));
                var_12 *= ((/* implicit */short) ((unsigned long long int) var_4));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) var_0))), (arr_4 [i_0 - 2] [i_0 - 2] [0U])))) ? (min((((/* implicit */int) arr_2 [i_0])), (max((var_3), (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_3])))))) : (((((/* implicit */_Bool) (short)25734)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31359))))));
                            var_13 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_12 [(_Bool)1] [i_1 - 1] [i_2 - 1] [i_3])) > (((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 1] [i_1] [(_Bool)1])))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2])) * (((/* implicit */int) arr_8 [(signed char)0] [i_1] [i_2 - 1] [i_3]))))))) == (((/* implicit */unsigned long long int) ((var_3) >> (((/* implicit */int) arr_3 [i_0])))))));
                            var_14 |= ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) min(((signed char)-65), (((/* implicit */signed char) arr_3 [(unsigned char)6]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned char) min((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) var_8))));
}
