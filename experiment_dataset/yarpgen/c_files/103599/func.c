/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103599
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0))))))) ? (((var_10) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) 867594708435786578LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8)))))) : (((/* implicit */long long int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (+(var_3)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = arr_4 [i_0] [i_0] [i_0];
                            arr_11 [i_1] = ((/* implicit */long long int) var_10);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_6 [(unsigned char)1] [i_1 + 3] [i_1] [i_1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (((+(1461916104U))) != (arr_7 [i_0] [i_1] [i_4] [i_1 + 3])));
                            var_22 = (-(391457845U));
                        }
                    } 
                } 
                var_23 += ((/* implicit */short) var_12);
                arr_18 [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_4 [19U] [i_1] [(_Bool)1]))))));
            }
        } 
    } 
}
