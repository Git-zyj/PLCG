/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153223
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)77)))), (((/* implicit */int) arr_1 [i_0]))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9951)) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1])))))) : (min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (var_8)))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_0 [i_0])), (var_1))), (((/* implicit */unsigned int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))));
                arr_6 [i_0] [5] = ((/* implicit */unsigned int) arr_1 [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) (signed char)44)) ? (3291897074U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (short)-14681))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) + (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_8))))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (unsigned short)62444)) ? (1003070222U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    var_16 *= ((/* implicit */unsigned int) ((max((var_8), (((/* implicit */long long int) var_5)))) >> (((min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) 1003070244U)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551602ULL))))) - (4257692273ULL)))));
    var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) (_Bool)1))))) != (var_7))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_3 [i_2] [i_3]);
                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((arr_8 [i_2] [i_3]), (((/* implicit */long long int) arr_12 [i_3] [i_2])))) << (((((/* implicit */int) arr_1 [i_2 + 1])) - (192)))))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_12 [i_2] [i_3]))))) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_2])) : (arr_13 [i_3]))) : ((+(((((/* implicit */_Bool) var_13)) ? (arr_2 [i_2] [(unsigned short)9]) : (((/* implicit */int) (short)-9952))))))));
                var_20 = ((/* implicit */unsigned short) max(((unsigned char)64), (((/* implicit */unsigned char) (_Bool)1))));
                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3 - 2] [i_2 - 1])) << (((/* implicit */int) arr_12 [i_3 + 1] [i_2 + 1]))))) || (max((arr_12 [i_2 + 1] [i_3]), (arr_12 [i_2 - 1] [(unsigned short)5])))));
            }
        } 
    } 
}
