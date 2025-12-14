/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178195
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
    var_13 = ((/* implicit */_Bool) ((unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)242))))))));
    var_14 = ((/* implicit */_Bool) var_12);
    var_15 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_11)) | (var_12)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0]) : (arr_6 [i_0] [i_1] [(unsigned char)8] [(signed char)10]))) : (((((/* implicit */_Bool) 13783421375053454167ULL)) ? (arr_3 [i_0]) : (1740537931U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_1))))))) ? (((/* implicit */unsigned long long int) 1740537944U)) : (((((/* implicit */_Bool) arr_10 [i_3] [0U] [i_2] [i_3] [i_3 + 1] [(unsigned char)8])) ? (((7718010311779933762ULL) - (var_2))) : (((var_2) % (((/* implicit */unsigned long long int) var_10))))))));
                                var_17 |= ((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) arr_13 [i_0] [i_1])))));
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
