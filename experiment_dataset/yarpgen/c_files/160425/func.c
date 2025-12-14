/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160425
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
    var_10 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) (short)20613);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) -1843344980022327665LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_3] [i_0 - 1] [i_3] [i_2] [i_1])))))));
                        var_12 = arr_7 [i_0] [i_0];
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)20613))));
                        arr_15 [i_4] = ((/* implicit */short) arr_10 [i_1] [i_2] [4LL]);
                        var_13 *= ((/* implicit */long long int) (!(arr_1 [i_0 - 2])));
                    }
                    arr_16 [i_0 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4646604806037100347LL)) ? (((/* implicit */int) (short)20613)) : (((/* implicit */int) arr_3 [i_0 - 1]))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                {
                    var_14 += ((long long int) ((var_7) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((short) var_8)))));
                                arr_27 [i_1] [i_6] [(_Bool)1] [i_6] [i_7] [i_1] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_0 - 2] [i_0 + 1]))));
                                arr_28 [i_6] = ((((/* implicit */_Bool) (-(var_5)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((5995739184666626429LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_29 [i_1] = ((/* implicit */short) var_4);
                }
                var_16 += ((/* implicit */short) -171462626932957838LL);
            }
        } 
    } 
    var_17 += ((var_8) > (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9075451127878614523LL)))))))));
    var_18 = (short)30660;
}
