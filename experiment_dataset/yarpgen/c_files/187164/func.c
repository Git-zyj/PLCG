/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187164
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
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_1] = ((/* implicit */int) min((min((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (-7150654958977520398LL))), (((/* implicit */long long int) min((var_14), (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
                    arr_9 [i_2] [i_2 - 1] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_3), (1050555349U))))));
                    var_16 = ((/* implicit */short) min((((/* implicit */int) var_9)), ((((+(((/* implicit */int) (unsigned char)64)))) ^ (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (short)-2048)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((((/* implicit */int) var_12)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), ((!(((/* implicit */_Bool) ((long long int) (unsigned char)192))))))))));
}
