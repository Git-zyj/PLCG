/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120835
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) (+((~(var_1)))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned long long int) arr_6 [i_0] [i_1 - 3] [(unsigned char)0])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))))))))));
            var_14 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
            arr_7 [i_0] = arr_5 [(signed char)10] [i_1 + 2];
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) && (((/* implicit */_Bool) 1355195102U))))) : (min((var_6), (((/* implicit */int) arr_1 [i_1 + 1]))))));
        }
        var_16 = var_3;
    }
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                            {
                                arr_21 [i_2] [i_3 + 3] [(short)9] [i_4] [i_2] [2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_5 + 1])) ? (((/* implicit */int) arr_14 [(unsigned char)12] [i_3] [i_5 + 1])) : (((/* implicit */int) arr_10 [i_6]))));
                                var_18 = ((/* implicit */long long int) var_9);
                                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                            }
                            var_20 = ((/* implicit */unsigned short) (short)120);
                        }
                    } 
                } 
                arr_22 [i_3] = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 3; i_8 < 7; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) arr_28 [i_7] [i_7] [i_7])));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (short)99)) / (593076274)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_5);
}
