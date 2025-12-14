/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17728
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
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((short) arr_1 [i_2 + 3]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_9 [i_1] [i_0] [i_0] [i_0] |= ((/* implicit */int) var_7);
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)15), (((/* implicit */unsigned char) ((arr_6 [i_0] [i_1] [i_2]) == (1378074535))))))) == (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)9)), (arr_2 [i_0] [i_2 + 3] [i_2]))))));
                        arr_11 [i_3] [i_2] [i_2] [i_0] [i_0] = (((((-(((/* implicit */int) arr_2 [i_0 - 3] [(unsigned short)16] [i_0 + 2])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1] [i_2]))))));
                        arr_12 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) (unsigned char)17)))) ? (((/* implicit */int) min((var_2), (arr_4 [8] [i_3])))) : ((-(((/* implicit */int) (short)2047))))))));
                        arr_13 [i_0] [i_2] [i_2 + 3] [i_2] = ((/* implicit */int) (unsigned char)226);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_0])) << (((343845840) - (343845824)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)8] [i_2])))) : (((((/* implicit */int) (unsigned char)234)) ^ (((/* implicit */int) (unsigned short)65535))))))));
                        arr_18 [19U] [(short)9] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((-383826084) >= (((/* implicit */int) (unsigned char)22)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32767)) | (((/* implicit */int) (unsigned char)233))))))))));
                    }
                    for (int i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        var_14 &= ((/* implicit */unsigned char) (-(1186424118)));
                        arr_22 [i_0] [i_2] [i_0] [(short)6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_2 - 1] [i_5 + 1] [i_0 + 1])), (((unsigned int) (unsigned short)10727)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 16; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) (unsigned short)64486)) ? (((/* implicit */int) (unsigned short)65528)) : (var_1)))));
                            arr_26 [(unsigned char)4] [i_1] [i_2] [i_2] [i_5] [i_6 + 4] = ((short) ((((/* implicit */_Bool) (short)-5718)) ? (((/* implicit */int) (unsigned short)39651)) : (((/* implicit */int) var_9))));
                        }
                        for (unsigned short i_7 = 4; i_7 < 19; i_7 += 3) 
                        {
                            arr_29 [i_2] [i_1] [i_0 - 4] [i_1] [i_0 - 4] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) - (8388607U)))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (short)-5106))));
                        }
                        arr_30 [(unsigned char)6] [i_2] [i_5 + 2] = ((/* implicit */unsigned short) 63);
                    }
                    for (int i_8 = 3; i_8 < 19; i_8 += 3) 
                    {
                        var_17 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)221))))));
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)132)) < (((/* implicit */int) arr_31 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_2] [i_0 + 1])))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5217))))) - (((((/* implicit */_Bool) 343845856)) ? (arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 3]) : (-1378074535)))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39661))))), (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */int) var_8)))))));
    var_21 = ((/* implicit */unsigned short) var_9);
}
