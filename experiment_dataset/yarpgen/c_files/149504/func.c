/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149504
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
    var_17 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 *= ((/* implicit */int) ((min((min((var_11), (((/* implicit */unsigned int) var_14)))), (911479715U))) / (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_0] [i_0])))) / (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_4))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_3] [i_4])), (arr_6 [(unsigned short)12] [i_1])))) | (((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_0]) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))))));
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_12 [i_4] [i_3]), (((/* implicit */signed char) (_Bool)1)))));
                                var_20 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) ((arr_14 [i_2] [i_4]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))))) : (max((((unsigned int) arr_6 [i_2] [i_4])), (((/* implicit */unsigned int) (_Bool)1))))));
                                arr_17 [i_4] [i_3] [i_3] [18] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_2] [i_1 - 1]), (((/* implicit */int) (unsigned char)52))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_1 - 1])), (arr_8 [i_0] [i_0]))))) : ((+(arr_10 [(_Bool)1] [i_1 + 2])))));
                                arr_18 [i_3] [i_1] [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-62))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [(_Bool)1] [(_Bool)1] [i_5] [i_2] [18ULL] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) | (16038768499774908693ULL));
                                var_22 &= ((/* implicit */int) ((_Bool) (+(((unsigned long long int) var_13)))));
                                var_23 = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((arr_20 [(_Bool)1] [i_1] [i_2] [i_1] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_0] [i_0]), (((/* implicit */short) (_Bool)1)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_6)) ? (16038768499774908693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))), (16038768499774908693ULL))), (max((13315916354558723445ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
}
