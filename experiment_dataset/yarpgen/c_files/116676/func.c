/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116676
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
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)19))))), (((long long int) 4033180931U))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) -9223372036854775803LL);
                            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3] [i_1])) ? (4294967288U) : (arr_4 [i_0])))) ? (((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))) : (var_14))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])), (-883212408)))), ((-(7U))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((-405299532) != (-405299532)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_13);
    var_23 = ((int) ((11882388428102310203ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45)))));
}
