/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127637
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)255))))), ((~(arr_6 [i_0] [i_3] [i_3]))))));
                                arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-31)))))))) << ((((-(((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_4 [i_4] [i_4] [i_2])))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [0U] [i_3] = ((/* implicit */short) arr_8 [i_0 - 1] [(unsigned short)10]);
                            }
                        } 
                    } 
                } 
                arr_15 [6] = ((/* implicit */short) (-(((arr_8 [i_0 - 1] [(_Bool)1]) ? (((/* implicit */int) min((arr_3 [6U]), (((/* implicit */signed char) (_Bool)1))))) : ((+(((/* implicit */int) (signed char)39))))))));
                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0]))))) ? ((+((((_Bool)1) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (short)-11)))))) : (((((/* implicit */int) arr_11 [i_0 + 1] [i_0])) - (((/* implicit */int) ((_Bool) 873518179U)))))));
                arr_17 [(unsigned char)10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))));
                arr_18 [i_0] = ((/* implicit */int) 1802075952U);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_9);
}
