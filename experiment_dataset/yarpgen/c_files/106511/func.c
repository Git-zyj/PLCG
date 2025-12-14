/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106511
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_3])) - (29))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_1] [i_2] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0]))) ? (((((/* implicit */_Bool) (unsigned short)7637)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                            }
                        } 
                    } 
                    var_20 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (11048359773345232854ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1] [i_2]))))));
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((int) var_11)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((_Bool) (((_Bool)0) ? (8455096778967033800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [7ULL] [7ULL] [i_1] [i_1] [i_1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_22 = ((short) ((arr_15 [i_6] [i_6] [i_6 + 2] [(unsigned char)12] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_5 + 1] [i_6 + 2] [i_6 - 1] [i_5 + 1]))) : (var_2)));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [i_0] [(signed char)8] [i_2] [i_5 - 1] [5U])))) ? (max((arr_10 [15LL] [i_1] [i_2] [i_5] [i_6 + 1]), (((/* implicit */int) var_4)))) : (((int) arr_8 [i_6] [i_6] [i_6] [i_6])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (max((var_6), (((/* implicit */unsigned long long int) var_3)))))))));
                    var_25 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (0U))));
                }
                var_26 = ((/* implicit */int) (!(((_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned short)18] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [(unsigned short)18] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((signed char) var_15)))) ? ((-(((((/* implicit */_Bool) 13229027918300492606ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_0] [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_12 [i_0] [(unsigned short)23] [i_1])))));
            }
        } 
    } 
    var_28 |= ((/* implicit */short) (-(((((/* implicit */_Bool) (-(2150800652U)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (short)-16774))))))));
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_35 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8] = ((((/* implicit */_Bool) var_10)) ? (2716764290035335511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3958))));
                                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) arr_24 [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [i_8 + 3] [i_8 + 2] [i_8] [i_8 + 3] [i_10] [i_12 + 3]))) : (((((/* implicit */_Bool) 13275167414376295245ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_24 [i_8]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 20; i_14 += 2) 
                        {
                            {
                                arr_41 [i_8] [i_8] [i_9] [i_10] [i_13] [i_13] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (5167005171908403318ULL) : (((/* implicit */unsigned long long int) arr_10 [i_8] [(short)12] [i_10] [i_13] [i_14 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_30 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_6)))));
                                var_31 = ((/* implicit */short) (((!(((/* implicit */_Bool) -1742507734)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_30 [i_8] [i_8] [16] [i_13] [i_8])))) : (((((/* implicit */_Bool) 2346010565U)) ? (67108864U) : (0U)))));
                                var_32 += ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_8] [i_8 - 1] [(short)16] [i_8 - 1]))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_29 [i_8 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (_Bool)1))))));
                }
                var_34 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) 748316968U)) ? (((/* implicit */unsigned long long int) 2147483647)) : (13279738901801148280ULL))) : (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8] [i_8 + 2] [2U] [i_8])) ? (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8]) : (var_5)))) ? (((/* implicit */int) max((var_15), (((/* implicit */signed char) arr_15 [(_Bool)1] [i_8] [(_Bool)1] [13U] [i_9]))))) : (((/* implicit */int) max(((short)-23162), (((/* implicit */short) var_9))))))))));
                arr_42 [i_8] = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) var_7))));
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)19506)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) : (((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)32768))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (158986728U)))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1700)) ? (((/* implicit */unsigned int) -563234615)) : (4227858432U))))));
}
