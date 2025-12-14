/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121617
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
    var_18 += ((/* implicit */unsigned char) min((min((((unsigned long long int) (unsigned char)63)), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)191))))) > (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_5))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) max((443419074590242602ULL), ((+(((((/* implicit */_Bool) var_14)) ? (arr_1 [11ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_2])))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) arr_5 [i_0] [i_1] [i_2]))), (min((arr_5 [i_0] [i_0] [i_2]), (arr_1 [i_0 - 1])))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~((-(min((((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_2])), (arr_5 [i_2] [i_2] [i_2]))))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (short)23000)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_8 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((4611686018427387904ULL), (arr_6 [(unsigned char)5] [(unsigned char)5] [i_1] [i_2]))))))))))));
                }
            } 
        } 
    } 
}
