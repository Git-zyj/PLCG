/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186834
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
    var_16 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [10U] [i_1] [i_0]))));
                    var_18 = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) 6004435185691686203LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_2]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70)))))) ? ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)59103)))) : (((/* implicit */int) min((var_12), (var_12)))))))));
                    var_19 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) var_15)), (var_4)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)81)) - (74)))));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 21; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_12 [i_3] [i_5 + 1])))) ? (max((((/* implicit */long long int) (unsigned short)6433)), (2585235550140272030LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_22 = ((/* implicit */long long int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (short)10813))) < (4294967295U))), ((!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)43)), ((unsigned short)52262))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59102))))) ? (arr_12 [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)6426)))))))));
                }
            } 
        } 
    } 
}
