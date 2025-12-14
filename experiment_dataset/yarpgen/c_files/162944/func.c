/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162944
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) -2061835229945565162LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)-26817))))), (((((/* implicit */_Bool) max(((unsigned short)45097), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (min((((/* implicit */long long int) (unsigned short)65535)), (-5573855235019101954LL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-103)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) / (((1802492694420898032LL) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                        var_16 = ((/* implicit */long long int) (+((+(arr_0 [i_0 - 1])))));
                        var_17 &= ((/* implicit */unsigned char) (+(((int) ((unsigned long long int) arr_7 [i_0 - 1] [i_1] [i_2] [i_3])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) max(((~((-(8809192974979830481LL))))), (((/* implicit */long long int) (_Bool)1))));
    }
    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)1820))) < (9223372036854775807LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 3])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (signed char)-97))))) ? ((~(((/* implicit */int) (short)1800)))) : (((/* implicit */int) arr_10 [i_4]))))));
        var_19 = ((/* implicit */unsigned char) ((((arr_11 [i_4 - 3]) ? (((/* implicit */int) arr_11 [i_4 + 1])) : (((/* implicit */int) arr_11 [i_4 + 2])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 + 2])))))));
        arr_14 [(unsigned char)0] |= ((/* implicit */_Bool) max((6632590915233979316LL), (1802492694420898032LL)));
        arr_15 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(arr_6 [i_4 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -9223372036854775794LL)) * (13580022729346860898ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)5795)))) : ((((_Bool)1) ? (arr_5 [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (+(0ULL)));
                    arr_22 [(unsigned short)8] [i_4] [i_6] = arr_2 [i_4];
                    var_21 *= 10834562412583425522ULL;
                    arr_23 [i_4 - 2] [i_4] [i_4 - 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) 3475500844U)), (var_4)))))) ? (8213622402832874717LL) : (((arr_4 [i_5 + 1] [i_5 + 1] [i_6]) ? (max((-8156061533194582805LL), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_6] [(unsigned short)12] [(_Bool)1])))))))));
                }
            } 
        } 
    }
}
