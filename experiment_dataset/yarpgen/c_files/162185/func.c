/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162185
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned char)0)))))) ? (max((((/* implicit */int) ((unsigned char) (unsigned short)0))), ((-(((/* implicit */int) (unsigned short)65508)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_0 [i_1]))))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) ((_Bool) (unsigned short)65535))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)44198)) : (((/* implicit */int) arr_1 [i_0]))))))));
                    var_19 &= ((/* implicit */unsigned char) ((_Bool) ((signed char) arr_2 [(_Bool)1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_8 [i_0] [i_2] [i_3 - 3] [i_4]), (arr_8 [i_0] [i_1] [i_3] [i_4 - 2])))) != (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((arr_10 [i_0] [(unsigned short)8] [i_2] [6ULL] [i_1] [i_3] [i_2]), (((/* implicit */unsigned int) arr_6 [i_1] [(unsigned char)3] [(unsigned char)2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [(unsigned short)8]))) > (arr_5 [(unsigned short)4] [(unsigned char)0] [i_2] [(unsigned short)4])))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((~(((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3])) ^ (((/* implicit */int) arr_1 [i_0]))))))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_12 [i_0] [i_2] [i_2] [i_3 - 2]), (arr_12 [i_2] [i_2] [i_2] [i_2])))) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) - (211))))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)4)))))), (((/* implicit */int) (signed char)32))));
    var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_10)), (((unsigned char) var_8))))), (var_0)));
}
