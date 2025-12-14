/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119228
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
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_5)), (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) | (var_9)))) ? (var_12) : (((int) var_3)))) : (((/* implicit */int) var_18))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 268435200U)) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 3]))) : ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0 + 2])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_1 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_5);
            var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (arr_1 [i_1 + 2]) : (((((/* implicit */_Bool) (unsigned char)45)) ? (arr_0 [i_2] [i_2 + 2]) : (((/* implicit */int) arr_8 [i_1] [i_2]))))))));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1 + 2]))) || (((/* implicit */_Bool) max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 2]))))));
    }
    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_24 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)226)), (max(((+(((/* implicit */int) arr_12 [i_4])))), (((arr_1 [(unsigned short)0]) / (arr_0 [i_3] [i_4])))))));
            arr_14 [i_4] [i_4] [(signed char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_3 - 3]))) ? (((arr_1 [i_3 + 2]) + (arr_1 [i_3 - 2]))) : (arr_1 [i_3 + 3])));
        }
        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) (unsigned char)225))));
        arr_15 [3] = ((/* implicit */unsigned long long int) ((unsigned char) ((var_13) - (((/* implicit */long long int) arr_1 [i_3 + 1])))));
        var_26 += ((/* implicit */signed char) arr_1 [i_3]);
    }
    var_27 = ((/* implicit */int) var_5);
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) | (((((/* implicit */int) (unsigned char)244)) & (((/* implicit */int) (signed char)-32))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((long long int) (unsigned char)12)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) / (4295374084673896405LL)))))));
}
