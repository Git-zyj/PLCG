/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177073
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_17 -= ((/* implicit */short) ((unsigned char) ((_Bool) var_0)));
            var_18 = ((/* implicit */_Bool) var_6);
            var_19 -= ((/* implicit */signed char) var_1);
        }
        var_20 = ((/* implicit */unsigned long long int) arr_3 [4U] [4U]);
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_9))));
        arr_6 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */int) arr_0 [i_2] [i_2])) - (((/* implicit */int) arr_0 [i_2] [i_2])))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_2 [i_2])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_9)))));
        arr_10 [i_3] = ((/* implicit */unsigned short) arr_3 [i_3] [i_3]);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            for (signed char i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                {
                    arr_21 [i_5] [i_5 - 2] [i_5] = ((/* implicit */unsigned short) -1589909404);
                    var_23 = ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) -1589909434)), (arr_7 [i_5])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4 + 1])) >> (((((/* implicit */int) arr_16 [i_4 + 2])) - (61024)))))));
                    var_24 -= ((/* implicit */_Bool) var_3);
                    var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5] [i_4])) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */int) ((1589909403) != (((/* implicit */int) arr_13 [i_4] [i_4 + 2]))))) >> (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_10))))))));
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_17 [i_4] [i_6 + 2] [i_6] [(unsigned short)7]))) ? (((/* implicit */int) ((signed char) arr_15 [i_5] [i_4] [i_5]))) : (max((((/* implicit */int) arr_17 [i_4] [i_6 + 1] [i_4] [i_5])), (arr_15 [i_5] [i_5] [i_5])))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_4);
}
