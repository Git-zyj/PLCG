/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169494
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
    var_18 |= ((/* implicit */_Bool) (unsigned short)60271);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_2] [i_2 - 1]), (arr_5 [i_0] [i_0] [i_2 - 1])))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1])))) : ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1]))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15928952220761869604ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (signed char)-34)))) : (((/* implicit */int) var_9))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (arr_2 [(_Bool)1])));
                    var_20 = (_Bool)1;
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 16; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) ((int) (_Bool)1))), (max((((/* implicit */long long int) (unsigned char)4)), (arr_14 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5]))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_13))))))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((_Bool) arr_4 [i_4 + 1] [i_4 - 3])))));
                            }
                        } 
                    } 
                }
                var_23 ^= ((/* implicit */unsigned int) arr_5 [16] [i_1] [16]);
            }
        } 
    } 
}
