/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120186
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((3219115080808860223ULL), (((/* implicit */unsigned long long int) (-(((498898180U) >> (((78135096U) - (78135095U)))))))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_19) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18)))) - (21739)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((18446744073709551600ULL), (((/* implicit */unsigned long long int) var_18)))) >= (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 1016028136U)) - (3791834259201960357LL))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)7)))))));
            arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(2813101422836837307LL)))) ? (((((/* implicit */_Bool) -2813101422836837315LL)) ? (((/* implicit */int) (unsigned short)64)) : (arr_1 [i_0] [i_0]))) : ((((_Bool)1) ? (arr_1 [7] [i_1]) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) 2813101422836837307LL);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1 - 2] [i_2])) - (((/* implicit */int) arr_9 [i_2] [(unsigned short)5] [i_3]))));
                    }
                } 
            } 
            var_25 -= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43024)))))));
        }
        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((_Bool) 11276285307789494155ULL))))) | (max((((((/* implicit */long long int) ((/* implicit */int) arr_13 [8U] [i_4] [i_4]))) & (arr_10 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_15 [i_4]))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_14 [i_0] [i_0] [11U]), (((/* implicit */long long int) 2089236561)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((arr_14 [i_0] [(unsigned char)12] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_4 + 2] [(signed char)10]))) : (max((((/* implicit */long long int) var_5)), (arr_10 [(short)2] [i_0] [i_0] [i_0])))))) : ((((!(((/* implicit */_Bool) -2089236561)))) ? (min((((/* implicit */unsigned long long int) 2089236560)), (arr_0 [i_4 - 1] [14ULL]))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))))));
            var_28 = arr_4 [i_4] [(unsigned short)1] [(unsigned short)1];
            arr_16 [i_0] [i_4 + 1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_4] [i_4 - 1] [i_4])) | (((/* implicit */int) arr_9 [i_0] [i_4 - 1] [i_0]))))), (max((-1441080211619599302LL), (((/* implicit */long long int) arr_9 [i_4] [i_4 + 1] [i_4]))))));
        }
        var_29 = ((/* implicit */unsigned short) arr_15 [i_0]);
        arr_17 [0LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1068836319348988571ULL))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        for (short i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            {
                var_30 *= ((/* implicit */unsigned short) 2089236560);
                var_31 = ((/* implicit */long long int) 0);
            }
        } 
    } 
}
