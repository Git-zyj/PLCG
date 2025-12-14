/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134483
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
    var_19 = ((/* implicit */unsigned long long int) var_17);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (max((var_18), (((/* implicit */unsigned int) var_13))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [i_0] [i_0])) << (((var_3) + (8494564981057755916LL)))))))) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) var_15)))) : (((int) min((3189955094U), (((/* implicit */unsigned int) (_Bool)1)))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned char)113))));
        var_23 |= var_15;
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((var_14) < (((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 - 2])) ? (arr_5 [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1 + 4] [i_1 - 1]))))))));
        arr_8 [i_1] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1])) << (((/* implicit */int) arr_4 [i_1] [i_1 - 1]))))) ? (var_14) : ((+(((int) arr_1 [(unsigned char)16]))))));
    }
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(var_3)))))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) : ((~(arr_3 [i_3] [i_2 + 3])))))));
            arr_14 [i_2 - 2] [i_3] [i_2 + 4] = ((/* implicit */unsigned long long int) var_0);
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 1919802077))));
        }
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2]))));
    }
}
