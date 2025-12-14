/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123482
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_7))));
    var_14 = ((/* implicit */unsigned long long int) ((long long int) var_8));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_15 += ((/* implicit */unsigned short) arr_6 [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((max((var_12), (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-19465), (((/* implicit */short) arr_0 [i_0]))))))))));
                            arr_15 [i_4] [i_3] [i_2] [i_3] [10] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) && (((/* implicit */_Bool) (~(max((((/* implicit */int) var_9)), (arr_13 [i_1] [i_2] [i_4]))))))));
                            arr_16 [(short)0] [(unsigned short)16] [(unsigned short)16] [(_Bool)1] [(short)10] [(_Bool)0] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) - (((((((/* implicit */int) arr_6 [i_4])) < (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1])))) : (((/* implicit */int) max((arr_10 [8]), ((unsigned short)36762))))))));
                            arr_17 [(unsigned short)9] [(unsigned short)9] [i_4] [i_4] [i_3] = max((((/* implicit */unsigned short) ((short) arr_10 [i_3]))), (arr_1 [i_2 - 1]));
                        }
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */int) ((short) ((_Bool) max((arr_5 [i_0]), ((short)-17686)))));
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = var_6;
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_13 [(signed char)7] [i_6] [i_7]) : (((/* implicit */int) (short)-5249)))))));
                    var_18 += ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)26696)) && (((/* implicit */_Bool) var_6)))));
                }
            } 
        } 
        var_19 = var_7;
    }
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_8] [16] [(short)6]))))), (arr_13 [i_8] [i_8] [i_8])));
        arr_29 [i_8] = ((/* implicit */_Bool) arr_4 [i_8] [18] [i_8]);
    }
    var_21 = ((/* implicit */signed char) ((short) var_2));
}
