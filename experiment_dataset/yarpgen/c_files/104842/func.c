/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104842
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((signed char) var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((9223372036854775807LL), (max((arr_2 [i_0] [i_1 - 2] [6]), (arr_2 [i_0] [i_1 - 1] [i_1 - 1])))));
                var_17 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) | ((-2147483647 - 1))))));
                var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (unsigned short)57282)))))) ? (max((var_4), (((/* implicit */unsigned long long int) ((long long int) var_8))))) : ((-(var_7)))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (6464597036888211981ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (var_7) : (((var_7) ^ (((/* implicit */unsigned long long int) var_1))))))));
}
