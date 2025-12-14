/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125037
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
    var_12 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0 - 1] [i_0 - 1] [i_0] = var_8;
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)57499);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) var_0);
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_19 [i_5] [i_4 + 1] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_5])) ? (arr_6 [i_3] [i_3 + 1] [i_3] [i_5]) : (arr_6 [7LL] [i_3 - 1] [i_4] [i_5])))));
                    arr_20 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_5] [i_4] [i_3])) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57481)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)3762)), (12855311811932364361ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32271)) ? (((/* implicit */int) arr_18 [i_5] [(unsigned short)3] [i_5])) : (((/* implicit */int) var_9))))) : (var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65024))))) ? (((2603274542U) >> (((var_11) - (834385061U))))) : (((/* implicit */unsigned int) var_1))))));
                    var_14 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
        arr_21 [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (unsigned short)8160)), (((((/* implicit */_Bool) (short)17898)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) < (((/* implicit */long long int) ((((((/* implicit */int) arr_15 [(unsigned short)10] [i_3] [i_3])) == (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) var_6))))) : (((arr_2 [i_3 + 1] [i_3]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    }
    var_15 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */long long int) 2973011759U)) < (var_7)))) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 0LL)) ? (max((((/* implicit */long long int) 1218264651U)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
}
