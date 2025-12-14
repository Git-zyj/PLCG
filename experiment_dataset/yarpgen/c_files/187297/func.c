/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187297
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
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 9223372036854775808ULL)) ? (9223372036854775791ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))) & (((arr_1 [i_0] [i_0]) >> (((/* implicit */int) arr_0 [i_0] [i_0])))))) << ((((~(((((/* implicit */_Bool) 9223372036854775801ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_9)))))) + (23))))))));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((-1866586761) + (1866586773))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2599017595U)), (9223372036854775808ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_7 [i_2 + 1]))))))))) >= ((~(((/* implicit */int) (_Bool)1))))));
                    arr_12 [i_2] [(short)3] [i_2] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */int) (!(arr_5 [i_2 + 1] [i_1 + 1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1695949683U)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) var_5))))))))));
                    arr_13 [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-117))))) ? (min((arr_1 [i_1 - 2] [i_3 - 1]), (((/* implicit */unsigned long long int) (unsigned char)233)))) : (((/* implicit */unsigned long long int) ((29360128U) << (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) - (225)))))))), (((/* implicit */unsigned long long int) min((33554431U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    var_17 ^= ((/* implicit */unsigned int) min((((min((((/* implicit */unsigned int) (unsigned char)123)), (4294967295U))) == (((((/* implicit */_Bool) 12323624U)) ? (1368623530U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (31ULL)))) || (((/* implicit */_Bool) min((754585442U), (arr_6 [i_3]))))))));
                }
            } 
        } 
    } 
}
