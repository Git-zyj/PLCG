/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132214
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
    var_20 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 3] = ((/* implicit */unsigned char) ((min((var_13), (((/* implicit */unsigned long long int) (+(0LL)))))) >> ((((+(((/* implicit */int) arr_4 [i_0] [i_1 + 1])))) - (30603)))));
                var_21 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) var_4)) + (((/* implicit */int) arr_3 [i_1 + 2])))), (((/* implicit */int) arr_3 [i_0])))) / (var_6)));
                var_22 = (+(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) / (arr_0 [i_0]))));
                var_23 += ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-32)))) : (18LL)));
            }
        } 
    } 
    var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_26 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_7)))))))));
}
