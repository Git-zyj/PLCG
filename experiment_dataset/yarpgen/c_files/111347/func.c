/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111347
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
    var_15 = ((/* implicit */short) ((unsigned long long int) var_11));
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_0)))) || (((/* implicit */_Bool) var_4))))) + (((/* implicit */int) (short)-17620))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))), ((~(arr_0 [i_0] [i_0])))));
        arr_4 [(signed char)2] = ((/* implicit */signed char) var_4);
    }
    var_17 = ((/* implicit */unsigned short) (-((((+(((/* implicit */int) (_Bool)1)))) << ((((+(((/* implicit */int) (unsigned char)117)))) - (94)))))));
    var_18 = ((/* implicit */signed char) (unsigned short)6);
}
