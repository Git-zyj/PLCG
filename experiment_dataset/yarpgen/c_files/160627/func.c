/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160627
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) var_11)) : ((~(arr_3 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_2 [i_1]))))))))));
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) arr_1 [i_0]);
                var_14 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_1))) - (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) + (-1047857463)))))));
    var_16 = ((/* implicit */_Bool) (-(var_9)));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_2 + 1])), (min((16U), (((/* implicit */unsigned int) var_5))))))) * ((+(18446744073709551615ULL)))));
        var_18 *= ((/* implicit */unsigned int) max((((_Bool) var_9)), (((((/* implicit */_Bool) 18276822524057599469ULL)) && (((/* implicit */_Bool) -1LL))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((min((var_7), (((/* implicit */short) (_Bool)1)))), (arr_4 [i_2] [i_2 + 2])))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_0 [i_2])) ? (-1047857463) : (((/* implicit */int) arr_2 [i_2])))))) - ((+(((/* implicit */int) var_7))))));
    }
}
