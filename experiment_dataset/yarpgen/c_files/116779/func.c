/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116779
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 7055834057007192967LL);
        var_18 ^= ((/* implicit */int) (((+(((/* implicit */int) var_6)))) != ((~((+(((/* implicit */int) arr_3 [7]))))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((_Bool) (_Bool)1))), (((unsigned short) 0ULL))));
        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2)));
        var_21 *= ((/* implicit */unsigned char) (~((((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))));
        var_22 = ((/* implicit */int) (_Bool)0);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [4LL] [4LL])) && ((!(((/* implicit */_Bool) var_12))))));
        var_24 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)0)) : (1071189880)))));
        var_25 *= ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_26 |= min((((((/* implicit */int) arr_1 [i_3])) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) -147175548))))));
        var_27 = ((/* implicit */_Bool) (((~(((0U) + (((/* implicit */unsigned int) -2147483646)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) != (max((((/* implicit */long long int) arr_9 [i_3] [i_3])), (arr_7 [(_Bool)1])))))))));
    }
    var_28 = ((/* implicit */unsigned int) min((((int) (+(var_3)))), ((~(((/* implicit */int) ((2918768589U) < (var_5))))))));
}
