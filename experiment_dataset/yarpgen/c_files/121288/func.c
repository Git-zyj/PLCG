/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121288
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
    var_18 += ((/* implicit */unsigned int) ((unsigned char) ((int) (+((-9223372036854775807LL - 1LL))))));
    var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 19U))))) << (((long long int) (short)0)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) != (arr_1 [i_0])))))));
        arr_2 [i_0] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)0))));
        var_21 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) (signed char)127))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_16 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_1] [i_3 + 3] [i_3]), (arr_15 [6ULL] [i_3 + 4] [i_4]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16368)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))) ? (72048797944905728LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))));
                        var_22 += ((/* implicit */short) (((~(18446744073709551613ULL))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_13 [i_1] [2LL] [i_4]), ((signed char)-8)))))))));
                        arr_17 [i_1] [i_2] [i_3 + 1] [i_2] = ((/* implicit */int) arr_13 [i_1] [4] [i_4]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_17) | (arr_9 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) < (((/* implicit */int) arr_5 [i_1] [(short)4])))))) : (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [2U]))))) != (arr_4 [i_1] [i_1]))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_3);
}
