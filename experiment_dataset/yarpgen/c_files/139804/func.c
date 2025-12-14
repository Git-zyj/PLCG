/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139804
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
    var_16 = ((/* implicit */unsigned char) (-(max(((+(((/* implicit */int) (short)1614)))), ((+(((/* implicit */int) (unsigned short)7577))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6804))))) ? (((((/* implicit */_Bool) 134217600U)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1])))) : ((-(((/* implicit */int) arr_4 [i_1 - 1]))))));
                arr_7 [3ULL] [3ULL] [3ULL] = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]);
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 134217604U))) ? (((((/* implicit */_Bool) arr_0 [18ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_2 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217600U)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */unsigned int) arr_13 [i_3])) : (arr_3 [i_2] [i_3] [i_3])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2]))))) : (((((/* implicit */long long int) -207158360)) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_2 [i_2] [i_2])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_3);
    var_19 = ((/* implicit */long long int) var_2);
}
