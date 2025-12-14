/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169517
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_15 = (-(((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (unsigned char)24)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((arr_0 [i_0]) >> (((arr_0 [i_0]) - (6629195685370047629ULL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_0])));
            arr_8 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)64))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1173))) : (arr_6 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_14 [19U] [i_2] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_1] [i_2 + 4]))) : (var_0)));
                        arr_15 [i_3] [i_3] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((var_7) ? (arr_0 [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) (+(arr_13 [i_0] [i_1] [i_1] [i_0])));
            arr_16 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) arr_12 [i_0] [20LL] [i_1] [i_1] [i_1] [i_1]))))));
        }
        for (int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    arr_28 [i_6] [i_6] [i_5] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (min((15018839624459900143ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_4]))))))));
                    arr_29 [i_0] [i_4] [i_5] [i_6] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)14437)))));
                    arr_30 [(unsigned char)0] &= arr_12 [(_Bool)1] [12LL] [(short)2] [(_Bool)1] [i_4] [i_6];
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~((~(var_4))))))));
                    arr_31 [i_0] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_12 [i_0] [i_5] [18LL] [i_6] [i_5] [i_6])) / (((/* implicit */int) arr_25 [i_0] [i_6 + 3] [i_5] [i_6]))))));
                }
                arr_32 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_26 [i_5] [(_Bool)1] [i_0] [i_0] [i_0]))))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_20 [i_4])))));
                var_18 = ((/* implicit */unsigned int) (((~(((/* implicit */int) min((((/* implicit */short) (signed char)119)), (var_10)))))) < (((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */unsigned int) (_Bool)1);
            }
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(min((arr_11 [8U]), (arr_11 [4U]))))))));
            var_21 = ((/* implicit */signed char) min((((arr_1 [i_4]) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_4]))))), (max((((/* implicit */long long int) arr_23 [i_4] [i_4] [(short)10])), (arr_9 [i_0] [i_0] [i_4] [i_4])))));
        }
        var_22 += ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_7))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
    {
        arr_35 [i_7] [i_7] = ((/* implicit */_Bool) (-(14971206721417203260ULL)));
        arr_36 [8LL] |= ((/* implicit */unsigned short) min((((/* implicit */int) ((arr_13 [i_7] [i_7] [i_7] [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7])))))), (((((/* implicit */int) arr_5 [i_7] [i_7])) + (((/* implicit */int) arr_26 [(signed char)12] [i_7] [i_7] [i_7] [18]))))));
        arr_37 [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 354341381U)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (short)-21296))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (arr_0 [i_7]) : (((var_7) ? (((/* implicit */unsigned long long int) var_3)) : (2277279781791238715ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) (short)26294)) : (((/* implicit */int) arr_26 [14] [4ULL] [(unsigned char)20] [i_7] [i_7]))))) : (min((arr_13 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_7] [i_7] [i_7] [i_7]))))))))))));
    }
    var_24 = ((/* implicit */int) var_14);
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_0))));
}
