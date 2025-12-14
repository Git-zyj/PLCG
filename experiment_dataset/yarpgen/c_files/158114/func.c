/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158114
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) - (((((/* implicit */_Bool) 1892823910573682730ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (33554368U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) min((-2143779280), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)60422)) ? (5549527361086735770LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((var_10) ? (((/* implicit */long long int) var_3)) : (-5549527361086735771LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1 + 2] [i_1 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_2] [(unsigned short)13] [i_2]), (arr_9 [i_2] [i_1] [i_2])))) ? (((var_7) & (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (5549527361086735771LL)))))));
                    var_14 += ((/* implicit */long long int) 1130521251U);
                    var_15 += ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0] [i_1 - 1])), (((((/* implicit */int) arr_4 [6ULL] [i_1 - 1])) / (((/* implicit */int) arr_4 [1ULL] [i_1 - 1]))))));
                    var_16 *= ((/* implicit */unsigned long long int) var_12);
                    arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))) + (((((/* implicit */_Bool) var_4)) ? (13649115155150986016ULL) : (((/* implicit */unsigned long long int) arr_5 [(unsigned char)7])))))) ^ (((/* implicit */unsigned long long int) (-(((((-5549527361086735792LL) + (9223372036854775807LL))) >> (((arr_8 [i_0] [i_0]) + (467940111))))))))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned int) var_11);
        var_18 = -5549527361086735770LL;
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */int) var_10))))) ? (((var_4) ^ (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)14]))) + (arr_9 [(_Bool)1] [i_0] [i_0]))))))))));
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_3)) ? (var_3) : (var_4))))))))));
    var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_4)) <= (var_7))) ? (var_7) : (var_9))) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) var_5)))))));
}
