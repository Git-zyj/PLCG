/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132272
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */int) var_9);
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
                arr_7 [11] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (var_2) : (var_0)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5)))), ((~(var_10)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) 1073725440)) ? (1743998845) : (((/* implicit */int) (signed char)4)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (var_2)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (max((((/* implicit */long long int) -1743998846)), (0LL)))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_6)))))) : (min((var_7), (var_7)))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) : (min((var_5), (((/* implicit */unsigned int) var_8))))))));
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    arr_15 [i_3] [4LL] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-127))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_3] [1LL] [6] [(short)9] [i_5] = ((/* implicit */int) (-(((((/* implicit */unsigned int) 373979826)) / (176550905U)))));
                                arr_22 [i_0] [i_4] [i_0] [i_4] [i_5] = ((/* implicit */int) var_10);
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) var_5)) : ((+((~(-5977535797807762572LL)))))));
                                arr_23 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)251)) << (((((/* implicit */int) (unsigned char)121)) - (118)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min(((~(var_2))), ((-((~(((/* implicit */int) var_1)))))))))));
                    arr_24 [i_0] = (~((+(((/* implicit */int) (signed char)-5)))));
                }
            }
        } 
    } 
}
