/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164230
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62256))))) - (max((4128770444444189893LL), (((/* implicit */long long int) arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0] [i_0] &= ((/* implicit */int) ((((((((/* implicit */_Bool) var_9)) && (var_4))) && (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0]))))))) || (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-1)), (var_9)))) && (((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (2147483647)));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (704793354) : (((/* implicit */int) (short)-3))))) : ((-(var_7)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)2))));
        var_14 = ((/* implicit */int) ((_Bool) arr_0 [i_2 - 1]));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_5))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_20 [i_3] [i_4] = ((arr_18 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) & (((((/* implicit */_Bool) arr_19 [i_3] [i_4] [12U])) ? (2147483647) : (((/* implicit */int) (short)(-32767 - 1))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32765))) + (arr_19 [(unsigned short)5] [i_3 - 1] [i_3 - 1])));
                }
            } 
        } 
        arr_21 [i_3] = ((/* implicit */short) (signed char)-121);
    }
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            {
                arr_28 [i_6] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_19 [(short)16] [i_7] [i_6 - 1]) <= (arr_10 [i_6]))))));
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 4LL))) || (((/* implicit */_Bool) arr_16 [i_6] [21ULL] [i_6 + 1]))));
            }
        } 
    } 
}
