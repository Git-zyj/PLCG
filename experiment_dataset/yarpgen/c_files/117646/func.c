/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117646
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((arr_2 [i_1]) ? (arr_3 [0U]) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))))))))));
                var_11 += ((/* implicit */unsigned int) min(((unsigned char)113), ((unsigned char)231)));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-26)) / (-1571414173)));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned int) (-((((-(((/* implicit */int) arr_8 [i_3] [i_3] [i_3])))) + (((/* implicit */int) arr_11 [i_2] [i_3] [(short)12]))))));
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) arr_7 [(unsigned short)8]);
                var_14 = ((((/* implicit */int) ((unsigned char) arr_8 [i_2] [i_2] [i_2]))) - (((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3])))));
                arr_13 [i_3] [i_2] = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) arr_11 [1LL] [i_3] [i_3])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_19 [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_4] [i_5])) * (((((/* implicit */int) arr_16 [i_4] [i_5] [i_5])) - (((/* implicit */int) arr_16 [i_5] [i_5] [i_4]))))));
                var_15 = ((/* implicit */signed char) arr_17 [i_5] [i_5] [i_4]);
                /* LoopNest 3 */
                for (unsigned short i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_7] [i_8])) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_25 [i_4] [i_6]))))))) > (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_6]))) & (arr_17 [i_4] [i_4] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_6] [i_7] [(signed char)18])) ? (((/* implicit */int) arr_14 [5ULL] [i_6])) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))))))));
                                var_17 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) min((arr_14 [i_8] [i_5]), (((/* implicit */short) arr_22 [i_6] [i_6] [i_6] [i_6]))))) ? (((((/* implicit */unsigned int) 22)) | (4294967289U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)43093))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) max((var_18), (((signed char) ((((/* implicit */int) arr_14 [i_4] [i_5])) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)143)) <= (((/* implicit */int) (unsigned char)105))))))))));
                arr_29 [i_4] = ((/* implicit */short) ((((/* implicit */int) (((+(((/* implicit */int) arr_22 [8ULL] [i_5] [i_5] [i_5])))) != (((0) >> (((arr_17 [(short)13] [18U] [i_4]) - (2923232437248657201ULL)))))))) % (((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))));
            }
        } 
    } 
}
