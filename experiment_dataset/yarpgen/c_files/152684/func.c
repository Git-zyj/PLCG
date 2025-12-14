/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152684
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
    var_15 += ((/* implicit */unsigned char) var_0);
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-125)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)15] [i_0]))))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (28656)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) % (9007198986305536ULL)))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (-2054736459574443136LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
        var_17 = ((/* implicit */short) var_14);
        arr_3 [i_0] = ((/* implicit */int) ((max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (18437736874723246080ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)30184))))))) & (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))))))));
        var_18 = ((/* implicit */_Bool) var_6);
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) & (var_9)))) ? (((((/* implicit */_Bool) (short)-26201)) ? (arr_4 [i_1 - 3]) : (((/* implicit */long long int) 4092744354U)))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)36014), (((/* implicit */unsigned short) var_1))))))))));
        arr_6 [i_1 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) arr_0 [i_1] [i_1 - 1])))) : (((((/* implicit */int) arr_1 [i_1 - 3])) ^ ((-(((/* implicit */int) (unsigned short)35352))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    }
}
