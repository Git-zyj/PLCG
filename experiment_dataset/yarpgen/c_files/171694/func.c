/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171694
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
    var_11 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) <= (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) << (((((((/* implicit */int) var_7)) + (34))) - (7)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), ((unsigned short)47536)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [(unsigned short)21] [i_2])) : (((/* implicit */int) (unsigned short)18024))));
                                var_14 += ((/* implicit */unsigned short) arr_3 [i_3] [(signed char)3] [i_0]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (signed char)11))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_5 - 2] [i_0])) ? (((/* implicit */int) arr_7 [i_7] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_5 - 3] [i_5])))) : (((/* implicit */int) ((unsigned short) arr_14 [(unsigned short)16] [i_5 - 1] [i_5])))));
                                var_16 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_17 = max((((/* implicit */unsigned char) (signed char)-1)), (var_8));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_8)))))))) <= ((~(((/* implicit */int) (signed char)-109))))));
                }
                for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
                {
                    arr_25 [i_0] [i_1] = ((/* implicit */signed char) var_3);
                    arr_26 [i_8] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-79))));
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)9))))))))));
                }
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)45802)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_13 [i_1] [(unsigned short)5])) : (((/* implicit */int) var_6))));
                var_21 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)18980)) >= (((/* implicit */int) (signed char)-1))))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
}
