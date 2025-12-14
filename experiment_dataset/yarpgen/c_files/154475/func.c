/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154475
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((3851875846777296861ULL), (((/* implicit */unsigned long long int) (signed char)16)))))))), (((unsigned short) (-(((/* implicit */int) (unsigned char)0)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_11 -= ((/* implicit */unsigned char) ((min((((unsigned long long int) (short)16109)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)49548)) : (((/* implicit */int) (unsigned short)15987))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 1181504855015518110ULL)))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)54851))))) ? ((+(arr_9 [i_1 - 1] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-32751)), ((unsigned short)15982))))) / (81382225U))) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) ^ (var_9)))) ? ((((_Bool)1) ? (3229014905U) : (1033491341U))) : (((/* implicit */unsigned int) var_9))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49523)) % (((/* implicit */int) arr_0 [i_1 - 1]))));
                        arr_16 [(unsigned char)6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)92))))) * (((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1 - 1] [i_4] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) 2944823363U)) : (4ULL)))));
                    }
                    arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_2] = ((/* implicit */long long int) 1065952390U);
                    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54851))) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1 - 1])) * (((/* implicit */int) (signed char)4))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) arr_9 [i_1 - 1] [i_1] [i_2] [i_0])) : (arr_14 [(unsigned char)4] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2] [i_1 - 1] [i_0])) || (((/* implicit */_Bool) (signed char)-124))))))))));
                }
            }
        } 
    } 
    var_14 -= ((/* implicit */short) (-(((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (113))) - (6)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 23; i_5 += 3) 
    {
        arr_20 [i_5] [i_5 + 1] = (-((+(5678381897213142844ULL))));
        var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) var_2)) - ((+(1727377099)))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((-(3229014905U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (_Bool)1))))))))));
        var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_6]))));
    }
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(-2997652443301626606LL)))) : (((15782041566481404862ULL) << (((((/* implicit */int) var_1)) - (31)))))))));
}
