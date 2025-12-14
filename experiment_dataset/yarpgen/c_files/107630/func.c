/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107630
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) max((((/* implicit */long long int) (-(((((/* implicit */int) (short)23814)) * (((/* implicit */int) (short)-14700))))))), (max((((/* implicit */long long int) (unsigned char)84)), (min((3675070140528419641LL), (((/* implicit */long long int) arr_3 [i_0]))))))));
                var_11 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18400281160479175387ULL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)-73))))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)142)))) : (((/* implicit */int) arr_3 [i_0]))))) & (min((((((/* implicit */_Bool) 4U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_7 [i_2])), (((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_4 [i_2] [i_2])))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)73)))))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967292U) * (3U)))) ? (((/* implicit */int) (unsigned short)0)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 2147483632)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_2]))))));
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_3]), (((/* implicit */short) arr_1 [i_3] [i_3]))))) < (((/* implicit */int) (unsigned short)65535))));
        var_13 = ((/* implicit */unsigned int) arr_3 [i_3]);
    }
    for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((13U), (((/* implicit */unsigned int) (short)-32742))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)16256))))))) : (min((((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (2305843009213693948LL))), (((/* implicit */long long int) arr_15 [i_4 + 2]))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (max((((/* implicit */unsigned long long int) (unsigned short)65529)), (10103331080030873146ULL))) : (((/* implicit */unsigned long long int) 91047366U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18400281160479175405ULL)) && ((_Bool)0))))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (min((91047391U), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16376))))))))));
    }
}
