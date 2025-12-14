/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150123
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) (-(arr_1 [i_0 - 1])));
        arr_2 [i_0 + 1] = ((unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)49)) && (((/* implicit */_Bool) (unsigned short)3474))))) != ((-(((/* implicit */int) var_2))))));
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))), (((((unsigned long long int) var_5)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-101)))))))));
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_6 [i_4 + 1]))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_10))));
        var_14 = ((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1]);
        var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) var_2)))))), (arr_6 [i_1])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (signed char i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / ((-(((/* implicit */int) min((arr_25 [24ULL] [i_6] [i_7 + 1]), (((/* implicit */short) var_0))))))))))));
                                arr_31 [i_5] [i_5] [i_7] [i_8] [i_8] = var_8;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_27 [i_5] [i_5] [i_5] [(short)8] [i_7] [i_7 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_27 [i_5] [i_5] [i_5] [16] [16] [i_7 - 1]))))));
                }
            } 
        } 
        arr_32 [i_5] = ((/* implicit */short) (unsigned char)255);
        arr_33 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((var_6) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((var_7) - (5816874853183517279LL)))))))));
        arr_34 [i_5] = ((/* implicit */unsigned char) var_1);
    }
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        for (long long int i_11 = 1; i_11 < 7; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_4);
                    var_19 += ((/* implicit */short) (_Bool)1);
                    arr_44 [i_10] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_35 [i_12 - 3] [i_10]), (((/* implicit */short) var_4)))))));
                }
            } 
        } 
    } 
}
