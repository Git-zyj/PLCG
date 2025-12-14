/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103282
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
    var_18 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_14))))) : (var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 ^= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0] [i_0]))))), (((int) (_Bool)1))));
                    var_20 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)106)))), (((/* implicit */int) var_9))))) && (((((((/* implicit */_Bool) 559677248)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) < (((/* implicit */unsigned int) min((29612140), (((/* implicit */int) var_14))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_3] [i_3] [i_4] [i_0])) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (_Bool)0))))))))));
                            var_22 ^= ((/* implicit */unsigned char) var_2);
                            var_23 = (unsigned char)21;
                        }
                        for (short i_5 = 3; i_5 < 22; i_5 += 2) 
                        {
                            arr_15 [i_0] [(signed char)15] [i_1] [i_3] [i_5 - 2] = arr_14 [i_0] [i_1];
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) max((arr_9 [i_0] [i_1] [i_1] [i_3] [i_5]), ((unsigned char)17)))) - (((/* implicit */int) max((((/* implicit */short) (signed char)127)), (arr_10 [i_0]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_5]))) / ((+(arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_5])))))));
                            arr_16 [i_1] [i_3] [i_2] [i_1] [16LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) arr_4 [i_0])))))))) & (((/* implicit */int) (signed char)-1))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
                            var_25 = arr_10 [i_0];
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) -641221748))));
                        var_27 += ((/* implicit */unsigned char) ((max((var_13), (((/* implicit */unsigned int) var_9)))) / (((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_10 [i_0])), (var_8))))))));
                        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3] [i_2] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [(unsigned short)10])) : (((/* implicit */int) (_Bool)1))))) : (var_5)))));
                    }
                }
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (unsigned char)152))));
                    var_30 = (signed char)0;
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_0])), ((+(((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_6]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)220)))) ? (arr_23 [i_8 - 1] [i_8 + 1] [i_8 - 2]) : (((/* implicit */int) (unsigned char)103))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_7] [i_1] [i_0]))))) ? (((/* implicit */int) arr_20 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : (29612140));
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) 
                            {
                                var_33 &= ((/* implicit */signed char) 4294836224U);
                                var_34 = ((/* implicit */unsigned char) min(((~(((int) -29612153)))), ((~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)16))))))));
                            }
                            arr_29 [i_8] [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) min((arr_0 [i_0] [i_8 + 1]), (arr_0 [(_Bool)1] [i_8 + 2])))) / ((+(((/* implicit */int) arr_0 [i_7] [i_8 - 2]))))));
                            arr_30 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */_Bool) arr_6 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3830432112U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (min(((~(3742607132U))), (((((/* implicit */_Bool) (short)-8038)) ? (552360163U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
    var_36 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) 2194016118U)) : (var_0)));
}
