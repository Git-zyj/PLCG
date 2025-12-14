/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113064
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
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (var_14))))))) ? (var_0) : (((/* implicit */long long int) (-((+(((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 6962602375075840611ULL))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))) : (min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0]), (((/* implicit */long long int) arr_8 [i_0] [i_3 + 4] [i_2])))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)27003))))));
                            var_21 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (short)-24295)))))), ((~(max((arr_12 [i_2] [i_3] [i_2] [i_3] [i_1] [i_1]), (((/* implicit */long long int) arr_11 [i_2] [i_2] [i_2] [i_3]))))))));
                            arr_15 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)46);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_18 [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */unsigned long long int) arr_13 [i_0])) : (var_6)))) ? (((arr_1 [i_0]) / (((/* implicit */int) (unsigned char)54)))) : (((((/* implicit */int) arr_8 [i_4] [i_4] [(unsigned char)10])) + (((/* implicit */int) arr_8 [(short)3] [i_1] [i_1]))))))));
                    var_22 = ((/* implicit */int) 509896778728302486ULL);
                    var_23 -= ((/* implicit */short) arr_2 [i_1]);
                    arr_19 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_4] [i_4])), (arr_5 [i_0] [6LL])))) ? (var_6) : (((/* implicit */unsigned long long int) (~(-6890593465289769150LL))))))));
                    var_24 = ((/* implicit */_Bool) ((int) arr_4 [i_0] [i_4]));
                }
            }
        } 
    } 
}
