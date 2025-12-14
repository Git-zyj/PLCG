/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106118
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
    var_11 = var_1;
    var_12 = var_3;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) 8387878459542437672ULL);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                var_13 ^= ((/* implicit */unsigned int) 3672133285136407570ULL);
                arr_11 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) 3277625875U)) : ((~(((((/* implicit */_Bool) var_3)) ? (arr_9 [i_0] [i_1] [i_2]) : (353793848780756351ULL))))));
            }
        }
        var_14 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((6095090469475995390ULL) >> (((13293695094215482257ULL) - (13293695094215482222ULL))))))));
    }
}
