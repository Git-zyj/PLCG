/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179169
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
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((long long int) var_4)) : (((/* implicit */long long int) var_2))))));
    var_14 -= min((((/* implicit */int) var_12)), ((+(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_1] [i_1] [0ULL] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_8 [i_3] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))) ? ((+(((/* implicit */int) arr_5 [i_1] [i_1] [i_2])))) : (((/* implicit */int) arr_4 [2] [i_1] [(_Bool)1])));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (-(((long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_7)))))));
                                arr_18 [i_1] [i_1] [i_2] [11] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1] [i_0 - 1] [i_0 + 2])) * (((/* implicit */int) arr_5 [i_2 - 1] [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */int) (!(arr_5 [i_2 - 1] [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) max(((signed char)-4), ((signed char)-1))))));
                                var_17 -= ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_2)), (min((arr_6 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)32821)))))) <= (((/* implicit */unsigned long long int) var_2))));
                    var_19 = ((/* implicit */short) (~((+(((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1] [15U]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_4);
}
