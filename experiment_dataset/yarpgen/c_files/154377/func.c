/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154377
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12072949053857357762ULL)) ? (99126523639710759ULL) : (((/* implicit */unsigned long long int) 7068309655770578092LL))));
    var_16 = (((+(((/* implicit */int) ((signed char) 448683171))))) / (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_1))) : (((/* implicit */int) ((signed char) 454186811))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((int) var_11)), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12)))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_1] [i_3] = ((((/* implicit */_Bool) max((-673197092), (((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_2] [i_3 - 1]))) - (arr_5 [i_1 + 1] [i_1 - 3]))) : (((/* implicit */long long int) ((((2147467264) == (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_4)) : (arr_2 [i_0])))));
                        arr_12 [i_3] [i_3] [14] [i_3] = ((/* implicit */unsigned char) (+(((long long int) ((int) var_11)))));
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_5)))))) : (arr_8 [i_1])));
                    }
                } 
            } 
        } 
    }
}
