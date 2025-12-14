/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110656
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
    var_19 = ((/* implicit */short) var_16);
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_21 = var_3;
                    var_22 = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    var_23 = var_6;
                    arr_11 [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)123)) != (1)))) > ((-(((1) << (((var_5) + (827303114)))))))));
                }
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_0] [i_0]) + (arr_6 [i_0] [i_0] [i_0])))) ? (arr_6 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1])) != (((/* implicit */int) var_7))))))));
            }
        } 
    } 
}
