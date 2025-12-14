/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176347
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
    var_12 = ((/* implicit */short) ((unsigned long long int) (-(((unsigned long long int) (_Bool)1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? ((-((+(arr_6 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(12138396095798037903ULL))))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_15 -= ((/* implicit */_Bool) (~(((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)26703)) : (((/* implicit */int) (_Bool)1))))) / ((+(-7638032642952813475LL)))))));
                            var_16 -= ((/* implicit */unsigned short) arr_0 [i_2]);
                            arr_11 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (70368744177663ULL)))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_0])))) : (max((arr_7 [i_0]), (((/* implicit */int) (short)-7997)))));
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(max((arr_7 [i_0]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_3]))))))) < (((arr_0 [i_3 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13203)))))));
                            var_18 &= ((/* implicit */int) ((max((var_3), (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) >> (((arr_6 [i_0] [i_1] [12U]) - (175818139U)))))))) / (((/* implicit */unsigned long long int) (-(max((-1178248389), (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
