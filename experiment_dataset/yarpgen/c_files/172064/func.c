/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172064
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
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) var_8))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_8 [(unsigned short)0] [6LL] [i_1] = ((/* implicit */long long int) ((signed char) var_11));
            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) 4294967294U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13)))));
        }
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-51)) <= (((/* implicit */int) var_9))))) : (((/* implicit */int) (unsigned char)255))));
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_1)) : (var_13)));
        var_22 = ((/* implicit */unsigned long long int) (-(var_11)));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */short) var_8);
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_10)) << (((var_13) - (495098674399564902LL))))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-110))))) : (var_2)));
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_15 [7LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) -7491693889612250805LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4784))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_2)))));
    }
}
