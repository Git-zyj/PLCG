/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165315
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_1)))) != (((/* implicit */int) arr_3 [i_1 - 3] [i_2 - 2])))))) < (min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [(unsigned char)14] [i_0]))) | (-1217990894626449750LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))))))))));
                    arr_8 [(short)3] [i_1] = ((/* implicit */long long int) -32760147);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = 1217990894626449764LL;
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_11))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_10))));
}
