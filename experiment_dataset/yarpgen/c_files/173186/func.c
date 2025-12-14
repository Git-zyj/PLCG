/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173186
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_2 - 2] [i_0 + 2])))) : (max((arr_5 [i_0 - 1] [i_1]), (((/* implicit */long long int) arr_1 [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_13 [(_Bool)1] [(unsigned short)10] [(unsigned short)10] [(_Bool)1] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) arr_1 [i_2 - 2])))));
                        var_17 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0 + 2] [i_0])), (arr_5 [i_0] [i_3]))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_18 = (i_4 % 2 == 0) ? (((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1496))))))) ? (max((((((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_2] [i_4] [i_4])) & (((/* implicit */int) arr_15 [i_2])))), (((/* implicit */int) max((arr_16 [i_0] [i_0 + 3] [(signed char)9]), (arr_8 [i_0] [i_1] [i_0] [i_2])))))) : (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_10 [(signed char)6] [i_1] [i_1] [i_1])))) >> (((((/* implicit */int) max((arr_3 [i_0 + 1] [(unsigned short)1]), (((/* implicit */unsigned short) arr_14 [i_0 - 1] [i_0] [i_1] [i_2] [i_4]))))) - (65516)))))))) : (((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1496))))))) ? (max((((((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_2] [i_4] [i_4])) & (((/* implicit */int) arr_15 [i_2])))), (((/* implicit */int) max((arr_16 [i_0] [i_0 + 3] [(signed char)9]), (arr_8 [i_0] [i_1] [i_0] [i_2])))))) : (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_10 [(signed char)6] [i_1] [i_1] [i_1])))) >> (((((((/* implicit */int) max((arr_3 [i_0 + 1] [(unsigned short)1]), (((/* implicit */unsigned short) arr_14 [i_0 - 1] [i_0] [i_1] [i_2] [i_4]))))) - (65516))) + (116))))))));
                        var_19 = ((/* implicit */signed char) max((((unsigned long long int) arr_6 [i_0 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1525)) ? (4895749457654492727LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_15 [i_0 + 2])) : (((/* implicit */int) arr_10 [i_0 + 2] [i_2 + 1] [i_0 + 1] [i_4])))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)6893)))) - (6884))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 16; i_9 += 2) 
                        {
                            {
                                arr_32 [i_5] [i_6] [i_5] [i_8] [i_5] = ((/* implicit */short) ((((-1021163183) + (2147483647))) >> (((4879945234984685278LL) - (4879945234984685261LL)))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_6] [i_7 + 1])))) & (((((/* implicit */_Bool) arr_29 [i_5 + 3] [i_5 + 3] [i_9 + 2] [i_8] [i_9] [(signed char)8])) ? (arr_29 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6])))))));
                            }
                        } 
                    } 
                } 
                arr_33 [i_6] [i_5] [(unsigned char)15] = ((/* implicit */unsigned char) max((((arr_18 [i_5]) & (arr_18 [i_5]))), (((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (arr_18 [i_5])))));
            }
        } 
    } 
}
