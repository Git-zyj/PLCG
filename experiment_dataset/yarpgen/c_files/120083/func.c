/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120083
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
    var_15 += (~(((((/* implicit */_Bool) (short)8192)) ? (196608U) : (3158459148U))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_16 = ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-26484))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28672))) : (var_9))) : (((((/* implicit */_Bool) arr_0 [11] [i_3])) ? (1136508147U) : (arr_8 [i_0] [i_1] [10] [i_2] [10])))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((var_12) ^ (((/* implicit */int) arr_0 [i_1] [i_1 + 1]))))) : (max((2144019368223196732ULL), (arr_9 [i_2] [i_1 - 1] [1] [i_3] [i_1]))))))))));
                        var_18 = ((/* implicit */unsigned short) ((((max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_8 [i_0] [i_1] [i_0] [9] [(unsigned short)9])))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1136508147U)) ? (((/* implicit */int) (unsigned short)18122)) : (((/* implicit */int) (short)-8630)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) var_4));
                        arr_18 [i_6] [i_4] [i_0] = ((/* implicit */int) ((max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))))) >> (((((((/* implicit */_Bool) (~(2251799813423104ULL)))) ? ((-(3158459148U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) arr_14 [i_0] [i_5] [i_4] [i_0])))))))) - (1136508122U)))));
                        var_19 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_4]));
                    }
                } 
            } 
        } 
    }
}
