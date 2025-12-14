/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130923
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
    var_13 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)14));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((unsigned short) 3872343707U));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [18ULL] [i_1] = ((/* implicit */int) var_1);
                    var_15 = ((/* implicit */unsigned long long int) ((((_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) var_8))));
                    var_16 = ((/* implicit */int) ((arr_1 [i_1] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    var_17 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [(unsigned char)6]) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3])))));
            arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((signed char) (signed char)126));
            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
        }
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1446894716)) ? (max((((/* implicit */int) (short)-5880)), ((-(-709286658))))) : (1446894716)));
        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-78))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((signed char) var_1)))))));
    }
    var_22 = ((/* implicit */long long int) ((min((var_6), (((/* implicit */int) (!(var_10)))))) >> (((((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_6))))) / (((/* implicit */int) var_11))))));
}
