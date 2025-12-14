/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124721
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_3 [13U] = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) 645962558U)))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (signed char)0)), (4294967295U)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_14))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (signed char)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : ((~(((unsigned int) (signed char)0))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((arr_1 [i_0]), (arr_1 [i_2]))), (((/* implicit */unsigned long long int) max(((unsigned short)52670), (((/* implicit */unsigned short) (signed char)-114)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) & (var_12)))), (arr_2 [i_0 + 3] [i_0 - 1])))));
                var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-27645)) : (((/* implicit */int) max((((unsigned short) 3731857385U)), (((/* implicit */unsigned short) var_15)))))));
                var_20 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) var_0);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned long long int) (short)32767)), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0 + 2])) + (2147483647))) << (((3961957485U) - (3961957485U)))))))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -7760811157154043126LL)) && (((/* implicit */_Bool) (short)-27645))))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_4] [i_0] &= ((/* implicit */unsigned long long int) (signed char)-64);
            arr_14 [i_0] [(signed char)11] = ((/* implicit */short) arr_6 [14ULL] [i_4] [i_4] [i_4]);
        }
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (3578589630U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33)))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) min((var_15), (((/* implicit */signed char) var_5))))), (var_9)))) % (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 8394533804509955240ULL)) && (((/* implicit */_Bool) var_13))))), (max(((unsigned short)42740), (((/* implicit */unsigned short) var_4)))))))));
    var_26 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)-32767)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-9333)) : (((/* implicit */int) var_3)))))))));
}
