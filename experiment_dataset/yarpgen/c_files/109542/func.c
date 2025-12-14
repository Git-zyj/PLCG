/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109542
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((18446744073709551608ULL) <= (((/* implicit */unsigned long long int) 4294967284U))));
                        var_11 &= max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) -3LL)))))), ((-(((9194111704471589085LL) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_5 [(unsigned short)8] [i_0] [i_0] [i_0]) : (9194111704471589085LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), ((unsigned short)53228))))) : (max((2964944547U), (((/* implicit */unsigned int) (unsigned short)50727))))));
        var_13 = ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((var_7) / (var_6)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)18870)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (1781688308))))))));
    var_15 = ((/* implicit */unsigned char) var_8);
}
