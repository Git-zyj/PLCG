/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116204
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
    var_18 = (~(var_17));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) (unsigned short)0))))) <= (((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) var_4))))) - (arr_3 [10U] [10U])))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((arr_3 [15U] [9]) | (((/* implicit */int) arr_4 [i_0] [i_3] [i_2]))))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_16))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) (_Bool)1))))));
                            var_23 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [0] [i_4]))))));
                            var_24 -= ((/* implicit */int) ((unsigned short) (~(((((/* implicit */_Bool) var_16)) ? (arr_14 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        }
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_2] [14LL] [i_2 + 2] [i_2 - 1])) ? (arr_12 [i_1] [i_2] [i_2] [i_2 + 2]) : (((/* implicit */int) var_2)))) / (((/* implicit */int) var_9)))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((((long long int) 1792169327)), (((/* implicit */long long int) ((unsigned int) var_7)))))));
                        var_26 &= ((/* implicit */unsigned short) (((~(((unsigned int) var_0)))) * (((/* implicit */unsigned int) ((arr_12 [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 2]) / (arr_13 [i_4] [(_Bool)1] [i_2] [i_2 + 1]))))));
                        arr_17 [i_0] = ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)14336))))))) ? (((int) arr_6 [i_2] [i_2 + 2] [i_2 + 2] [i_2])) : (((/* implicit */int) (_Bool)1)));
                    }
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_0] [i_6 - 1] [i_6] [i_6] = ((/* implicit */int) var_17);
                        var_27 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)0))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_28 *= ((/* implicit */unsigned int) arr_14 [i_7]);
                        var_29 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_21 [i_0] [12] [i_0] [i_0])) : (((((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_0] [i_0])) ^ (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_2 + 1] [(unsigned short)8])))));
                        /* LoopSeq 1 */
                        for (int i_8 = 2; i_8 < 15; i_8 += 2) 
                        {
                            var_30 &= ((/* implicit */unsigned short) ((arr_12 [i_2 - 1] [i_8 - 2] [i_8 - 1] [i_8 - 2]) >> (((((/* implicit */int) var_4)) - (22024)))));
                            var_31 = ((/* implicit */short) (~(1792169327)));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((2LL) | (var_0))))));
                            arr_27 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_13);
                            arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)1] [3LL] [i_0])) ? (1588305909) : (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */_Bool) -5)) && (((/* implicit */_Bool) 884940189))))));
                        }
                        var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */int) arr_25 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2])) | (-1993858033)))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_33 [i_0] = ((unsigned int) 124401458);
                            var_34 += ((((/* implicit */_Bool) 1792169327)) && ((!(((/* implicit */_Bool) var_16)))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_14))));
                        }
                    }
                    var_36 += ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
}
