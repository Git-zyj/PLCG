/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105056
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_3 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))), (arr_6 [(signed char)14] [(signed char)5] [i_0])))) ? (max((((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) (unsigned short)65532)) : (-1311568620))), (((/* implicit */int) (unsigned short)65533)))) : (435142717)));
                                var_21 -= var_16;
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) (unsigned short)12);
                    arr_15 [i_1] [i_1] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_17)))) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (_Bool)1)))) : (((var_8) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)8660)))))))));
                    var_23 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (short)-9949)) >= (arr_13 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_1]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((1311568620) / (var_14)))) ? ((-(var_5))) : ((+(((((/* implicit */int) var_10)) | (((/* implicit */int) var_11)))))))))));
}
