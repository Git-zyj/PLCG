/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171314
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)63)) + (((/* implicit */int) (signed char)63))));
                var_12 &= ((/* implicit */unsigned char) min((((unsigned int) min((((/* implicit */short) (signed char)124)), (var_7)))), (((/* implicit */unsigned int) var_7))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            {
                var_13 += ((/* implicit */short) max((max((((/* implicit */long long int) (unsigned char)177)), (var_1))), (((/* implicit */long long int) var_8))));
                var_14 = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2899785379U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (max((((/* implicit */unsigned int) var_7)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 11563753961987419876ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((int) var_9)) : (((/* implicit */int) var_6))));
}
