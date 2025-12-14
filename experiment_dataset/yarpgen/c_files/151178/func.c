/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151178
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
    var_14 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) var_1);
        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))) - (((/* implicit */int) arr_2 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_3])) | (((/* implicit */int) arr_10 [i_3]))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_18 |= ((/* implicit */unsigned short) arr_0 [i_3]);
            arr_15 [i_3] [i_4] = ((/* implicit */unsigned char) (~(arr_14 [i_4] [i_3] [i_3])));
            arr_16 [i_4] [(unsigned char)8] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned short) 4294967295U);
                        arr_24 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned short) ((((var_8) >= (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7U)))))) : (var_0)));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (arr_18 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_3 [i_7 + 1] [i_7 - 1] [i_7]))));
            var_21 -= ((/* implicit */long long int) ((unsigned char) arr_11 [i_7 - 1] [i_7 + 1]));
        }
        arr_28 [i_3] = ((/* implicit */unsigned short) arr_19 [3] [3] [i_3]);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_3] [i_3])) >> (((((/* implicit */int) arr_22 [i_3] [i_3])) - (130)))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_10);
    var_24 = ((/* implicit */unsigned char) min((min((max((var_11), (((/* implicit */int) var_4)))), (var_10))), (((/* implicit */int) var_4))));
}
