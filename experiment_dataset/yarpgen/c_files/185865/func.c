/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185865
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) ((arr_4 [i_0]) >> (((var_9) - (7751198672177520281LL)))));
                    var_13 = ((signed char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_0 [i_1] [i_1 - 2])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (signed char)-96))));
                        var_15 = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_2] [i_0 + 1])))));
                        var_16 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (-1009609845) : (-505223102))));
                    }
                    var_17 = ((/* implicit */long long int) max((485816192530104761ULL), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_5)), (-1009609845))) < (((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (int i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (1009609844))) ^ (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((arr_13 [i_0] [i_0] [i_0 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2]) + (arr_13 [i_0] [i_0] [i_0 - 1] [i_5 - 2] [i_5] [i_5]))))))));
                                var_20 = ((/* implicit */int) ((min(((+(var_4))), (((/* implicit */long long int) ((unsigned int) var_6))))) & (((/* implicit */long long int) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) max((1009609844), (((/* implicit */int) arr_14 [i_0] [i_0] [0LL] [i_0 - 1] [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = (signed char)-58;
    var_22 = ((/* implicit */unsigned long long int) (-(-1009609848)));
}
