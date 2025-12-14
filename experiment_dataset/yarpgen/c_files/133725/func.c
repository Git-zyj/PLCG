/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133725
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_1 [i_4] [i_3])))), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_2 [i_1] [i_2]))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (short)-1824)) : (((/* implicit */int) (unsigned char)236)))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_3))))))) - (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_4 [(unsigned char)20] [i_1] [(unsigned char)20] [i_1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_19 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_1])))), (max(((~(((/* implicit */int) (unsigned char)8)))), (((/* implicit */int) (unsigned char)133))))));
                    var_20 = ((/* implicit */unsigned char) (~((((~(((/* implicit */int) var_8)))) | (((/* implicit */int) arr_12 [i_5] [i_1] [i_0]))))));
                    arr_14 [i_0] [i_1] [i_1] [(unsigned char)19] = (unsigned char)128;
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    arr_17 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4762)) | (((/* implicit */int) (unsigned char)3)))))));
                    var_21 = ((/* implicit */short) arr_7 [i_6] [i_1] [i_0] [i_0] [i_0] [i_0]);
                    arr_18 [i_6] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned char)60), ((unsigned char)35)))) << (((/* implicit */int) var_5))));
                    arr_19 [i_6] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (unsigned char)26);
                    var_22 = (unsigned char)23;
                }
                arr_20 [(unsigned short)10] [(unsigned short)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned short) (unsigned char)133)), (((/* implicit */unsigned short) ((unsigned char) arr_6 [i_0] [i_1] [i_0] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149))))) : (((/* implicit */int) var_3))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_15);
}
