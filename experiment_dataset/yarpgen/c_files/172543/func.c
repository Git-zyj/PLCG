/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172543
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 3] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ^ (((-3107576506809244784LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1 - 1] [8ULL] [i_1 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_0 + 1] [i_1 - 2])) ? (arr_4 [i_0 - 1]) : (((/* implicit */long long int) -348703570)))), (((/* implicit */long long int) (_Bool)0))));
                            var_16 = ((/* implicit */unsigned long long int) max((-9102239390481974135LL), (((/* implicit */long long int) (_Bool)1))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_1 [i_1] [i_2])))) << (((arr_11 [i_3] [i_3] [i_0] [i_1] [i_0]) - (6573004714582264639LL)))));
                            arr_14 [i_0 - 1] [21ULL] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) ^ ((~(((/* implicit */int) (_Bool)1))))))));
                            var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((/* implicit */unsigned long long int) var_0)) > ((-(10968805308674933238ULL))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (max((((/* implicit */unsigned long long int) var_0)), (12498914710817644039ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
    var_21 = ((/* implicit */_Bool) max((max((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) var_10)) & (((/* implicit */int) var_3)))))), (min((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_10)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_22 = var_11;
}
