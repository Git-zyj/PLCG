/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134522
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)-10728)) ? (4294967295U) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_3])))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))))));
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    }
                    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(short)0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_1] [i_0])))), (((/* implicit */int) var_17))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            {
                var_23 += ((/* implicit */_Bool) ((short) (signed char)-19));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_20 [i_5] [i_5] = ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 3]))) ^ (arr_16 [i_4] [i_4])));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12847828798185522748ULL)) ? (arr_16 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14351)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned short)51187))))))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_3 [i_4 + 1]);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_23 [i_4] [i_5 - 2] [i_7] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)65526);
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_4 + 1])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4 + 3] [i_5] [i_7] [23U])))))));
                    arr_24 [i_5] [i_5] = ((/* implicit */_Bool) ((signed char) arr_0 [i_4 + 3] [i_4]));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_4] [i_8] [(unsigned short)9] [i_5 + 1]))))) ? (((/* implicit */int) arr_19 [(unsigned short)2] [i_5 + 1] [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */int) (unsigned short)51195))))), (7U)))));
                    arr_27 [i_8 + 1] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) (unsigned short)4896)) << (((((/* implicit */int) (unsigned char)111)) - (102))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_5] [i_8 + 1] [i_8])), (arr_14 [i_5])))))) ^ (((int) min(((unsigned short)3), ((unsigned short)65534))))));
                    arr_28 [(_Bool)0] [(short)0] [(_Bool)0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4 + 2] [i_8 + 1]))) : (arr_13 [i_5 - 2]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_3 [i_4 - 1])) : (((/* implicit */int) arr_10 [i_4 + 1] [(short)15] [i_4 + 2] [i_8 + 1])))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_19)))), (var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        for (unsigned int i_10 = 2; i_10 < 23; i_10 += 2) 
        {
            {
                var_29 = ((/* implicit */unsigned int) arr_29 [i_9] [i_10]);
                var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)42486))));
            }
        } 
    } 
}
