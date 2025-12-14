/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115028
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)62114))))))), (max((((/* implicit */long long int) min((-1986544970), (((/* implicit */int) (signed char)-121))))), (min((var_4), (((/* implicit */long long int) (short)-1))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((((arr_3 [(signed char)5] [(signed char)5] [(signed char)5]) + (2147483647))) >> (((((/* implicit */int) (signed char)-19)) + (23)))))) : (((arr_5 [(unsigned char)1]) ? (arr_1 [i_0]) : (arr_1 [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)0)), (arr_3 [(_Bool)1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)30808)) ? (((/* implicit */int) (unsigned short)34784)) : (-20421027))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [(signed char)6] [i_1] [i_2])) < (arr_7 [i_1]))))))) : (arr_7 [i_1])));
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)18))));
                    arr_9 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0])))))), (((((/* implicit */_Bool) arr_3 [(signed char)3] [i_1 - 1] [i_2])) ? (1124955775U) : (4294967295U)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(short)3])) ? (arr_10 [i_1 - 1] [(signed char)1] [i_2] [(short)0]) : (arr_10 [i_1 - 1] [i_3] [i_3] [i_3])));
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [8LL] [i_0]))));
                        arr_14 [i_0] [i_1] [i_2] [i_3 + 2] [i_1] [i_3 + 2] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_12 [5] [i_1] [(signed char)8] [i_3 - 1])))) | (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)-47))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_17 [i_4] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233)))))) <= (((((/* implicit */_Bool) (+(arr_11 [i_1])))) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(signed char)7] [(signed char)4] [i_4]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))));
                        arr_18 [3ULL] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) + (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) & (((/* implicit */unsigned int) arr_11 [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)205)) ? (arr_6 [3U] [i_1] [i_2] [3U]) : (arr_6 [(short)7] [i_2] [(short)2] [(short)2]))))) == (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)51)) == (((/* implicit */int) arr_15 [i_1] [i_1]))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_0] [0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)55357)))), ((((+(((/* implicit */int) (signed char)-4)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1])))))))));
                        var_16 = ((/* implicit */signed char) max((var_16), ((signed char)105)));
                        var_17 = (((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))) > (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_5] [i_5])))));
                        arr_24 [i_1] = ((/* implicit */unsigned int) max((arr_22 [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)116)) || (((/* implicit */_Bool) (signed char)38)))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)142))))) : ((+(3811638754U)))));
                    }
                    for (signed char i_6 = 1; i_6 < 6; i_6 += 2) 
                    {
                        arr_28 [i_1] [i_2] [5] [i_1] = ((/* implicit */unsigned long long int) ((((int) 786908091U)) >> (((arr_19 [i_0] [i_1 - 1] [i_2] [0LL] [i_1 - 1]) + (862306467)))));
                        arr_29 [i_1] [i_1] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_4 [i_6 + 1] [i_1 + 1])), (((arr_1 [i_0]) * (((/* implicit */unsigned int) 164217304))))))));
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) ((arr_6 [i_0] [(short)8] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ^ (((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_27 [i_0] [i_0] [i_0])))) - (((/* implicit */int) max(((short)-923), (arr_26 [i_0]))))))));
                        var_20 = ((/* implicit */short) ((int) (+(((/* implicit */int) (unsigned short)30742)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) (short)32767)))))) * (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)34764)) / (((/* implicit */int) (_Bool)1))))))));
                    }
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-14))))), (((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */long long int) arr_19 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (7820484836652480342LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            {
                arr_36 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20625)) * ((-(((/* implicit */int) (short)32767))))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10177)))));
                arr_37 [i_7] [i_7] = ((/* implicit */signed char) (((+(min((arr_31 [i_7] [i_8]), (((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
}
