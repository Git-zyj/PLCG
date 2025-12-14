/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126233
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3890210014U)) ? (((/* implicit */int) (short)-18328)) : (((/* implicit */int) (short)18329))))) : ((~(arr_4 [10U] [i_1] [i_1]))))));
                var_18 &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 3780139253U)) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18328))) / (var_2))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3562434947U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)10] [(short)10])))))) : (3562434947U))))));
                var_19 *= ((/* implicit */_Bool) (((-((+(arr_4 [i_0] [(unsigned char)12] [i_1]))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) -953266164331495289LL))), (min((((/* implicit */long long int) 732532349U)), (arr_0 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */signed char) ((6457565682961190932LL) & (((/* implicit */long long int) -1485786203))));
}
