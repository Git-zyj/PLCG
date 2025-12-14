/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165543
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_11 = ((/* implicit */int) min((var_11), (((((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_0 [i_0]))))) <= (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(unsigned short)4]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_0 [4LL]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)47437))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)38805)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_4 [i_1]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-122))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) -749864996)) : (var_4)))));
            arr_10 [i_1] [i_2] = ((/* implicit */_Bool) ((int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) (short)-30298)) ? (2720897061661545644LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_11 [i_1] = ((/* implicit */short) (signed char)53);
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) 1013688078U)) ? (-2147483640) : (((/* implicit */int) (short)(-32767 - 1))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1]))))) >= (((/* implicit */int) ((unsigned short) var_8)))));
    }
    var_15 = var_5;
}
