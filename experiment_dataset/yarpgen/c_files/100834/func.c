/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100834
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) arr_3 [i_1])), (((((/* implicit */_Bool) 18235730116605735628ULL)) ? (2489485083655669858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175)))))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(arr_4 [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-18044)) && (((/* implicit */_Bool) (short)14716)))))) - (((unsigned int) var_11))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [2] [(signed char)21] [13U])))))))) * ((+(((/* implicit */int) (short)-12086))))));
                arr_13 [i_2] [i_2] [i_3] = ((/* implicit */signed char) max((((int) (!(((/* implicit */_Bool) (short)12086))))), (((/* implicit */int) arr_7 [i_2] [i_3]))));
                arr_14 [(short)12] [12] [7U] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)162)), (1348659520)));
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_11 [i_2] [i_3]);
                arr_16 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2] [7]))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2] [i_2])))))));
            }
        } 
    } 
}
