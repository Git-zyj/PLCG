/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122178
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((((/* implicit */int) var_8)) - (var_2)))))), ((((~(var_9))) % (max((((/* implicit */unsigned int) (_Bool)1)), (56440739U)))))));
    var_11 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (min((((/* implicit */long long int) ((int) var_4))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) * (18LL))))));
    var_12 += ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) 10948423781914917703ULL);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_4] = ((/* implicit */long long int) arr_5 [i_0]);
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) min((arr_13 [13LL]), (((/* implicit */signed char) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_1 [(unsigned char)20])))))))) + (((/* implicit */int) max((((((/* implicit */int) var_8)) == (((/* implicit */int) (signed char)1)))), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
