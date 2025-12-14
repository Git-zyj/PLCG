/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158009
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
    var_20 = ((/* implicit */short) ((unsigned short) var_4));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [2ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 951583042U)) >= (5889197642354117591LL)));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0]))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((int) var_9))))), ((+(-5889197642354117587LL)))));
                    var_22 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
}
