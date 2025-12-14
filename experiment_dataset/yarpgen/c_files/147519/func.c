/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147519
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
    var_15 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((signed char) (+(((/* implicit */int) arr_5 [i_0 + 1]))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = max((((unsigned int) (+(((/* implicit */int) (short)-21034))))), (((/* implicit */unsigned int) -861427999)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) (+(arr_2 [i_2])));
                        var_17 |= ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_3]);
                        arr_12 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1037569324)) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : ((-(((/* implicit */int) arr_5 [i_3]))))));
                    }
                    var_18 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_2])))) + (((/* implicit */int) ((signed char) 1037569348))))) + ((+(-1037569325)))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(201711765U))))));
    var_20 = ((/* implicit */unsigned long long int) (-(var_9)));
    var_21 = ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-43))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 2147483647)))))) : (((int) ((((/* implicit */_Bool) (short)-5331)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) var_11))))));
}
