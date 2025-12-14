/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112325
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */_Bool) 6706521176832990725LL);
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 864691128455135232ULL)) ? (((1073741823U) * (3221225473U))) : (1073741837U)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_15 &= ((/* implicit */_Bool) (unsigned short)30602);
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) ((var_4) == (((/* implicit */long long int) -1299964998)))))))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_10) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned short)34934)) : (((/* implicit */int) (signed char)-118))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) -82220484))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL))))))) : (((1073741831U) << (((8754397519813314795LL) - (8754397519813314766LL)))))));
                        var_17 &= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_3 + 2] [i_5] [i_5]))))) & (((long long int) 3221225472U))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_3 - 1] [i_3]) - (arr_8 [i_3 + 1] [i_3])))) ? (((/* implicit */unsigned long long int) ((1073741822U) << (((((((/* implicit */int) arr_0 [i_5])) + (((/* implicit */int) arr_17 [(short)1])))) + (11925)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) : (arr_4 [i_2] [i_2])))), (max((arr_13 [i_2] [i_4] [6ULL]), (((/* implicit */unsigned long long int) var_12))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) 9223372036854775807LL);
        arr_19 [i_2] [(short)8] = ((/* implicit */unsigned short) ((-82220494) / (((/* implicit */int) (unsigned char)255))));
        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_12)), (arr_13 [i_2] [i_2] [i_2])));
    }
    var_21 = ((/* implicit */short) var_7);
}
