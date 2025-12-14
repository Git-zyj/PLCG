/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146035
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
    var_14 = ((/* implicit */long long int) var_6);
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 14680064))))))), (max((var_5), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
    var_16 &= ((/* implicit */signed char) min((536870912), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_7))))) ? (var_1) : (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_4 [i_3])) + (((/* implicit */int) arr_4 [i_1 - 2]))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */int) arr_6 [i_0])) << (((var_8) - (761191013)))))))) * (min((var_5), (((/* implicit */long long int) arr_3 [i_4]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) arr_7 [i_0] [(_Bool)1] [i_2]);
                    var_21 = ((/* implicit */int) (~((-(arr_12 [i_2] [i_2] [i_2] [i_2] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) (-(max((min((arr_0 [i_0]), (((/* implicit */long long int) arr_7 [(unsigned short)13] [(unsigned short)13] [(unsigned short)4])))), (arr_0 [i_0])))));
                                var_23 = ((/* implicit */unsigned char) (+((~(var_8)))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(arr_12 [i_2] [i_5] [i_2] [i_1] [i_2])))) ? (var_13) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) max((14680065), (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [10] = ((/* implicit */short) ((int) ((unsigned int) min((arr_12 [4] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_8))))));
    }
    for (int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) arr_2 [i_7]);
        arr_23 [(_Bool)1] = ((/* implicit */unsigned int) arr_8 [i_7] [i_7] [i_7] [i_7] [(unsigned short)15] [(short)8]);
    }
    var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_5)))))));
}
