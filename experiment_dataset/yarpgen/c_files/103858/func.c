/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103858
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)110)), (((long long int) var_10))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) (unsigned char)157))))) ? (((/* implicit */int) ((unsigned short) 1160179637))) : (((/* implicit */int) (unsigned char)99))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [(unsigned char)4] = ((_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (-1731387598330526965LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_18 ^= ((/* implicit */int) ((((_Bool) 3071673544300862451ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (-7747692301473440108LL)));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_5))));
            arr_5 [2] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -227349871)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])) : (((((/* implicit */int) (unsigned short)17873)) >> (((((/* implicit */int) ((short) arr_4 [i_0 + 1]))) - (214)))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0 - 2] &= var_15;
                        arr_12 [i_0] [8LL] [i_2] &= ((/* implicit */signed char) var_8);
                        arr_13 [(short)0] [i_3] [(unsigned short)3] [i_2] [4] [i_0] = ((/* implicit */short) arr_10 [i_0 - 1] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            arr_18 [i_0] [i_4] = ((/* implicit */short) ((signed char) ((signed char) 2458100439U)));
            var_20 = ((/* implicit */int) var_9);
        }
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) var_4);
        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
