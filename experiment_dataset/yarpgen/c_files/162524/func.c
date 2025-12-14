/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162524
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)3)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15)))))))) ? (((((/* implicit */long long int) 2500485482U)) - (3021315997331464838LL))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) ((var_10) == (((/* implicit */int) var_0))))) : (max((358196677), (874869073))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_2] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (signed char)65))))));
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [2] [2U] [2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((var_11), (((/* implicit */short) (signed char)-24))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) < ((-9223372036854775807LL - 1LL))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            {
                arr_12 [(unsigned char)13] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) min((var_4), ((-2147483647 - 1))))))));
                var_17 = ((/* implicit */long long int) 1795276348U);
            }
        } 
    } 
}
