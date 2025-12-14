/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142883
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
    var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((((/* implicit */unsigned int) 42239784)) % (703393794U)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) min((max((min((((/* implicit */int) (short)7974)), (0))), (((/* implicit */int) arr_9 [i_2 + 1] [i_3 - 2] [i_2 - 4] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_1 [i_2] [i_2])))) && (((/* implicit */_Bool) arr_9 [i_0] [7U] [i_0] [4ULL])))))));
                        var_13 = ((/* implicit */signed char) -697403166);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-13090)), (max((var_1), (((/* implicit */unsigned short) (short)7962)))))))));
        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), ((-(((/* implicit */int) (signed char)127))))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_2 [i_0])))) + (2147483647))) << (((((((/* implicit */int) arr_0 [17U])) + (13441))) - (7)))));
        arr_12 [i_0] = ((/* implicit */unsigned int) (unsigned char)144);
    }
}
