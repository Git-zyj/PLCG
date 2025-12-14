/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119853
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((arr_3 [i_0]), (2559286441U)))) ? (max((((/* implicit */unsigned int) -246876610)), (2559286454U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
        var_12 = ((/* implicit */long long int) min((var_12), (min((4636841003482828306LL), (((/* implicit */long long int) (unsigned char)68))))));
        arr_4 [i_0] = max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (arr_1 [i_0] [i_0])))))), (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 880759590921250440LL)) ? (arr_1 [(_Bool)1] [i_0]) : (((/* implicit */long long int) 246876625))))))));
        arr_5 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_13 = (+(((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) -246876605)))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) min((14924283213421080887ULL), (((/* implicit */unsigned long long int) 344776903U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) / (max((((/* implicit */long long int) 3400453646U)), (arr_0 [i_1]))))) : (((long long int) (unsigned char)1))));
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [5]))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        var_16 = ((/* implicit */long long int) (unsigned char)216);
    }
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (+(((arr_11 [i_2 - 2]) - (-246876628)))));
                    arr_15 [i_2] [i_2 + 2] [i_2 - 2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((unsigned long long int) (short)30766))))));
                    arr_16 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 1735680841U)) ? (min((((/* implicit */unsigned long long int) (+(arr_13 [i_2] [i_3 + 1] [i_3] [i_4])))), (min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_2 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (2559286443U) : (((/* implicit */unsigned int) 324592853))))) : (max((((/* implicit */long long int) var_3)), (var_6))))))));
                }
            } 
        } 
    } 
}
