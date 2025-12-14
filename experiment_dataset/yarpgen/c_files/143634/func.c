/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143634
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) var_7);
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6LL] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) arr_1 [i_1] [i_1 - 1]))))) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((((/* implicit */_Bool) (-(-271990722)))) ? (((/* implicit */int) (unsigned short)65535)) : (var_2)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_4 - 2] [i_3] [i_3] [i_2] [0] [i_0]), (arr_11 [i_0] [i_1 + 2] [i_2] [i_1] [i_4 - 3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [(unsigned char)4] [i_2] [i_3] [i_4 + 1]))))) : (((/* implicit */int) max((arr_11 [i_0] [i_1] [i_2] [i_4 - 3] [(short)5] [i_1]), (arr_11 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [i_4]))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_2])) ? (1160763448) : (1160763471)))) ^ (((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_13 [i_1 + 1] [i_1])))));
                }
                for (long long int i_5 = 4; i_5 < 16; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_7] [i_1] [4LL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1160763448)) ? (((/* implicit */int) arr_11 [i_5 + 1] [i_1 + 2] [i_1] [(short)11] [i_1] [i_1])) : (((/* implicit */int) var_7))))) * (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 1] [i_7])))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 1160763448))));
                                arr_26 [(signed char)8] [i_1] [i_1] [i_5 - 3] [i_6] [17U] = (-(min((-1160763448), (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_5])) ? ((+(arr_19 [i_1 + 2]))) : (-1884743142112772390LL)));
                }
                var_16 = ((/* implicit */short) max(((+(arr_13 [i_1] [i_1 - 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_2);
}
