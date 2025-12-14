/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142542
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])) < ((-(min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL)))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) (short)11345)) | (min((((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */int) arr_4 [i_1])))), ((~(-1979446300))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_5 [i_2])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) > (((/* implicit */int) var_4)))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-115)) % (((/* implicit */int) arr_5 [i_2]))))))))));
        arr_8 [i_2] = min((max((((/* implicit */int) ((unsigned short) var_14))), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2])))))), (((/* implicit */int) var_6)));
    }
}
