/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129305
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (max((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) var_14))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (short)28411)), (var_7)));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)117))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned long long int) (signed char)117)), (max((var_1), (((/* implicit */unsigned long long int) var_5)))))));
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((arr_8 [i_1] [i_1]) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (arr_10 [i_1] [i_1]))) << (((arr_10 [i_1] [i_1]) - (522881270)))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((unsigned char) (((+(((/* implicit */int) (signed char)96)))) == (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned short)40256)) : (((/* implicit */int) arr_7 [i_1])))))));
                        arr_19 [i_2] [i_1] [i_3] [i_3] [i_3] [i_2] = var_14;
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_31 [i_5] [i_5] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((((/* implicit */int) (unsigned short)26396)) + (((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */short) var_5))))) ? (var_4) : (((((/* implicit */_Bool) arr_24 [i_5 + 4])) ? (((/* implicit */unsigned long long int) var_9)) : (5180155905805858107ULL)))))));
                        var_18 = ((/* implicit */signed char) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_5 + 1] [i_8])) == (((/* implicit */int) arr_23 [i_5 + 2]))))))));
                        var_19 = ((/* implicit */short) (unsigned short)38168);
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_32 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2] [(signed char)8] [i_5 - 1])), (((((/* implicit */_Bool) 0U)) ? (13266588167903693508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) > (max((((/* implicit */unsigned long long int) arr_33 [i_5 + 4] [i_6] [i_5 + 4] [i_9])), (min((((/* implicit */unsigned long long int) (signed char)117)), (var_4)))))));
                        arr_34 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) var_12);
                    }
                }
            } 
        } 
    } 
}
