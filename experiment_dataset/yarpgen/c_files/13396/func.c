/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13396
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), ((-(((var_9) * (6326079134882024924ULL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-1))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) (_Bool)1);
        }
        for (short i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */int) arr_3 [i_2] [(unsigned char)12] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2] [i_2])))), (((((/* implicit */_Bool) ((int) (unsigned char)1))) ? (((/* implicit */int) (unsigned short)128)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
            var_18 ^= ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) ((short) (signed char)(-127 - 1))))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18907)) ? (7745933412512073695LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))))) + (((((_Bool) arr_10 [i_0] [i_0])) ? (max((var_4), (((/* implicit */long long int) arr_5 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0])))) : (((/* implicit */long long int) ((/* implicit */int) (short)18902)))))));
        }
        /* vectorizable */
        for (short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)129)) ? (((/* implicit */int) (short)18898)) : (((/* implicit */int) (short)-3))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)11))));
        }
        arr_14 [i_0] = ((/* implicit */signed char) (unsigned short)14648);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [(signed char)2] [i_0] [i_0])))) ? (((/* implicit */int) (signed char)-4)) : (((((((/* implicit */int) min(((signed char)-7), (var_1)))) + (2147483647))) << (((((/* implicit */int) ((63050394783186944LL) != (arr_10 [i_0] [i_0])))) - (1))))))))));
    }
}
