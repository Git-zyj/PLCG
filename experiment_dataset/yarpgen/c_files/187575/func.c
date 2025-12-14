/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187575
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
    var_11 = ((/* implicit */unsigned char) (+(max(((~(var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)1)))))))));
    var_12 = ((/* implicit */short) (signed char)-2);
    var_13 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_9 [i_2] [i_0] [i_0] = arr_8 [i_0];
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4095))));
                    var_15 = ((/* implicit */unsigned char) arr_8 [i_0]);
                }
                var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1LL)))) ? (max(((+(arr_3 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                var_17 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_6 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [0])))))) : ((+(arr_2 [(short)12])))));
                            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [6ULL])) ? (min((((/* implicit */int) arr_14 [i_0])), (arr_5 [i_0 + 1]))) : (arr_13 [i_4] [i_3] [i_1] [i_0])));
                            arr_15 [i_0] [i_0] [9LL] [i_0] [i_4] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_8 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) var_3)))))));
}
