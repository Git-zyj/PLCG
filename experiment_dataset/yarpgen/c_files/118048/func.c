/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118048
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
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)34))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
        var_15 = ((/* implicit */unsigned long long int) (short)-20265);
        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) var_8))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) * (((/* implicit */int) arr_2 [i_1]))));
            var_18 = ((/* implicit */short) arr_4 [i_0]);
            arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 1048575U))) + (((((/* implicit */_Bool) 7759692275224389221ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (short)63))))));
            arr_8 [i_1] = ((/* implicit */int) (-(4293918713U)));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((15U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)20695))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
            var_20 *= ((/* implicit */short) (-(8047451929875145821LL)));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) (+(var_11)))))))))));
        var_22 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-74))))), (max((var_12), (((/* implicit */long long int) var_5)))))) << (((4447475268069415429ULL) - (4447475268069415428ULL)))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((long long int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))) <= (((/* implicit */int) max(((signed char)-50), (((/* implicit */signed char) var_8)))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) >= (7U))))) : (max((arr_15 [i_4]), (arr_15 [i_4])))));
        var_24 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4])) || (((/* implicit */_Bool) (signed char)127))))), (((int) 6U))));
        var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) : (0ULL)))) ? (min((arr_14 [i_4] [i_4]), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-20693)) + (2147483647))) << (((((/* implicit */int) var_1)) - (196)))))))) : (((/* implicit */unsigned long long int) max(((~(var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (912202144U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))))))));
    }
}
