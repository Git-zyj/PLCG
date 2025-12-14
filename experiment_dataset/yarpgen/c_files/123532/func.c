/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123532
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10144514109747305369ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)148))));
                arr_5 [(unsigned char)5] = ((((/* implicit */_Bool) arr_2 [i_0] [7] [i_1])) || (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [(unsigned char)0]))));
                arr_6 [(_Bool)1] [i_1] [i_1] = (_Bool)1;
            }
        } 
    } 
    var_10 = ((/* implicit */_Bool) 2967575330U);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (~(10080182432046573710ULL))))) ? (((unsigned long long int) (unsigned char)69)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_9))))) ? (max((891934437), (-891934426))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_2)))))))));
}
