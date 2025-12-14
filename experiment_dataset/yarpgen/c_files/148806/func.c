/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148806
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58500)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62854)))))) && (((/* implicit */_Bool) min((4333220478962261587ULL), (((/* implicit */unsigned long long int) (unsigned short)3)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)11168))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -877593235))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)229)), ((unsigned short)41014))))))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 2] [(unsigned short)12] [i_2 - 2])) ? (arr_2 [i_1 + 1] [(unsigned char)11] [i_2 + 2]) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)221);
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1742816663)) || (((/* implicit */_Bool) (unsigned char)235)))))))) != (((long long int) (~(var_11))))));
    var_21 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (unsigned short)38478)) ? (-3669048583936458653LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) && (((/* implicit */_Bool) var_9))))))))));
}
