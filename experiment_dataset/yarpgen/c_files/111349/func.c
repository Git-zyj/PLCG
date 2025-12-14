/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111349
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
    var_12 = ((/* implicit */unsigned char) ((max((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)4))))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) -784393521)) : (((((/* implicit */_Bool) (unsigned char)193)) ? (58720256U) : (((/* implicit */unsigned int) -635191809))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((min(((-(((/* implicit */int) arr_10 [i_4] [i_2] [i_2])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_4])) : (((/* implicit */int) var_5)))))) + (2147483647))) << (((var_2) - (982753279U)))));
                    var_15 -= ((/* implicit */unsigned char) var_3);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3339728964U)) ? (245065595) : (((/* implicit */int) (unsigned short)50755))))) ? (2416613788U) : (((/* implicit */unsigned int) 245065569))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2 - 2] [i_4 - 1] [13])) ^ (((/* implicit */int) var_7))))) : (((((/* implicit */unsigned int) 784393535)) | (arr_11 [i_3] [i_2 + 1])))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 1])), ((unsigned short)0)))) * (((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)65524))))));
        arr_13 [i_2 - 2] [i_2 + 1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) arr_10 [1U] [i_2 - 2] [i_2 - 2])) ? (3339728947U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 + 1])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (arr_11 [i_5 + 1] [i_5 - 1])))) ? (((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_6])) ? (var_11) : (arr_11 [i_5 + 1] [i_6]))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5 + 1])) ? (arr_11 [i_5 + 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))))))))));
                var_19 = ((/* implicit */int) min((var_19), (min((((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) (unsigned short)11)))), (((((arr_1 [i_5] [i_6]) + (((/* implicit */int) var_5)))) / (((/* implicit */int) var_9))))))));
                arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((-999211766) <= (((/* implicit */int) (unsigned char)255))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((min((((/* implicit */unsigned int) var_3)), (arr_11 [i_5 - 1] [i_5 - 1]))) << (((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)132))))) : (((/* implicit */int) arr_9 [i_6])))) - (112)))))));
            }
        } 
    } 
}
