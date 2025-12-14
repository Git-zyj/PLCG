/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133916
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
    var_11 = ((/* implicit */long long int) ((short) 9186274018419968127ULL));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = var_1;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [(short)12] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11524043545697279533ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [14ULL] [i_2]))) : (var_10)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_12 += ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_4]);
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3658884797U))))));
                }
            } 
        } 
    }
}
