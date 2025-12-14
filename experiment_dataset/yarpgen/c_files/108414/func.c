/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108414
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */_Bool) min((2008530784U), (((/* implicit */unsigned int) (signed char)-53))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (i_1 % 2 == 0) ? (((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1])))) ? (((((arr_5 [i_1] [i_1]) + (9223372036854775807LL))) >> (((arr_5 [i_1] [i_2]) + (4560271170990545210LL))))) : ((-(arr_5 [i_1] [i_1]))))) : (((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1])))) ? (((((arr_5 [i_1] [i_1]) + (9223372036854775807LL))) >> (((((arr_5 [i_1] [i_2]) + (4560271170990545210LL))) - (1011620580181735617LL))))) : ((-(arr_5 [i_1] [i_1])))));
                    arr_8 [5U] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (short)11987)))) + (2147483647))) >> (((min((((/* implicit */int) (signed char)15)), (arr_1 [i_1]))) + (627150468)))));
                }
                for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (arr_5 [i_0] [i_1])))), (min((((/* implicit */unsigned long long int) 2008530792U)), (7768429553608595160ULL))))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 1]))))) != (((min((67108863U), (((/* implicit */unsigned int) (signed char)76)))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))))));
                    var_22 = ((/* implicit */unsigned int) (unsigned short)49893);
                    arr_11 [i_0] [(signed char)15] [i_1] = ((((_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_1])) ? (arr_10 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)6315))))));
                }
                for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) (short)17305)) : (((/* implicit */int) ((signed char) 12994821048649370160ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1] [i_4] [i_4])))))));
                    arr_14 [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)-61))))));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((-6026928933381252388LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (short)-11982)) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_4)))))))));
                }
                arr_16 [i_0] [i_0] &= ((/* implicit */unsigned int) (short)6515);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 1540068367U)) ? (3082220152U) : (3474385285U)));
        var_24 = ((/* implicit */int) min((var_24), ((+(((/* implicit */int) (unsigned short)9390))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 1] [(signed char)9]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (3318060304U)))));
    }
    var_26 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((signed char) var_12))), (var_3)));
}
