/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123693
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] [0LL] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */long long int) var_3)) : (-9223372036854775807LL)))));
                arr_8 [8U] [(signed char)4] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (-((+((+(var_5)))))));
    var_16 -= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_11 [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775807LL) : (-9223372036854775805LL)));
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            arr_14 [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14)))));
            arr_15 [i_2] [(unsigned char)13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(signed char)13] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) -2147483633)) : (5894242545449442995LL)))));
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1481790853)))) ? ((+(((/* implicit */int) var_0)))) : (var_3)));
        }
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        arr_18 [i_4] = (+((-(((/* implicit */int) (signed char)-110)))));
        arr_19 [(unsigned char)6] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-9223372036854775801LL)))) ? (8ULL) : (((/* implicit */unsigned long long int) -9223372036854775792LL))))) ? ((-(((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_4])))))) : ((+(((/* implicit */int) (short)22066)))));
    }
}
