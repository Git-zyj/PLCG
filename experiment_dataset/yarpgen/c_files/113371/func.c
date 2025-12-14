/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113371
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
    var_14 |= ((/* implicit */signed char) var_0);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-1)), (max((((/* implicit */int) ((unsigned char) (short)-8510))), (((((/* implicit */int) var_5)) << (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((max((max((((/* implicit */long long int) (short)-32755)), (9011507080549433784LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25826))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37802)) ? (((/* implicit */int) (unsigned char)95)) : (-504919030))))));
                            var_17 |= ((/* implicit */_Bool) 4294967295U);
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) var_7)))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) min((min((((/* implicit */unsigned short) arr_6 [i_0] [i_2])), ((unsigned short)13121))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1])))))))))))));
                            /* LoopSeq 4 */
                            for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned int) arr_4 [i_4]);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned short)37802)) : (-428298889))));
                                arr_18 [2] [i_1] [i_0] [i_3] [(signed char)0] = var_13;
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39709)) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [(unsigned short)13] [(unsigned short)13] [i_2] [(unsigned short)13])) >= (((/* implicit */int) arr_0 [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39724))))))))));
                            }
                            for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned char) arr_16 [i_0] [i_0] [i_2] [i_0] [i_2])))));
                                arr_21 [i_3] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)6), ((unsigned short)39709))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_3] [i_6]) ? (arr_14 [i_0] [i_0] [i_0] [6U] [i_0]) : (((/* implicit */unsigned int) arr_8 [i_0] [i_0]))))))))) : (1256089025U));
                                arr_22 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (-(-1704656297)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                            {
                                var_24 = ((/* implicit */_Bool) ((((_Bool) var_8)) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_3] [i_7])) : (((/* implicit */int) (unsigned short)39735))))));
                                arr_25 [(unsigned short)0] [i_0] [i_1] = ((/* implicit */int) (unsigned char)97);
                                var_25 &= ((/* implicit */long long int) arr_19 [i_1]);
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1]);
                arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((signed char) var_13)))) ? (arr_4 [i_0]) : (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */int) (unsigned short)27742)) << (((/* implicit */int) (_Bool)1)))) : (((int) arr_20 [i_0] [(unsigned short)11]))))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11321498618676748609ULL)) || (((/* implicit */_Bool) arr_19 [i_0])))))) ^ (min((var_4), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)25800)) : (((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)3] [i_0])))))) : (((/* implicit */int) ((-1) == (1912006157))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(6U)))))) ? ((~(max((11321498618676748610ULL), (((/* implicit */unsigned long long int) arr_12 [i_9])))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0 + 1] [i_8] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_12 [i_1])))))));
                                arr_37 [i_8] [i_10] [i_9] [i_8] [i_1] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_9])) ? ((~(31))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10]))) * (arr_24 [i_0] [i_8] [i_8] [i_9] [i_8] [(short)14])))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(_Bool)1] [i_9] [i_10])) : (((/* implicit */int) max((var_11), (((/* implicit */short) arr_31 [i_1] [i_1] [i_8] [i_1])))))))));
                                var_29 -= ((/* implicit */_Bool) (unsigned short)39752);
                                var_30 = ((/* implicit */_Bool) arr_1 [i_9]);
                                var_31 -= ((/* implicit */unsigned long long int) max(((unsigned short)19604), ((unsigned short)19610)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
