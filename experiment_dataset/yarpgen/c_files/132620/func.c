/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132620
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
    var_19 = ((/* implicit */signed char) (+(min((min((((/* implicit */int) var_12)), (var_13))), (1653664796)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) / (min((2228491157U), (((/* implicit */unsigned int) var_5))))))) / (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [11U])) <= (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */_Bool) var_1)) ? (5421060731712263781ULL) : (((/* implicit */unsigned long long int) var_6))))))));
                                arr_13 [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) max((12366769372109266469ULL), (5327300256245592796ULL))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_3 [(_Bool)1])), ((-(((/* implicit */int) var_15))))));
            }
        } 
    } 
}
