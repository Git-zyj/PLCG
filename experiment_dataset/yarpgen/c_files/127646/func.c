/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127646
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(unsigned short)15] = var_11;
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_0 [(signed char)6] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_10)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((((/* implicit */int) arr_0 [i_0] [i_0])) / (var_0))))) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0 - 2] = ((/* implicit */signed char) var_0);
        var_12 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(8808931771443192940ULL)))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (signed char)103)) - (72)))))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((arr_6 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_1 [i_1])))));
            var_15 = arr_0 [i_1] [i_2];
        }
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_13 [i_3 + 1])))));
        var_17 ^= ((/* implicit */unsigned char) (((((-(var_10))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1])) > (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1])))))));
        arr_14 [(unsigned char)18] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3] [15U]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_15 [i_4])))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (short)-3081)) : (0)));
    }
    var_19 = ((/* implicit */unsigned char) ((long long int) -321010266));
    var_20 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_3)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) -355188393)) ? (((/* implicit */long long int) var_0)) : (2167321091051120428LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-102))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27213))) : (990391810U)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) 5999223461933994189ULL))))));
}
