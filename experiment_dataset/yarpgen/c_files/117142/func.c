/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117142
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)58))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)118)), (13209706U))))))));
        var_14 = ((/* implicit */unsigned int) ((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_3)))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(13209685U))))));
        var_15 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)7607)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) 1234295372U)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_12)) : (13986216312834946366ULL)))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)190))))), ((+(arr_0 [i_0] [(short)3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) <= (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) (short)28101))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_12 [i_1] [(short)14] [i_2] [(signed char)6] [i_1 - 1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2]))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_4] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_11);
}
