/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133048
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [8LL] [(signed char)13] [(unsigned char)10] [15U] [15U] [4U] [4U] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)28614)))) < (((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (signed char)127))))) / (max((((/* implicit */unsigned long long int) arr_7 [(unsigned short)18] [15LL] [15LL] [15LL])), (14335128493973488710ULL)))))));
                                var_18 += ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (arr_5 [i_0]) : (var_6)))))));
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) != (var_8))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_6)))) < (18446744073709551584ULL)))) : (((int) (signed char)7))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_15)))) + (2147483647))) >> (((((/* implicit */int) var_0)) - (36881)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 + 1])) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) var_16)), (arr_12 [(unsigned char)0] [(unsigned char)9] [12ULL] [i_2 + 2] [i_2 - 2] [(_Bool)1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        var_21 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned short)6)) & (2147483647))));
        var_22 = ((/* implicit */short) (unsigned char)255);
    }
    var_23 = ((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_7))));
}
