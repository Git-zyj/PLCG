/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167757
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */long long int) (+(min(((-(((/* implicit */int) var_9)))), ((+(((/* implicit */int) arr_2 [13U] [i_1]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 78721235))))));
                                var_14 = (+((-(min((-6564928985539688797LL), (((/* implicit */long long int) var_0)))))));
                            }
                        } 
                    } 
                    arr_15 [3] [10U] [3] = (-(min((6564928985539688798LL), (4746235379394315106LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (-((~((-(((/* implicit */int) arr_7 [i_1] [i_5] [i_6]))))))));
                                arr_22 [i_0] [i_1] [14LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6195119296598965078LL))));
                                arr_23 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (~((~((-(((/* implicit */int) (unsigned char)172))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 4) 
    {
        for (short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 12; i_9 += 1) 
            {
                {
                    arr_30 [i_7] [i_8] [i_9 + 1] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (+(var_5)))))), (min(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) var_10))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_37 [i_7] [i_8] [i_8] [i_10] [i_7] = ((/* implicit */unsigned char) max(((-((-(arr_9 [i_7] [i_8] [i_11]))))), (max((((/* implicit */unsigned long long int) (~(-6564928985539688797LL)))), (min((((/* implicit */unsigned long long int) arr_4 [i_8])), (var_10)))))));
                                var_16 = ((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_9] [i_10 + 2])))))))));
                            }
                        } 
                    } 
                    arr_38 [i_7] [i_8] [(_Bool)1] [i_8] = (!(((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_1 [19])), (8119460335069583863LL)))))));
                    arr_39 [i_7] [i_7] [i_8] = ((/* implicit */_Bool) (-(min((max((6564928985539688796LL), (((/* implicit */long long int) -3908902)))), (((/* implicit */long long int) (+(var_3))))))));
                    arr_40 [i_7] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(var_5))))))));
                }
            } 
        } 
    } 
}
