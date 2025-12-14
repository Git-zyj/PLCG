/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145831
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 1])) + (14246))) - (17)))))));
        var_15 -= ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (7272540843850465406LL)))) ? (((((/* implicit */_Bool) 7272540843850465421LL)) ? (-7272540843850465407LL) : (9223372036854775807LL))) : (var_5)))));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_17 |= ((/* implicit */int) var_10);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_18 &= (+(((((8282073959696033502ULL) >= (((/* implicit */unsigned long long int) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18810)) ? (((/* implicit */int) arr_7 [i_1])) : (arr_6 [i_1])))) : (min((4867400595403136330LL), (((/* implicit */long long int) var_1)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (int i_4 = 3; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) arr_7 [18U]);
                        arr_15 [i_1] [i_2] [i_2] = ((/* implicit */short) 0);
                        var_20 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_10 [i_1])))), (((/* implicit */int) min((var_3), (((/* implicit */short) (unsigned char)110)))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((20), (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_3] [i_4])))) : (((/* implicit */int) (unsigned char)110)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)0)))))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_11 [(unsigned char)0] [i_1])), (max((((var_2) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */long long int) arr_5 [10] [i_1]))))));
        var_23 += ((/* implicit */int) max((((unsigned long long int) arr_11 [i_1] [i_1])), (((/* implicit */unsigned long long int) (unsigned char)91))));
    }
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (min((var_5), (((/* implicit */long long int) (signed char)23)))))))));
}
