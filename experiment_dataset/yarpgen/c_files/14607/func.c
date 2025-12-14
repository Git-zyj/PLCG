/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14607
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
    var_17 = var_16;
    var_18 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) - (arr_4 [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((12161477769792566610ULL) != (12161477769792566610ULL)))) == (((((/* implicit */int) var_0)) << (((/* implicit */int) arr_5 [i_1] [i_1])))))))) > (arr_4 [i_0])));
                            arr_15 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(6285266303916985006ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_1])))))) : (((6285266303916985005ULL) >> (((/* implicit */int) (_Bool)1))))));
                            var_19 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1]))))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [(short)6]))));
                arr_16 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (max((arr_11 [i_0] [i_1] [i_1]), (arr_11 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
}
