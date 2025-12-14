/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161029
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2]))))), (min((4399061916402047148ULL), (((/* implicit */unsigned long long int) var_7)))))))));
                    arr_7 [i_0] [i_0] [i_0 + 2] = ((/* implicit */short) 6188393051354933053LL);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) arr_10 [i_3] [i_3]))), (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3]))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), (((long long int) 6188393051354933053LL))))) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_9 [i_3] [i_3]))))))))));
        arr_12 [i_3] = ((/* implicit */unsigned short) (short)32767);
    }
    for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)178)), (2269227698U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [4LL]))) : (arr_2 [(unsigned short)18] [(unsigned short)18]))))));
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_4 + 1] [i_4 - 1])))))) ^ (((((/* implicit */_Bool) -6188393051354933064LL)) ? (min((((/* implicit */long long int) (short)32750)), (arr_6 [i_4 - 1] [i_4 - 1] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4 + 2])))))));
        arr_16 [i_4 - 1] = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_9 [i_4 + 2] [i_4 + 2])), (arr_8 [i_4 + 2] [i_4 + 2]))) / (((arr_8 [i_4] [i_4 + 1]) / (arr_8 [i_4] [i_4 + 1])))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (4161536) : (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5])) : (((/* implicit */int) arr_18 [i_5]))))))), (((unsigned int) min((var_10), (((/* implicit */long long int) arr_17 [i_5])))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_6), (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2432183731U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5]))))) : (min((var_2), (((/* implicit */unsigned long long int) arr_18 [i_5 - 1]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            {
                arr_27 [i_7] = ((/* implicit */_Bool) arr_25 [i_6]);
                var_17 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) 4252361565U)))));
                arr_28 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_6] [i_7] [i_7]), (arr_3 [i_6] [i_7] [i_7])))) ? (((((/* implicit */long long int) 4252361565U)) & (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_6]), (arr_0 [i_6])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) 6592144737902287734LL);
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 20; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            {
                var_19 *= ((/* implicit */long long int) arr_19 [i_8 + 1] [i_8 + 1]);
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (1140511011) : (((/* implicit */int) (short)-32746))));
            }
        } 
    } 
}
