/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119838
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((unsigned long long int) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0]))) : (((-2147483625) ^ (arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0])))) > (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (2147483647)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (17180847029901585116ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535)))))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) != (((/* implicit */int) arr_0 [i_1]))))), ((+(((/* implicit */int) (unsigned short)0))))));
        var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-32743)) && (((/* implicit */_Bool) 8904949479731745186ULL))))) - (((/* implicit */int) (unsigned short)65535))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_2] [i_2]))))));
        arr_10 [i_2] = ((/* implicit */long long int) min((min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2]))), (((/* implicit */unsigned short) ((_Bool) 2422142573U)))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_4 [i_3] [i_3]), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
        var_16 += ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) arr_1 [i_3] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3])))))));
    }
}
