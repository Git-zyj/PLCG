/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139873
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (_Bool)1;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [(unsigned short)12])), (((((/* implicit */int) arr_2 [i_0])) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (33554304) : (((/* implicit */int) (unsigned short)13255))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_7 [7ULL] = max((((/* implicit */int) (_Bool)0)), ((-(arr_6 [i_1]))));
        arr_8 [i_1 - 2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0))))) ? (var_2) : (((0U) << (((14856647617911376879ULL) - (14856647617911376863ULL)))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) var_11);
        var_17 += ((/* implicit */unsigned int) (unsigned char)85);
    }
    var_18 ^= (_Bool)1;
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_4)))))) != (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (var_15))), (((/* implicit */unsigned int) (unsigned char)0))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)62))))) == (var_11)));
}
