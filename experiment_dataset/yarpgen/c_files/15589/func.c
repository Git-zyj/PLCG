/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15589
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_1] [i_2 + 1] [(short)9] = ((short) ((((((/* implicit */_Bool) (short)-29451)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (short)32767)))) ^ (((/* implicit */int) ((short) (short)22465)))));
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((short) (short)29461))) : (((((/* implicit */_Bool) (short)-13729)) ? (((/* implicit */int) (short)-12028)) : (((/* implicit */int) (short)29451)))))) < (max((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((/* implicit */int) arr_0 [(short)1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [(short)0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0])))) & (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(short)13])) ? (((/* implicit */int) arr_6 [(short)2])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))) >= (((((((/* implicit */int) ((short) arr_1 [i_0] [(short)0]))) + (2147483647))) >> (((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_5 [(short)5] [i_1] [i_1] [i_1])))) - (31040))))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [(short)4] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0])))))) ? (((/* implicit */int) ((short) min((arr_1 [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1] [(short)2]))))) : (((/* implicit */int) ((short) max((arr_2 [i_0] [i_0]), (arr_7 [i_0] [i_0])))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)29451)) ? (((/* implicit */int) min((arr_0 [i_0] [(short)10]), (arr_2 [(short)3] [i_1])))) : (((/* implicit */int) (short)12045))));
                arr_9 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) >= (((/* implicit */int) arr_4 [(short)4] [i_1] [i_1] [i_1]))))) > (((/* implicit */int) arr_1 [i_0] [(short)12])))) ? (((/* implicit */int) ((short) (short)-9))) : (((((/* implicit */_Bool) ((short) (short)-32767))) ? (((/* implicit */int) (short)-12028)) : (((/* implicit */int) ((short) (short)-17275)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        for (short i_5 = 4; i_5 < 13; i_5 += 3) 
        {
            {
                var_20 *= arr_10 [i_5];
                var_21 = ((/* implicit */short) max((var_21), (max(((short)-12028), ((short)0)))));
            }
        } 
    } 
}
