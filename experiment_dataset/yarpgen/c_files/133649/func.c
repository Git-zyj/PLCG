/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133649
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1337401579)) && (((/* implicit */_Bool) (short)27882))));
        arr_3 [i_0] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21599))))) ? ((-(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    var_18 |= ((/* implicit */unsigned long long int) arr_5 [i_3]);
                    arr_13 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-13557))));
                    var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_16 [i_4] [12ULL] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((10114501569563252354ULL) <= (((unsigned long long int) var_16)))))) >= (min(((-(3277025520U))), (((/* implicit */unsigned int) arr_0 [i_2] [i_2]))))));
                        arr_17 [i_3 + 1] [(signed char)0] = ((/* implicit */unsigned short) var_7);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43920)) / (((/* implicit */int) (unsigned short)44482))))) ? (((/* implicit */int) arr_20 [i_5] [(short)17] [i_6 + 2])) : (1337401575))) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_6 + 1] [i_6] [i_6 - 1])), ((unsigned short)39044))))));
                arr_22 [10U] = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_6])) <= (((/* implicit */int) arr_18 [i_6 - 1]))));
            }
        } 
    } 
}
