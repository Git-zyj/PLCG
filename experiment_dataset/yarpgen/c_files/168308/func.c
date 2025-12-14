/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168308
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1]))))) : (arr_11 [i_0] [i_1] [i_4] [i_1] [i_4] [i_1 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : ((+(var_0)))));
                                var_14 = ((/* implicit */_Bool) ((((arr_8 [i_0] [i_1] [i_2] [i_1 + 3]) ^ (arr_8 [i_4] [i_1] [i_2] [i_1 + 2]))) & (max((((/* implicit */long long int) var_9)), (arr_8 [i_0] [i_0] [i_0] [i_1 + 1])))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_3 [(short)19] [i_3]))))) : (((((/* implicit */_Bool) (short)-13327)) ? (((/* implicit */int) (short)-13314)) : (((/* implicit */int) (unsigned char)126)))))) != ((~(max((arr_7 [i_0] [i_0] [i_3] [i_3]), (((/* implicit */int) var_7)))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_4 [(_Bool)1]))));
        arr_15 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3915)) ? (17115584257758546828ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)83)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) arr_1 [i_5] [i_5])) : (arr_5 [i_5] [(short)8] [i_5])))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (arr_1 [i_5] [i_5]))) | (arr_7 [i_5] [i_5] [(short)17] [i_5])))) : (((((((/* implicit */_Bool) (unsigned short)60625)) ? (407552215U) : (2390014176U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-78))))))));
    }
    var_18 = ((/* implicit */unsigned short) var_2);
}
