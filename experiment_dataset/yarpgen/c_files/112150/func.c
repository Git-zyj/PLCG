/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112150
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
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)156)))) - (((/* implicit */int) arr_3 [i_0])))) ^ (((/* implicit */int) ((short) ((signed char) (unsigned char)172))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [(short)3] = ((/* implicit */short) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) : (arr_0 [i_3])));
                    }
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [(unsigned char)9] [(unsigned char)7] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (short)-31252)))), (((/* implicit */int) (unsigned char)231))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((max((((((/* implicit */_Bool) arr_5 [(signed char)6] [i_1] [(unsigned char)13])) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) (signed char)-103)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) >= (1207632782U)))) : (((/* implicit */int) min((arr_12 [i_2]), ((signed char)-127)))))))))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1178546085U))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_2] [i_4 - 1] = ((/* implicit */unsigned char) (signed char)-33);
                            arr_21 [i_0] [i_1] [(unsigned char)13] [(signed char)7] [i_4] [i_6] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-30393)), (var_10))))))), (((unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_7))))));
                            arr_22 [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), ((signed char)122)))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)-126)))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_4] [i_2])) < (((/* implicit */int) (short)-10586))))))))) >= (max((((((/* implicit */_Bool) 4294967295U)) ? (1576170317U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-30393)))))))));
                            arr_23 [i_0] [(signed char)9] = ((/* implicit */signed char) var_17);
                        }
                        arr_24 [i_0] [i_0] [i_1] [i_4 - 1] [i_4] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-20937))))), (((((/* implicit */int) arr_3 [i_4 - 1])) & (((/* implicit */int) arr_3 [i_4]))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0])) ^ (((/* implicit */int) ((signed char) ((unsigned int) (short)8623))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32761)) ^ (max((((/* implicit */int) ((unsigned char) (short)-8633))), (((((/* implicit */_Bool) arr_15 [(unsigned char)6] [i_0 + 1] [i_1] [i_2] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)157))))))));
                        arr_28 [(_Bool)1] [i_2] [(_Bool)1] = ((short) ((((/* implicit */_Bool) max((arr_15 [i_7] [i_1] [i_7] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) ? (((/* implicit */int) min(((unsigned char)253), (arr_15 [i_0] [i_1] [(signed char)10] [(short)1] [(short)2] [(short)12] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) arr_6 [(signed char)12] [i_2] [i_7])))))));
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)44))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 2; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_35 [(unsigned char)10] [i_1] [i_1] [(unsigned char)2] [i_1] = ((/* implicit */short) (~(((unsigned int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                                var_24 = ((/* implicit */signed char) min(((-((-(((/* implicit */int) arr_29 [i_0] [(unsigned short)12] [i_0] [(signed char)7])))))), (((/* implicit */int) ((((/* implicit */int) min(((signed char)-47), ((signed char)-8)))) < (((/* implicit */int) var_13)))))));
                                arr_36 [i_0] [i_1] [(short)0] [(signed char)8] [i_9 + 2] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (signed char)38))) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16082)))) < ((-(((/* implicit */int) (_Bool)1)))))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_1]))) || (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-123)), (var_7))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-70)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) (unsigned char)171);
}
