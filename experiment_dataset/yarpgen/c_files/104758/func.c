/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104758
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
    var_20 |= ((/* implicit */unsigned char) min((var_15), (var_15)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1796103964)) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-1025325537) : (((/* implicit */int) (unsigned short)65526)))))));
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((-1773619345) + (((/* implicit */int) (unsigned char)219)))), (((/* implicit */int) arr_1 [(short)12]))))) || (((/* implicit */_Bool) (unsigned char)113))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) != (max((((/* implicit */long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_3 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_0 [i_3]))));
                    }
                } 
            } 
        } 
        var_25 ^= arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1];
    }
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */int) arr_13 [(short)14] [(short)14] [i_4]);
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30317)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) : (5665453923705078207ULL))))));
    }
    for (signed char i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_28 &= ((/* implicit */unsigned int) arr_2 [i_5]);
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (_Bool)1))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (arr_5 [i_5] [(_Bool)0])));
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (((unsigned long long int) arr_14 [6] [6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 2] [i_5])))))))));
        arr_19 [(signed char)12] &= ((/* implicit */unsigned long long int) ((min((((arr_15 [2]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (arr_15 [i_5]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)46085)) > (1264633586)))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */int) arr_21 [i_6])) >= (((/* implicit */int) arr_21 [(_Bool)1]))))));
        var_33 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6]))) ^ (arr_20 [i_6]))) == (arr_20 [i_6])));
    }
}
