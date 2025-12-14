/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168892
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 *= min((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0])) ? ((-(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [(unsigned char)17] [i_1 + 4]))))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1 + 3] [i_1 - 1] [i_1 + 2]))))))));
                var_13 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) * (1563202249U)))) ? (((/* implicit */int) (unsigned short)41987)) : (((((/* implicit */_Bool) (short)32324)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)109))))))) ? ((-(min((((/* implicit */unsigned long long int) var_2)), (var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 3]))) & (((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1]))) : (var_10))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_6), (min((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4095439948075260341ULL))), ((~(8272478080924652828ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (arr_1 [i_2 + 2] [i_2 - 1])));
        arr_10 [i_2 + 1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2]))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned long long int) 4294967286U)) : (var_6)));
        var_17 -= ((/* implicit */short) (+(arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 2])));
        arr_11 [i_2] [i_2 - 1] |= ((/* implicit */unsigned char) 13358146819504984349ULL);
    }
    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        var_18 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [(unsigned char)8] [(unsigned short)8]))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (max((var_10), (((/* implicit */unsigned long long int) arr_5 [i_3 - 2] [i_3 - 2] [i_3]))))))));
        var_19 = ((/* implicit */unsigned char) arr_2 [i_3] [i_3] [(unsigned char)8]);
        arr_15 [i_3] = ((/* implicit */int) (-(((5022102034483711832LL) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1] [i_3])))))));
        arr_16 [i_3] [i_3] = (+(((/* implicit */int) (signed char)12)));
    }
    var_20 = ((/* implicit */long long int) var_2);
}
