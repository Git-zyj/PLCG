/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140948
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
    var_19 = ((/* implicit */unsigned short) var_5);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 4031938517U)) ? ((((~(((/* implicit */int) var_9)))) - (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0 + 1]) : (arr_3 [i_0])))) ? (((/* implicit */int) (signed char)95)) : (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(arr_3 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-96))));
                arr_10 [i_3] = ((/* implicit */short) 9067503U);
                var_22 = ((/* implicit */_Bool) ((unsigned short) 1163864073U));
                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-21018))));
            }
        } 
    } 
}
