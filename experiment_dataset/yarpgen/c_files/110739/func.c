/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110739
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
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (1693903438)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)3726))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))))))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)255)))));
        arr_2 [i_0] = ((/* implicit */_Bool) (short)-1);
        var_16 -= ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (arr_0 [i_0 + 1] [i_0 - 1]))), (((/* implicit */long long int) var_0)))) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (((unsigned short) (unsigned char)0))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [0] [(_Bool)0] |= ((/* implicit */_Bool) arr_4 [i_1] [i_2]);
            var_17 = ((/* implicit */short) ((signed char) var_4));
            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (9223372036854775807LL) : (-9223372036854775805LL)));
            var_19 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775805LL) : (8039132476974475207LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))));
        }
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (unsigned char)255)))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)7135))))))));
}
