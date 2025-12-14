/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129659
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = var_6;
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (unsigned short)64430))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_11)) < (((((/* implicit */_Bool) (short)16877)) ? (((/* implicit */int) (unsigned short)1105)) : (((/* implicit */int) (_Bool)0)))))))));
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_0)) - (((/* implicit */int) var_7)))), (((((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-96)))) - (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-20161))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 &= ((/* implicit */short) (_Bool)1);
                var_18 = ((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2]);
                arr_12 [i_2] [i_2] = (short)32640;
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((signed char) ((((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_9 [(unsigned short)4] [i_3] [i_3]))))) != (((/* implicit */int) ((((/* implicit */int) (signed char)-78)) != (((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
}
