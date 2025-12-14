/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114168
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)10172))))), (((((/* implicit */_Bool) (unsigned char)146)) ? (-4077294694058845584LL) : (-4594434315119440117LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((var_12), (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) -93003523)) ? (1078531683471012132ULL) : (((/* implicit */unsigned long long int) -93003515)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((((/* implicit */_Bool) var_2)) || (var_8))))))) : ((-(((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))) : (3826718369U)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((var_1), (((/* implicit */int) var_6))))))) ? ((+(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) var_1)))))) : (min((min((((/* implicit */unsigned long long int) var_10)), (var_12))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
                        arr_17 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */short) min((((/* implicit */int) (signed char)-28)), (-93003523)));
                    }
                } 
            } 
            var_14 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~((-(-2930502753308618025LL)))))) | (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_4))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_1))))))));
        }
        arr_18 [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) | (var_3))) : (((/* implicit */unsigned long long int) (~(3104372583532753505LL)))));
    }
    var_15 ^= ((/* implicit */long long int) var_2);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_11))))) ? (((var_4) | (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) : (max((((/* implicit */int) var_11)), ((~(var_1)))))));
}
