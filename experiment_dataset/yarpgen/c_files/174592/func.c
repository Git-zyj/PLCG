/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174592
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) max(((short)12759), ((short)12770)))) ? (((/* implicit */int) max(((short)12754), ((short)-12790)))) : (((/* implicit */int) (short)-12770)))), (((((/* implicit */int) (short)-12770)) & (((/* implicit */int) (short)12770)))))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-12782)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0] [i_1])))) ^ (((/* implicit */int) (short)-12807))))) ? (((/* implicit */int) min(((short)-12807), ((short)12806)))) : (((((((/* implicit */int) var_12)) + (((/* implicit */int) arr_6 [i_0] [(short)12] [i_0])))) & (((/* implicit */int) ((((/* implicit */int) (short)12822)) <= (((/* implicit */int) (short)12801))))))))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-12768)) & (((((/* implicit */_Bool) (~(((/* implicit */int) (short)12767))))) ? (((((/* implicit */int) (short)-12790)) ^ (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_2 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)12812)) : (((/* implicit */int) var_1))))))));
                }
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                var_21 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min(((short)-12807), (min((arr_20 [i_3] [i_4 - 2] [(short)9] [i_6] [i_7]), (((/* implicit */short) arr_17 [i_4] [i_4 + 2] [i_4] [i_4 + 1] [i_6] [(short)11]))))));
                                var_23 = ((/* implicit */short) (-((~(((/* implicit */int) arr_6 [i_4 + 2] [i_6] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_4 + 3])) && (((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_4])) || (((/* implicit */_Bool) (short)12782))))))), (min((arr_21 [i_5] [i_5] [i_5] [i_5] [i_4 - 2] [i_3] [(signed char)5]), (((/* implicit */unsigned short) max(((short)-12761), (var_12))))))));
                }
            } 
        } 
    } 
}
