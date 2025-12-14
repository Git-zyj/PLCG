/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120947
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-74)))), (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) var_4))))));
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_3 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0])))) > (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (arr_0 [i_0]))))));
                var_18 ^= ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [(unsigned short)3] [(unsigned short)5] [i_2 + 3])), ((unsigned short)17172)))) ? (((/* implicit */int) arr_2 [i_2] [i_3 + 1] [i_3 + 1])) : (((((/* implicit */int) arr_2 [(unsigned short)15] [(unsigned short)9] [i_3])) ^ (((/* implicit */int) var_5))))));
                arr_10 [i_2] [i_3] = ((signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-88)), ((unsigned short)1536)))) > (((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)44016)) : (((/* implicit */int) (unsigned short)59929))))));
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) var_9)) : (min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)-92))))));
            }
        } 
    } 
    var_21 = var_14;
}
