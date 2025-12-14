/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163368
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
    var_19 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((3969443906U) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 3969443906U)) : (3572505875388329787ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = arr_2 [i_0 - 4];
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((int) (unsigned short)54715)) - (((/* implicit */int) arr_4 [i_0]))))) ? (arr_3 [11ULL] [i_1]) : (((/* implicit */unsigned long long int) min(((+(325523389U))), (325523394U)))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (signed char)-123)), (3572505875388329787ULL))), ((~(18446744073709551605ULL)))));
            }
        } 
    } 
}
