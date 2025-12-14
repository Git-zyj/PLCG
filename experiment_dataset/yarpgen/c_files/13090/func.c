/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13090
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_1] [i_2 - 1] [i_2]), (arr_4 [i_0] [i_1] [i_2 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) != (((/* implicit */int) (_Bool)1)))))) : (((((arr_4 [i_2] [i_2 + 1] [i_2 + 2]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) + (77)))))));
                    var_10 |= ((/* implicit */long long int) ((int) min((((/* implicit */long long int) (unsigned short)31862)), (arr_4 [i_1] [i_1] [i_2 + 1]))));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (+(((/* implicit */int) max((max(((unsigned short)33674), (arr_1 [i_0]))), (((/* implicit */unsigned short) max((arr_2 [i_0] [i_1]), (var_0))))))))))));
                    arr_12 [i_1] [(signed char)19] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)78)) ? (-3274734646377643628LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44349))))), (((/* implicit */long long int) (signed char)78))));
                    arr_13 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */signed char) (unsigned short)55867);
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_3])) * (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 2] [i_3 - 1]))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_3]))) ? (((((/* implicit */long long int) arr_3 [i_0])) | ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_3 - 2])))));
                }
                var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -6482452)) ? (min((max((((/* implicit */long long int) var_9)), (var_8))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-32764)) + (2147483647))) << (((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (short)-27605)) == (((/* implicit */int) (signed char)-6))))) : (((/* implicit */int) var_6)))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_8))));
                var_16 = ((/* implicit */unsigned char) var_1);
                var_17 = ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) > (((((/* implicit */_Bool) arr_9 [i_1] [i_0])) ? (((arr_6 [i_0] [i_0] [i_1]) ? (5267636435352965968LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))) : (((/* implicit */long long int) 2147483647))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (var_2)));
}
