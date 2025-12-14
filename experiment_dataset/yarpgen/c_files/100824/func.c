/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100824
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
    var_16 = ((/* implicit */_Bool) (-(var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) (~(min(((~(((/* implicit */int) (short)13269)))), (((/* implicit */int) arr_6 [i_0 - 2] [i_2]))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) (-2147483647 - 1));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)104)))))));
                                var_19 += ((/* implicit */signed char) var_13);
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-((~(min((3471994960U), (((/* implicit */unsigned int) var_4)))))))))));
                    var_21 = arr_16 [i_0] [i_1] [i_5] [(signed char)0];
                }
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_10 [i_0 - 1]))));
                    arr_19 [i_1 - 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
                var_23 = ((/* implicit */_Bool) arr_12 [i_0] [3LL] [(short)12] [(short)12] [3LL] [i_1]);
                arr_20 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) var_7);
                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2] [i_1]))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(822972332U))))))), (36028797018963967ULL)));
    var_26 = ((/* implicit */short) (~(max((((/* implicit */long long int) var_14)), (-1954738984041793085LL)))));
}
