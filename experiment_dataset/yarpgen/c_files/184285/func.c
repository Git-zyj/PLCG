/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184285
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((13888397231350950666ULL) << (((13888397231350950667ULL) - (13888397231350950625ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_9), (((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (var_2))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))));
                                arr_14 [i_3] [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_6))))) ? (max((var_5), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_7))))) : (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_10)))))) ? ((-(((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_7)) - (19394)))))) ? (((long long int) var_0)) : (((/* implicit */long long int) (-(var_1)))))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */signed char) min((1663961690263139701LL), (-2223037261125144048LL)));
        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) var_2))) ? (var_8) : (((/* implicit */int) var_7)))) / (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) var_6))))) : ((+(((/* implicit */int) var_7))))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) var_6))))) ? (((int) var_4)) : ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_0))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) min((min((((/* implicit */long long int) var_10)), (var_9))), (((var_6) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
}
