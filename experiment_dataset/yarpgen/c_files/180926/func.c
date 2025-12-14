/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180926
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
    var_14 = ((/* implicit */int) min((var_14), ((-((-(((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */int) min((var_15), (var_13)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~(max((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) 5566395243031243744ULL)) ? (arr_0 [(unsigned short)4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_3 + 2] [i_2 - 1] [i_1 + 1])), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3 + 2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 1] [i_3 + 1] [i_3])) : (((/* implicit */int) (short)(-32767 - 1))))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((arr_7 [i_3] [i_1] [i_0]) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_1 - 1] [i_0]))))))) ? (((/* implicit */int) max((min((var_10), (((/* implicit */unsigned char) var_6)))), (((/* implicit */unsigned char) arr_7 [i_3 - 1] [i_2 - 1] [i_1]))))) : (arr_3 [i_3] [i_2])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) 1576948417U);
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : ((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_18 = ((/* implicit */unsigned char) max((((((((/* implicit */int) var_9)) & (((/* implicit */int) var_6)))) > (((/* implicit */int) max((((/* implicit */short) var_10)), (var_4)))))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7))))))));
}
