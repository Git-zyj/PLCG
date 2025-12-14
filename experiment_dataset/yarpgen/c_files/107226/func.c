/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107226
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
    var_13 += max((max((((/* implicit */unsigned int) 696480056)), (((1126785862U) % (1976592401U))))), (min((((var_3) ? (3168181434U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((_Bool) var_1))))));
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) (unsigned char)0);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_12))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) - (4780304343885867726ULL)))))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-25302))))))));
            var_16 = ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) (short)-25298)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17900))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) (-((~(min((((/* implicit */long long int) var_12)), (122714053325799615LL)))))));
        var_17 += ((/* implicit */short) ((signed char) (((-(((/* implicit */int) arr_7 [i_2 - 1])))) - (((/* implicit */int) max((var_9), (var_2)))))));
    }
}
