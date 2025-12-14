/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175957
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((min(((~(-2107909668))), (((/* implicit */int) arr_1 [i_0])))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (((/* implicit */int) min((arr_1 [(signed char)4]), (((/* implicit */signed char) (_Bool)1))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_0] [(unsigned short)15] [(unsigned short)15]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    }
    var_11 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)29061))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((((((((/* implicit */int) arr_11 [17])) < (((/* implicit */int) (signed char)(-127 - 1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_3 [i_3] [i_3] [i_3])))) : (((/* implicit */int) ((unsigned char) arr_2 [i_3] [i_4] [i_3]))))), (min((((((/* implicit */_Bool) (unsigned short)34482)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_10 [i_3] [(unsigned short)12])))), (((((/* implicit */int) arr_2 [i_4] [i_4] [i_4])) | (((/* implicit */int) (unsigned short)34497))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [(signed char)18])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4])))), ((~(((/* implicit */int) min(((signed char)43), (((/* implicit */signed char) (_Bool)1)))))))));
                            arr_18 [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */int) max(((_Bool)1), (arr_6 [i_3] [i_4] [i_4])))) | ((~(((/* implicit */int) var_5)))))), (((((/* implicit */int) min((arr_11 [(signed char)21]), ((unsigned short)31025)))) ^ ((~(((/* implicit */int) (unsigned short)34511))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                            {
                                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)31025), ((unsigned short)0))))))) ? (((/* implicit */int) max(((unsigned short)40521), (((/* implicit */unsigned short) (signed char)43))))) : (min(((~(((/* implicit */int) arr_10 [i_3] [(signed char)4])))), (((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-22))))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3)))) + (((((/* implicit */_Bool) (signed char)47)) ? (var_0) : (((/* implicit */int) arr_6 [i_7] [i_4] [i_7])))))) - (((((/* implicit */int) min((((/* implicit */signed char) arr_20 [i_3])), ((signed char)43)))) + ((-(((/* implicit */int) (_Bool)1)))))))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (max((((((/* implicit */_Bool) (unsigned short)22961)) ? (arr_15 [i_7] [i_5] [(unsigned short)18] [(unsigned short)18]) : (((/* implicit */int) (unsigned char)230)))), (((/* implicit */int) arr_4 [i_3])))) : (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_20 [i_3]))))));
                            }
                            arr_22 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3])))), (min((((/* implicit */int) var_1)), (arr_15 [10LL] [10LL] [10LL] [10LL])))))) ^ (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_3]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (8986092512919215883LL)))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned short)65535)))) : (max((-1822739302), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((((unsigned short) arr_20 [i_3])), (max((var_1), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) (((+(arr_13 [i_6]))) < (((/* implicit */int) arr_7 [i_5] [i_4] [(signed char)10])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((var_0) - (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))), (max((var_0), (((/* implicit */int) (unsigned short)0))))))));
}
