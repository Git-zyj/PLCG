/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157276
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))))), (min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (unsigned char)152)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 4] [(unsigned short)20])))))))));
        var_13 = ((/* implicit */unsigned int) (+(((unsigned long long int) arr_0 [i_0 - 1] [i_0 - 4]))));
        arr_3 [(short)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 6130566774736548217LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 7501702547887135748LL))))))));
    }
    for (signed char i_1 = 4; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((unsigned char) (unsigned char)215)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)28005))))))))));
        var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-28027))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-((+((~(((/* implicit */int) (unsigned short)52782)))))))))));
    }
    var_17 -= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) - ((~((-(3803046701U))))));
}
