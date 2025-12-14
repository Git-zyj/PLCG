/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163504
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */short) var_16);
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) (short)-27158)))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) var_17))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((short) var_0)), (((/* implicit */short) ((((/* implicit */_Bool) -1363257349)) && (((/* implicit */_Bool) var_2)))))))) >= (1535050797)));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -749138631)) ? (((/* implicit */long long int) var_11)) : (arr_10 [i_2] [i_2])))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_12))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned short) (short)0)))));
                        var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                        var_27 = ((/* implicit */int) ((unsigned long long int) var_12));
                    }
                } 
            } 
            var_28 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [20] [i_2 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))) ? ((-(arr_10 [8U] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)22)) : (((/* implicit */int) arr_8 [14U] [i_2 - 1] [i_2]))))) < (var_16)))))));
            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 + 1]))) : (((unsigned long long int) arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_2]))));
            arr_16 [i_2] [i_2] [14ULL] = ((/* implicit */unsigned char) max((min((var_4), (var_3))), (((/* implicit */unsigned short) (short)-29328))));
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_20 [(signed char)12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (arr_19 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))))), (((/* implicit */unsigned int) var_5))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((unsigned int) (-(var_18)))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) | (1535050782)))) ? (var_19) : (var_8)))) ? (arr_10 [(signed char)16] [i_1]) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (-26LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) ^ (var_8)))))))))));
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
            var_31 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (var_4)))));
        }
        var_32 |= ((/* implicit */unsigned char) var_14);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_33 |= (+(var_11));
        var_34 = ((/* implicit */unsigned int) -2147483628);
        var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1535050816)) ? (4058440781085484032ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    }
    var_36 = ((/* implicit */short) var_10);
}
