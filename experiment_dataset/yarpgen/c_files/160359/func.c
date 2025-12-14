/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160359
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
    var_10 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */_Bool) ((((var_0) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)511)))) >> (((var_2) - (907753507)))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) var_1)))))));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((int) (signed char)-37)) : (((/* implicit */int) (short)521))))) ? (((/* implicit */int) (!(arr_2 [i_1] [i_1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0 + 1] [i_1] [i_1]) : (arr_5 [i_0 - 2] [(_Bool)1] [i_1]))) <= ((+(arr_5 [i_1] [0LL] [0LL]))))))));
                var_13 = ((/* implicit */int) -4320522684859054167LL);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_3))), (((_Bool) -4308404664103915786LL)))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [10LL])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_8 [(signed char)11] [(signed char)17])))) ? (((/* implicit */int) ((signed char) var_6))) : (arr_7 [i_2])))) : (((unsigned int) arr_7 [i_2]))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((max((var_9), (((/* implicit */long long int) arr_8 [(_Bool)1] [i_2])))), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_15 [i_3] = ((/* implicit */int) var_8);
            var_17 = ((/* implicit */signed char) ((int) (_Bool)1));
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_19 [i_3] = ((/* implicit */unsigned long long int) arr_16 [(unsigned short)2] [(short)22]);
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-37))));
                            var_19 &= ((/* implicit */_Bool) ((48957055U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [19U])))));
                            arr_27 [i_5] [i_3] [(signed char)1] [6LL] [i_5] [(short)11] [i_5] = (~(((/* implicit */int) var_0)));
                        }
                    } 
                } 
            } 
        }
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-533)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (var_2))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_10 [2ULL] [2ULL])))))))));
        arr_28 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_4)));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        var_22 = ((((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9]))) < ((+(var_7))))) ? (arr_8 [i_9] [i_9]) : (0));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(var_6))))) ^ (max((((/* implicit */long long int) arr_10 [2] [i_9])), (var_7))))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1252412375)) < (min((((/* implicit */long long int) var_0)), (var_9)))));
}
