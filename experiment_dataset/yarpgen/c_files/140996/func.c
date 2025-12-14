/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140996
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8539)) | (((/* implicit */int) (unsigned char)109))))), ((+(arr_0 [8ULL])))));
                    var_13 = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (-1796637385))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = (-(min((((/* implicit */int) var_5)), (min((-1), (((/* implicit */int) (short)8539)))))));
                                var_15 += ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3 - 2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))) : (arr_3 [(unsigned char)14] [i_3 + 1] [(unsigned char)14])))), (var_0)))));
                                var_16 *= ((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((int) (short)-30083))));
                                var_17 *= ((/* implicit */unsigned short) var_4);
                                var_18 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) && ((!(((/* implicit */_Bool) arr_7 [12] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) (unsigned char)255);
                                arr_18 [i_5] [i_5] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2468544838U)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32119))) : (arr_17 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0] [14ULL])))))) ? (arr_2 [i_2 - 1] [i_0 - 1]) : ((-(((unsigned int) var_7))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(var_9))))))));
    var_21 = ((/* implicit */unsigned short) ((var_2) | (var_9)));
}
