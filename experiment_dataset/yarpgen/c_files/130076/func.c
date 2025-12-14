/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130076
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((int) var_17)) - (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (unsigned short)7545)) : (1180614675)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_7 [(short)10] [i_1] [i_0]))))) ? (((arr_9 [i_0] [i_1] [i_3] [(unsigned char)3]) << (((var_11) - (3510920313U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1180614676)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) min((arr_7 [i_3] [i_3 + 1] [i_1 + 1]), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) 1540138040U)) ? (((unsigned long long int) 8184)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1256464554)) ? (((/* implicit */unsigned int) 1256464553)) : (4294967295U)))))));
                        arr_13 [i_3] [i_2] [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_4 [i_1 - 1] [i_2] [i_3])))) / (((((/* implicit */_Bool) ((int) (unsigned char)113))) ? ((~(1180614675))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))))))));
                    }
                } 
            } 
        } 
        arr_14 [0U] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)17))))), (var_13))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
    }
}
