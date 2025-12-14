/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108494
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_0 - 1] [i_0 - 1]));
        var_16 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_8))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) (signed char)-67)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55162))))))))) ? (-2114692736) : (((/* implicit */int) var_12))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -1829783578)), (4294967288U)));
        var_19 = ((/* implicit */int) ((short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32764))))), (min((4294967290U), (((/* implicit */unsigned int) arr_3 [i_1])))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_20 = ((/* implicit */int) ((((long long int) 4294967288U)) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) ^ (((/* implicit */int) arr_7 [i_1]))))) ? ((~(-1))) : (((/* implicit */int) arr_7 [i_1]))));
            var_22 -= ((/* implicit */signed char) ((unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))) | (0ULL)))));
            var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_3 [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_24 = ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_3 + 2] [1ULL]))));
            var_25 = ((/* implicit */long long int) var_14);
            arr_11 [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_3] [i_3]);
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 18; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_26 ^= ((/* implicit */signed char) ((unsigned long long int) arr_16 [i_3] [i_3 - 1] [i_4]));
                        arr_17 [i_5] = ((/* implicit */short) arr_10 [i_3 + 3] [i_4 + 3]);
                        var_27 -= ((/* implicit */signed char) ((unsigned int) arr_2 [i_4 - 2] [i_3 + 4]));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) var_12);
        }
    }
    var_29 = ((/* implicit */unsigned long long int) var_3);
    var_30 |= ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-126))), ((~(18446744073709551606ULL))))));
}
