/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121033
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
    var_16 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [(unsigned char)16] = ((/* implicit */unsigned char) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (1992519808) : (((/* implicit */int) min(((unsigned short)5689), (((/* implicit */unsigned short) var_8)))))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_17 = ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_15))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)11] [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        var_18 = (~(((int) ((var_10) / (arr_2 [i_0] [i_2] [i_3])))));
                        arr_10 [i_0] [i_0] [(unsigned short)11] [i_3] = max((((/* implicit */unsigned short) (short)-30076)), (min((((unsigned short) var_12)), (((unsigned short) var_10)))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)11)), (max((arr_1 [i_2] [i_2]), (((/* implicit */unsigned int) var_9))))))) ? (max(((+(2147483647))), (((/* implicit */int) var_3)))) : (arr_3 [i_3] [i_2])));
                        var_20 = ((/* implicit */unsigned char) (short)26008);
                    }
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_13 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26009))));
                        var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_8)))) / (max((var_10), (var_4))))), (((/* implicit */int) var_8))));
                    }
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (short)32767))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (var_1))), (((/* implicit */unsigned int) var_13))))));
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)32747))))) ? ((+(var_13))) : (var_4))) == ((+((~(((/* implicit */int) (short)-32754))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((-(max((var_2), (((/* implicit */unsigned int) (unsigned char)32)))))) != (((/* implicit */unsigned int) 2147483647)))))));
                                var_25 += ((/* implicit */short) (+(((/* implicit */int) (unsigned short)5698))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    arr_20 [(unsigned short)13] [i_1] [i_7] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                    arr_21 [i_0] [i_0] = (-(((/* implicit */int) max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), (var_11)))));
                }
            }
        } 
    } 
}
