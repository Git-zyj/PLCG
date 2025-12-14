/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120196
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) ^ (var_8))))) ? (1111343928229448055LL) : (((/* implicit */long long int) min((((/* implicit */int) ((-2323285597028244045LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10118)))))), ((+(((/* implicit */int) (unsigned short)17685))))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [(unsigned char)0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_11 [i_3])))) ? (((((/* implicit */_Bool) (unsigned short)32283)) ? (((/* implicit */long long int) var_9)) : (max((((/* implicit */long long int) var_14)), (-8305418969743925627LL))))) : (((/* implicit */long long int) var_3))));
                                var_16 = ((((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */int) var_10))))) >= (((/* implicit */int) arr_7 [i_2] [i_2])));
                            }
                        } 
                    } 
                    arr_15 [(unsigned short)11] [i_1] [i_2] = ((/* implicit */unsigned char) ((max((arr_5 [(unsigned char)12] [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2 - 2] [i_2 + 1] [i_1 + 1] [i_0] [(_Bool)1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))));
                    var_17 &= ((/* implicit */int) (unsigned char)4);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_1);
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (min((var_8), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) | (var_0)));
}
