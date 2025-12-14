/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142689
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
    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) (short)-13307)));
    var_20 = ((/* implicit */_Bool) -731099208);
    var_21 = ((/* implicit */int) min(((~(2406733257659091442LL))), (((/* implicit */long long int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned short) 731099207)))));
        var_23 = ((/* implicit */short) ((unsigned short) 3217510459U));
    }
    for (short i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_24 = max(((-(min((731099207), (-731099202))))), (731099207));
            var_25 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) 352306373)), (5311742990457925139ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 731099215)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) 1366305356)), (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)166)))))), (((/* implicit */long long int) (~((-(((/* implicit */int) (short)21675)))))))));
                        var_27 = ((/* implicit */short) ((_Bool) -876924717));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) -2082448728))));
                        arr_16 [i_4] [i_3] [i_2] [i_1] &= ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                        var_29 = ((/* implicit */int) ((short) (unsigned char)99));
                    }
                } 
            } 
        }
        arr_17 [i_1] = ((/* implicit */unsigned int) min((((long long int) 1077456836U)), (((/* implicit */long long int) (signed char)127))));
        arr_18 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) 365710468))), ((-(((long long int) 14645338820443952028ULL))))));
        arr_19 [i_1] = ((/* implicit */short) max(((~(10877864753774011761ULL))), (((/* implicit */unsigned long long int) 1875910018U))));
    }
}
