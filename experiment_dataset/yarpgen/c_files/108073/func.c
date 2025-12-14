/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108073
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (+(((/* implicit */int) (signed char)58))));
        arr_4 [i_0] = var_10;
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned short) (signed char)-23))) * (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [8])))))) ^ (((/* implicit */int) ((unsigned char) arr_3 [i_1])))));
        var_14 -= ((/* implicit */int) (+(((long long int) var_11))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) arr_13 [i_1] [i_2] [i_1]);
                    arr_14 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((long long int) arr_2 [i_3]))) ? (((((/* implicit */_Bool) (signed char)70)) ? (arr_11 [i_1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) 4294967280U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_10 [i_1] [i_1] [i_3]) : (((/* implicit */long long int) arr_6 [i_1] [i_3 + 1]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2 + 1])))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_16 = min(((_Bool)0), ((!(((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5])))));
                            arr_24 [(signed char)11] [i_5] [i_6] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_21 [i_6])), (arr_19 [i_5] [i_6] [i_5 + 1] [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))), (6236373364662585222LL)));
                            arr_25 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */short) (-(arr_23 [i_4])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2] [(unsigned char)2]))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((var_1), (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 8; i_12 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */short) arr_37 [(signed char)0] [(short)0] [(short)0] [i_12]);
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_8 - 1] [(unsigned char)10])))))));
                                var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) 4294967295U)) | (arr_20 [(unsigned char)2] [i_9 - 1] [i_9] [(unsigned char)2]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_32 [i_8 - 1] [i_9 - 1]))))));
                }
            } 
        } 
    } 
}
