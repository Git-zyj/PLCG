/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109978
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [0LL] = ((/* implicit */unsigned short) 1750874844U);
        arr_4 [i_0] = ((/* implicit */short) ((max((min((((/* implicit */unsigned int) arr_1 [i_0])), (1750874859U))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) / (var_4))))) << ((((~(((/* implicit */int) (!(((/* implicit */_Bool) 221549364U))))))) + (13)))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (unsigned short)65535))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_10 [i_1] [i_1] [(signed char)21] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 2544092442U))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)4738))))) ? (8388607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4732))))))));
                arr_11 [(signed char)0] [(signed char)0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) (signed char)-38))))) ? (8388617ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -893375402703829638LL))))))));
            }
            arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_4)) | (18446744073701163014ULL)));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned int) ((_Bool) arr_1 [i_3]));
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */long long int) ((unsigned int) 18446744073701163022ULL));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))))))));
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -912998485)) ? (-430282997) : (var_0))), (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_3)));
        arr_22 [i_4] = ((/* implicit */unsigned short) (-(min(((~(201326592U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_4])))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_5])) > (((((/* implicit */int) (unsigned char)222)) ^ (((/* implicit */int) (short)-4751))))));
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (signed char)113))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [4]))))) : (2544092434U)));
        var_16 += ((/* implicit */unsigned int) min((((signed char) arr_2 [i_5])), (((/* implicit */signed char) arr_2 [i_5]))));
    }
    var_17 = ((/* implicit */signed char) (~((~(((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_2)) - (26950)))))))));
    var_18 = ((/* implicit */int) (~(var_8)));
}
