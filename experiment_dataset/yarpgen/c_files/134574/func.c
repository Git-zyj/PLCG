/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134574
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 += min((min((min(((unsigned char)131), ((unsigned char)134))), (arr_0 [i_2] [i_3]))), (((unsigned char) max(((unsigned char)134), (arr_7 [i_0] [i_0] [i_0] [(unsigned char)2])))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (min((max(((unsigned char)119), ((unsigned char)122))), ((unsigned char)37)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = max((max(((unsigned char)61), ((unsigned char)218))), ((unsigned char)122));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5] [i_5 - 1] [i_5])) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)122)))) : (((/* implicit */int) ((unsigned char) arr_12 [(unsigned char)10])))));
                    arr_19 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)134)) || (((/* implicit */_Bool) (unsigned char)37))))) + (((/* implicit */int) (unsigned char)213))));
                }
                arr_20 [i_1] [i_0] = max(((unsigned char)218), ((unsigned char)114));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229)))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)221))))), (arr_22 [i_6 + 3])))) ? (((((/* implicit */int) (unsigned char)146)) + (((/* implicit */int) (unsigned char)141)))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)146)))) ? (((((/* implicit */int) arr_11 [i_9] [i_8] [i_6] [i_6] [i_6])) % (((/* implicit */int) arr_11 [i_9] [i_8] [i_7] [i_6] [i_6])))) : (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_0 [i_6] [i_7 - 1])) : (((/* implicit */int) (unsigned char)45)))))))))));
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8])))))));
                        }
                    } 
                } 
                arr_31 [i_6] |= (unsigned char)104;
            }
        } 
    } 
}
