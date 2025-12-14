/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136967
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3]))))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_7 [i_3 + 1] [i_3 - 3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]), (arr_7 [i_3] [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 1] [i_3 - 1])))) ? (4271334253813327553ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) arr_7 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)58153))))), (18446744073709551595ULL)))));
                        arr_18 [i_0] [i_5] [i_5 + 4] [i_5 - 2] [i_5] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_5 + 3] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5 - 1] [i_0])) : (((/* implicit */int) arr_14 [i_5 + 4] [i_5 - 1] [i_0])))), ((~(((/* implicit */int) arr_4 [i_0] [i_4] [i_0] [i_6]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_5] [i_0]))))));
                            var_15 = ((/* implicit */long long int) (-(4271334253813327553ULL)));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_5 - 3] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 3] [i_5 + 2]))) : (arr_11 [i_5 + 4] [i_4])));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) (+(18374686479671623680ULL)));
                            var_18 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_5 [i_5] [i_5 + 3] [i_5] [i_5 + 2]))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_5] [i_5] [i_6] = ((/* implicit */short) var_10);
                            var_19 = ((/* implicit */short) var_3);
                            var_20 = ((/* implicit */unsigned short) ((min(((-(4271334253813327553ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_5] [i_4]))))) - (((/* implicit */unsigned long long int) var_10))));
                            var_21 = ((/* implicit */short) ((_Bool) min((var_10), (((/* implicit */unsigned int) arr_2 [i_6] [i_9])))));
                        }
                    }
                } 
            } 
        } 
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) var_9))))))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (int i_12 = 2; i_12 < 22; i_12 += 4) 
                {
                    {
                        arr_37 [i_11] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_24 [i_0] [i_12])))));
                        var_22 = var_10;
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((((unsigned int) 0LL)) / ((~(max((((/* implicit */unsigned int) var_5)), (var_1)))))));
    /* LoopSeq 1 */
    for (int i_13 = 0; i_13 < 22; i_13 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((arr_22 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) var_7))));
        var_25 = arr_34 [i_13] [i_13] [i_13] [i_13];
    }
}
