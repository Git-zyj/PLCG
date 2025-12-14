/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127991
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (arr_3 [i_0] [i_0])));
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_0 - 1])))) + ((-(arr_0 [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) var_6)) : ((-(var_1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) <= (var_16)))) : (((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) arr_8 [8LL] [i_2]);
        var_21 += ((/* implicit */short) var_4);
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3])))))));
        var_23 = ((/* implicit */unsigned char) (((+(var_6))) - (((/* implicit */int) arr_12 [i_3 + 1]))));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_16))) <= (((/* implicit */int) ((((/* implicit */int) arr_11 [i_4])) > (((/* implicit */int) arr_11 [i_4])))))));
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    {
                        arr_22 [i_6] [i_5] [i_6] [i_4] [i_5] = ((/* implicit */signed char) max((((((/* implicit */int) arr_11 [i_5 - 1])) + (((/* implicit */int) arr_11 [i_5 - 1])))), (((var_5) ? (((/* implicit */int) arr_11 [i_5 - 1])) : (((/* implicit */int) arr_11 [i_5 - 1]))))));
                        arr_23 [i_7] [i_7] [i_7 + 1] [i_5] = ((/* implicit */short) (!(((((/* implicit */int) ((((/* implicit */int) arr_21 [i_4] [i_4] [i_6] [i_4] [i_5] [i_6])) < (var_6)))) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_4] [i_4] [i_4] [i_6] [i_5] [i_5])), (arr_11 [i_5]))))))));
                    }
                } 
            } 
        } 
        arr_24 [i_4] [i_4] = ((/* implicit */_Bool) var_3);
    }
}
