/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142668
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((18U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11)))))), (var_1)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_7))))));
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)46445))))) && (((/* implicit */_Bool) (+(var_7)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))))) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_0])))), (((((((/* implicit */int) (short)-512)) + (2147483647))) << (((((/* implicit */int) (short)511)) - (511))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_0))))) == (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_10))))))));
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16345216640125177770ULL)) ? (((/* implicit */int) (signed char)15)) : (((((/* implicit */_Bool) 16345216640125177756ULL)) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)255))))))));
            arr_5 [(signed char)1] = ((/* implicit */short) min((max((((/* implicit */long long int) max((var_9), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)500))) : (9223372036854775807LL))))), (((/* implicit */long long int) ((unsigned short) ((unsigned char) var_8))))));
        }
        arr_6 [2ULL] [i_0] = ((/* implicit */short) (~(max((var_7), (max((var_4), (((/* implicit */long long int) (short)511))))))));
        var_17 ^= ((((/* implicit */_Bool) (~((+(1673033938756924777LL)))))) ? (((/* implicit */int) ((unsigned char) ((unsigned long long int) (_Bool)1)))) : ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
    }
}
