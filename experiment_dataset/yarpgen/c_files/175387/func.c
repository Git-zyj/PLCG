/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175387
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) == (min((var_5), (((/* implicit */long long int) var_12)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [(short)2] [i_2] [i_0] [i_4] [i_1] = ((/* implicit */unsigned char) var_18);
                                var_21 = ((/* implicit */signed char) arr_9 [(unsigned short)0] [i_2]);
                                arr_13 [i_0] [(short)15] [i_1] [i_1] [i_3 - 1] [i_0] [i_4] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) == (((/* implicit */int) var_19))))))), (((((((/* implicit */int) (short)-8795)) + (2147483647))) >> (((((/* implicit */int) (short)-13610)) + (13621)))))));
                                arr_14 [i_4 + 1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_4 - 1] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) (short)1641)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_4 + 2]))))) : ((+(arr_3 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((((var_5) & (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_6 - 1] [i_6] [i_6])))), (((/* implicit */long long int) ((_Bool) (unsigned short)0)))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0)))))))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)225)), ((unsigned short)16732)))))) : (((/* implicit */int) var_11))));
                                var_24 = ((/* implicit */short) var_19);
                                arr_20 [i_0] = ((/* implicit */unsigned short) (unsigned char)31);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_19 [i_2] [(short)4] [i_0] [i_0] [i_0] [i_0]);
                    var_25 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_19)))), (((/* implicit */int) arr_6 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_0]))))) ? ((+(((/* implicit */int) (signed char)73)))) : (((/* implicit */int) arr_19 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_0] [(short)10] [i_7 - 1]))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) var_18)))))));
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)1637)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7 - 1] [i_7] [(signed char)0] [i_9]))))) : (((((/* implicit */int) (unsigned short)65532)) << (((/* implicit */int) (unsigned char)9)))))) << (((((/* implicit */int) var_19)) - (240)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))) / (arr_11 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (2401189073U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(unsigned short)11] [(_Bool)1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0])))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_30 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10] [(_Bool)1] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) ((short) arr_6 [i_10] [i_10] [(short)7] [i_10 - 1])))))), (((((/* implicit */_Bool) arr_8 [i_10] [i_10] [14U] [i_10 - 1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 22U)) ? (arr_2 [(signed char)2]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
        arr_35 [i_10 - 1] [i_10] = ((/* implicit */unsigned int) arr_26 [(signed char)12] [i_10 - 1]);
        var_31 = arr_8 [i_10] [i_10] [i_10] [i_10] [i_10];
    }
}
