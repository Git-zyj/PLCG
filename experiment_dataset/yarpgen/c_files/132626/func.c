/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132626
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_1 [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0] [i_0]))) : ((-(var_14)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (-469179340) : (((/* implicit */int) max(((short)-32761), (arr_3 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) (~(max((var_13), (((/* implicit */unsigned long long int) arr_9 [i_2]))))))) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_14 [i_3] [i_2])));
                        arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) & (((/* implicit */int) max((var_12), (((/* implicit */short) arr_11 [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)10] [i_0]))))))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((((var_2) - (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_10))))))), (((/* implicit */long long int) (((-(var_6))) + (((((/* implicit */int) var_8)) + (((/* implicit */int) var_1)))))))));
}
