/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119714
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
    var_10 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [(_Bool)0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                            arr_11 [i_3] [(_Bool)1] [i_3] [7ULL] [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (unsigned short)23605)), (2213819130362024694LL))) > (((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_7)))), (((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max(((-(((var_0) * (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_1)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_0);
}
