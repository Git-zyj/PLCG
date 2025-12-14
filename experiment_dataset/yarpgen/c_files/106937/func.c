/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106937
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((((/* implicit */unsigned long long int) 7739217484290105091LL)), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0]) : (arr_3 [i_1])))))));
            var_15 -= ((/* implicit */short) (unsigned char)248);
            var_16 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned char)127)) - (120))))), (((((/* implicit */_Bool) (signed char)-5)) ? (((int) (unsigned char)183)) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((/* implicit */int) arr_0 [i_0]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(min(((-(4294967295U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))))))))));
            arr_9 [(_Bool)1] [i_2] [1U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_2] [i_0]))))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)90))))))));
            var_18 ^= ((/* implicit */short) -7739217484290105092LL);
            arr_10 [i_0] = ((/* implicit */_Bool) arr_6 [i_0]);
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_3))));
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) <= ((~(max((-7739217484290105091LL), (((/* implicit */long long int) var_9))))))));
        arr_11 [i_0] |= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)768))) : ((-9223372036854775807LL - 1LL))))))))));
    }
    var_21 += (((-(var_6))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-128))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 8751862337373972558ULL))));
}
