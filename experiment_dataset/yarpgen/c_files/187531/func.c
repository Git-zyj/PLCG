/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187531
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_9)), (var_7)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = -256071569;
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) 256U))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (~(arr_1 [19ULL] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)222)))))))));
    }
    var_13 = (unsigned char)77;
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (-(max(((+(((/* implicit */int) (unsigned char)89)))), (((/* implicit */int) var_10))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 7; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_4]), (arr_0 [i_4 - 1])))) ? (((/* implicit */int) arr_7 [i_4 + 1])) : (((/* implicit */int) arr_7 [i_4 + 1]))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((arr_2 [i_2 - 1] [i_2 + 3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 4])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 3])) >= (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1]))))))))));
                        arr_15 [i_4] [i_3] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)16865)), (arr_10 [i_1] [1U] [(_Bool)1])));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned char) max((arr_11 [i_1] [i_1] [2]), (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)49769))))) != (arr_1 [(unsigned char)16] [i_1])))));
    }
}
