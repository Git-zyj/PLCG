/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186616
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_2]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) + (((/* implicit */int) max((var_3), (((/* implicit */short) var_10)))))))));
                    var_16 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)0))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) max((((unsigned int) arr_12 [i_0] [i_3 - 2])), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned short)43835)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) : (1266165383U)))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_5]);
                    }
                } 
            } 
        } 
    }
    var_18 |= ((/* implicit */short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) max((var_0), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_9)))))))));
}
