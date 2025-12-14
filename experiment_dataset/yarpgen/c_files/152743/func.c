/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152743
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (max((((unsigned int) (unsigned char)246)), (((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned short) (short)-1721)))))))));
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((~(var_14))), (((int) arr_4 [10U]))))) - (var_12)));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_16))));
            var_20 = ((/* implicit */short) min((max((((/* implicit */unsigned int) (signed char)18)), (var_0))), (((unsigned int) var_8))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_10 [i_3] [22] = ((/* implicit */int) min((((/* implicit */unsigned int) var_8)), (var_10)));
            var_21 = ((/* implicit */unsigned long long int) (signed char)14);
            var_22 = ((/* implicit */unsigned long long int) ((short) (~(arr_8 [i_0]))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((((/* implicit */int) var_15)) | (arr_8 [i_3]))), ((-(max((((/* implicit */int) (unsigned short)15697)), (-1080127735))))))))));
        }
        var_24 |= ((/* implicit */unsigned long long int) min((-8033392684010243625LL), (((/* implicit */long long int) (signed char)20))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_25 *= ((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4]);
        var_26 &= ((/* implicit */unsigned long long int) ((17873551610949698713ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33)))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((473653419), (((/* implicit */int) ((unsigned short) arr_11 [(short)8]))))))));
    }
}
