/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18376
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
    var_11 = ((/* implicit */unsigned char) (+(var_6)));
    var_12 &= ((/* implicit */short) min((((((/* implicit */_Bool) 6516154921120362598ULL)) ? (min((6516154921120362598ULL), (11930589152589189017ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))))), (var_5)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                    arr_9 [(unsigned char)7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_5 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_2] [(short)9])) ? (((/* implicit */int) arr_3 [i_0])) : ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)46))))));
        arr_14 [i_3 - 1] = ((/* implicit */unsigned long long int) arr_11 [(short)8] [(short)8]);
        arr_15 [i_3 - 1] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3])) : (((/* implicit */int) var_3)))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] |= ((/* implicit */unsigned int) arr_18 [i_4 - 1]);
        arr_21 [i_4] [i_4] |= ((/* implicit */short) arr_17 [i_4]);
    }
}
