/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112218
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((min(((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)30451)))), (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((signed char) 6053629927670531904ULL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)21186)) ^ (((/* implicit */int) (unsigned short)12176))));
                    var_17 |= ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */int) max((arr_4 [i_2 - 1] [i_1]), (arr_4 [i_2 + 1] [i_1])))) : (((/* implicit */int) max(((unsigned char)114), (((/* implicit */unsigned char) arr_4 [i_2 + 1] [i_0])))))));
                }
            } 
        } 
        var_18 &= ((/* implicit */unsigned char) min(((short)-6638), (((/* implicit */short) (unsigned char)209))));
        arr_9 [i_0] [12LL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))) < (1231115048U)))) <= (((/* implicit */int) (_Bool)1))));
        arr_10 [(short)12] &= ((/* implicit */signed char) (~(((/* implicit */int) (short)-10176))));
    }
    var_19 = ((/* implicit */short) var_11);
    var_20 = ((/* implicit */unsigned int) var_1);
}
