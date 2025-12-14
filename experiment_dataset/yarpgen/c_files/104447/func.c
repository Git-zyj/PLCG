/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104447
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) ((unsigned short) 213521645));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_2 - 1])) + (213521645))), (((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [14])) ? (((/* implicit */int) (unsigned short)16889)) : (((/* implicit */int) (!(((/* implicit */_Bool) -213521645))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = (+(var_2));
    var_14 = ((/* implicit */int) ((unsigned short) var_7));
}
