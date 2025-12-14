/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165377
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27888)) ? (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) ? (((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) : (((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) << (((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) - (5636410378376700226LL)))))));
                                var_11 = ((/* implicit */signed char) -1118591653);
                                var_12 |= ((/* implicit */long long int) var_9);
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)293)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_9 [i_0] [i_1] [i_2] [14ULL])))) || (((/* implicit */_Bool) (-(-2221811400007604659LL))))))) / (((/* implicit */int) ((signed char) (signed char)51)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) (signed char)-63);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_7) & (((/* implicit */long long int) arr_10 [i_5])))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)10270)) <= (((/* implicit */int) ((-3627817107074892192LL) <= (1580781090773725994LL))))))) : (((/* implicit */int) var_1))));
        arr_18 [i_5] = ((((int) var_9)) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35414)) ? (-3627817107074892192LL) : (((/* implicit */long long int) var_5)))))))));
        var_15 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -2221811400007604659LL)) || (((/* implicit */_Bool) (unsigned short)55266))))) << (((((8902169319974767559ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))))) - (7480310897602167294ULL)))));
        arr_19 [i_5] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [(short)3] [i_5] [i_5 - 2] [i_5] [i_5] [i_5])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5]))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5])), ((short)-8141)))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8141)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (arr_2 [2LL])));
        var_17 += ((/* implicit */int) arr_5 [i_6] [i_6] [(unsigned short)2] [i_6]);
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [(signed char)12])) ^ (((/* implicit */int) ((var_4) > (((/* implicit */int) (short)18471)))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_12 [(signed char)18] [i_6] [i_6] [(signed char)18] [i_6]))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
    {
        arr_24 [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 1118591652)) ^ (arr_22 [i_7]))) - (((18446744073709551609ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        var_20 = ((/* implicit */unsigned int) 3167261667878239288ULL);
        var_21 = ((/* implicit */signed char) (unsigned short)61490);
    }
}
