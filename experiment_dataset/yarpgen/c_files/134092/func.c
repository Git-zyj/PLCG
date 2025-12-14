/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134092
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)167)), (var_1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)25068), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (var_16)))) : ((~(0U)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63)))) : ((+(((/* implicit */int) var_0))))))) / (max((((/* implicit */unsigned long long int) (~(3757878491U)))), (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) 10U)) : (11370033172437627221ULL)))))));
    }
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 2])) + (((/* implicit */int) arr_2 [i_1 + 2]))))) ? (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (var_10))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1 + 1])))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_2])) ? (var_1) : (((/* implicit */int) var_11)))) + (((/* implicit */int) max((arr_0 [6LL]), (arr_0 [12U])))))), (((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (unsigned short)3)) : ((~(((/* implicit */int) (unsigned short)23949))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */short) var_9);
                        arr_13 [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((arr_11 [i_2] [i_1 - 2] [i_3 + 1] [i_3 + 3] [i_3] [i_3]) * (((/* implicit */unsigned long long int) ((var_13) % (var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                        arr_14 [i_2] [i_2] [i_2] [i_3] [(unsigned char)5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_12)), (min((arr_5 [i_3 - 2] [i_2] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_8 [i_3 + 3] [i_2] [i_3 + 1]))))));
                        var_23 = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((/* implicit */int) arr_3 [i_3] [i_3])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */int) arr_15 [i_5] [i_4] [i_4] [14U] [i_2] [(unsigned short)14])) : (((/* implicit */int) arr_7 [(unsigned char)8] [i_2] [(signed char)7] [i_5]))))))));
                            var_25 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                        }
                    }
                    var_26 = (~(((/* implicit */int) arr_3 [i_1 - 3] [i_3 + 1])));
                    arr_18 [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) max(((short)-32720), (((/* implicit */short) (_Bool)1))))))), ((~((-(((/* implicit */int) var_11))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_6 [i_2]))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned short)36123))))) ? (min((0LL), (((/* implicit */long long int) arr_3 [i_6] [i_6])))) : (((/* implicit */long long int) (-(var_9))))))));
                        var_27 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_17 [i_6 + 2])) >= (((/* implicit */int) arr_21 [i_1 + 1] [i_2] [i_6 + 1] [i_6] [i_6] [i_2])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_27 [i_2] [i_6 - 1] [i_2] [i_2] [i_2] = ((_Bool) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_6 + 2] [i_2] [i_2])), (arr_7 [(signed char)13] [(_Bool)1] [i_3 - 2] [(_Bool)1]))))));
                            arr_28 [6ULL] [(_Bool)1] [i_2] [i_2] [i_3] [i_6 + 2] [i_7] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((unsigned short) (unsigned short)65535))))), (((/* implicit */int) ((unsigned char) (unsigned short)1492)))));
                            var_28 = ((/* implicit */unsigned long long int) (signed char)41);
                        }
                        var_29 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (unsigned char)31)), (arr_16 [i_2] [i_2] [i_2] [i_2] [i_3 + 2]))), (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [4LL] [i_3] [i_3 + 1])) ? (arr_16 [i_1] [i_1] [(unsigned char)12] [i_3] [i_3 + 1]) : (arr_16 [i_3] [i_3 + 3] [i_3 + 1] [(unsigned char)8] [i_3 - 1])))));
                    }
                }
            } 
        } 
    }
}
