/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111692
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 &= ((/* implicit */short) ((((/* implicit */int) ((max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned short)52709))))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_0])))));
        var_11 = ((/* implicit */signed char) max((((11144183552159685907ULL) << (((((/* implicit */int) (unsigned short)52698)) - (52681))))), (((/* implicit */unsigned long long int) min((4236871732U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) <= (3867689334U)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 1801594040)), (max((((/* implicit */unsigned long long int) max((3867689334U), (811250564U)))), (((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (131071ULL)))))));
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (4294967290U)))) ? (((((/* implicit */int) (signed char)-37)) % (((/* implicit */int) (unsigned char)66)))) : (((/* implicit */int) (unsigned short)4461))));
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) 4810315722617462068LL))));
        }
    }
    for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] [13U] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (max(((((_Bool)1) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-1))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17793)) ? (((/* implicit */unsigned long long int) 2581312076633467778LL)) : (((arr_6 [i_2] [i_2] [i_2 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_16 -= ((/* implicit */signed char) var_9);
    var_17 = ((/* implicit */unsigned long long int) (signed char)29);
}
