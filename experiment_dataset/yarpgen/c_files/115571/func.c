/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115571
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
    var_15 = var_6;
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((unsigned char) (signed char)-1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_0] [(unsigned char)10]))));
                    arr_10 [(unsigned char)10] [i_1] [i_2 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1] [(unsigned char)9]))));
                }
                for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1]))));
                                var_19 = ((/* implicit */unsigned char) arr_3 [i_3 - 1] [i_3 + 1]);
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_5] [i_4]))))) ? (((/* implicit */int) arr_16 [i_3 + 1] [i_3] [i_3 - 1])) : (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_3]))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned char)137)) | (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)14])) : (((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)1]))))))));
                    arr_20 [i_0] [i_0] [(signed char)5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) arr_5 [(signed char)1] [i_1] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((/* implicit */int) min(((unsigned char)108), (((/* implicit */unsigned char) var_12)))))));
                }
                var_22 = var_9;
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) (signed char)-41)))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0]))))))) <= (((((/* implicit */int) arr_1 [i_1] [i_0])) & (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */signed char) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_7))));
}
