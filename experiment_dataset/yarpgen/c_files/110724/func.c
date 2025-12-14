/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110724
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
    var_11 = ((/* implicit */unsigned int) var_10);
    var_12 |= ((/* implicit */_Bool) max(((-((+(((/* implicit */int) var_8)))))), ((((+(((/* implicit */int) var_6)))) + (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_8)))))))));
    var_13 |= var_4;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned char)15] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned short) (~(((((_Bool) arr_0 [(unsigned char)15] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59531)) >> (((((/* implicit */int) (unsigned char)48)) - (46))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) min((arr_5 [i_1]), (arr_5 [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4 - 2])) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_3] [i_2])) : (((/* implicit */int) arr_11 [(unsigned char)12] [i_2] [i_2] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_4 - 2] [i_4] [i_4] [i_4 - 1] [i_4 + 2])) > (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 4] [i_4 - 1])))))) : (((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)6004)) : (((/* implicit */int) (unsigned short)52277))))) * (var_2)))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_8 [i_2] [i_4 + 3]), (arr_8 [i_2] [i_4 + 1])))) / ((-(((/* implicit */int) var_8))))));
                                var_16 += ((/* implicit */unsigned char) (+(((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 1])))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_10))) | (((/* implicit */int) ((short) arr_14 [i_1] [i_1] [i_2] [i_2] [i_4] [i_5])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_1])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_12 [i_1] [i_2])))) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (min((max((arr_7 [(_Bool)1] [i_4 + 1]), (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_4] [i_1])) >= (((/* implicit */int) (unsigned char)207)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_6])) ? (arr_10 [i_6] [i_2] [i_3] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_6])))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_10 [i_1] [i_2] [i_3] [i_1]))));
                        var_20 += ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_10))))));
                        arr_23 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_1] [i_2] [i_3] [i_6])) >= (((/* implicit */int) arr_18 [i_1] [i_2] [i_2] [i_3] [i_6]))));
                        var_21 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) (unsigned char)85)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_8] [i_8] [i_8] [i_2] [i_8] = ((/* implicit */unsigned char) (+(max(((-(((/* implicit */int) arr_21 [i_1] [i_2] [i_3] [i_2])))), (((/* implicit */int) arr_25 [i_1] [i_2] [i_3] [i_3] [i_7] [i_2]))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_8))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) min(((short)23576), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (unsigned short)4628))));
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((arr_15 [i_1] [i_2] [i_2] [i_7] [i_7] [i_8]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_8] [i_2] [i_3] [(short)3]))))) <= (((unsigned int) var_6)))))));
                        }
                        var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) (short)120))))))));
                        arr_30 [i_1] [i_2] [i_3] [i_2] [i_2] = 3827035045U;
                        var_27 |= ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)207)), (arr_21 [i_1] [i_2] [i_3] [i_7])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1] [i_2]))))) : (((((/* implicit */_Bool) arr_27 [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))) : ((+(min((((/* implicit */unsigned int) var_7)), (var_3))))));
                        arr_31 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59531))))) ? (((/* implicit */int) ((arr_9 [i_1] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_15 [i_1] [i_7] [i_3] [i_7] [i_3] [i_1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)132)) == (((/* implicit */int) arr_13 [i_1] [i_2] [i_7])))))) * (((unsigned int) (_Bool)0))))));
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1])) ? (arr_16 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) | ((~(((unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : ((+(((/* implicit */int) (unsigned short)8292))))));
    }
}
