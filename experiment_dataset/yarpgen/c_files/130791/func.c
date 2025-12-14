/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130791
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
    var_12 = ((var_11) | (min((var_11), (var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) -1058949585)), (1323795482U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)1)))))))) ? (arr_0 [i_0]) : (((/* implicit */int) var_3))));
                arr_5 [(_Bool)1] = ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) var_3))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                arr_11 [(unsigned short)15] [i_2] [i_3] = ((/* implicit */int) (_Bool)1);
                arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1323795482U)) ? (1256600909) : (((/* implicit */int) (unsigned short)41960))))) ? (((int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)32768)) ? ((~(var_1))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)33601)) : (1216268475)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) max((var_4), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((int) var_9))))));
}
