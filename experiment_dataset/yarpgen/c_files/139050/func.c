/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139050
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_11 = var_1;
        var_12 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = (-(((((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) arr_2 [(unsigned char)4]))))) ^ (((/* implicit */int) var_10)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) 636541711U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : (arr_4 [i_1])))));
        var_13 = ((/* implicit */unsigned char) arr_2 [i_1]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */unsigned char) var_4);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((unsigned int) arr_3 [i_1])) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 - 1]))) | (min((arr_11 [i_3] [i_2] [i_1]), (((/* implicit */unsigned int) var_6))))))));
                        arr_14 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
            arr_15 [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (min((arr_4 [(unsigned char)13]), (((/* implicit */unsigned int) arr_7 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)15))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                for (unsigned char i_6 = 3; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((arr_21 [i_7]) << (((arr_2 [i_1]) - (700834459)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)27)) : (((/* implicit */int) (unsigned short)65515))))) : (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_10 [i_2]))), (var_9)))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (arr_8 [i_7])));
                            arr_24 [i_2] [i_2] [i_5 + 2] [9U] [i_7] [i_2] = ((((/* implicit */_Bool) 117016740U)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)0)));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) max((arr_8 [(_Bool)1]), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_7)))) / ((-(arr_2 [i_8]))))))));
            arr_29 [i_8] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_8] [i_8] [i_8] [i_1]))))) ? (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (arr_8 [(unsigned char)2])))) >> (((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_8] [18])) + (107))))) : (((/* implicit */int) arr_13 [i_1] [(_Bool)1] [i_8] [i_1] [i_8] [i_1])));
            arr_30 [i_8] &= ((/* implicit */int) ((unsigned int) arr_2 [i_1]));
        }
        arr_31 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((arr_16 [i_9] [i_9] [16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9]))) : (arr_23 [i_9] [(unsigned short)3] [i_9] [i_9] [9U]))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_9])) : (((/* implicit */int) var_3)))) + (15174))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)43))))))))));
        arr_35 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_5) - (((/* implicit */unsigned long long int) arr_33 [i_9]))))))) ? (((((/* implicit */_Bool) (unsigned short)65508)) ? (117016740U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    }
    var_18 *= ((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_5) : (var_2))) != (((/* implicit */unsigned long long int) ((var_4) * (var_9))))))));
    var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
}
