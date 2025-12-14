/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1406
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(-1LL)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)-3391)) : (var_0)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22)))))) >= (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */unsigned int) (unsigned short)52128)), (2265060331U)))));
        var_17 = ((/* implicit */unsigned char) max((var_17), ((unsigned char)2)));
        arr_3 [2] [i_0] = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)))) ? (((/* implicit */int) (short)-25627)) : (((max((((/* implicit */int) var_3)), (var_0))) >> (((((/* implicit */int) var_8)) - (152))))))))));
    var_19 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_3] = ((/* implicit */signed char) ((((unsigned int) arr_7 [i_1] [i_1 - 1])) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)52134)))))));
                    arr_13 [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)13396)) : (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1 + 1]))))) ? ((~(((/* implicit */int) arr_10 [i_1 - 3] [i_1] [i_1 - 3])))) : ((~(((/* implicit */int) (short)6301)))));
                }
            } 
        } 
    } 
}
