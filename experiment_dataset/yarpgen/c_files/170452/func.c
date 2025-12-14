/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170452
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) - (45827))))) - (((/* implicit */int) ((unsigned short) (short)12492)))));
                    var_15 = ((/* implicit */unsigned short) ((((unsigned long long int) (_Bool)1)) - (((unsigned long long int) var_13))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) (unsigned short)21416));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)230)) ^ (((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned int) var_9));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned short) ((_Bool) var_5))))));
        var_19 = ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21416))));
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) (((-2147483647 - 1)) <= (((/* implicit */int) var_1))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned long long int) var_10)))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) arr_12 [i_4 + 1] [i_4 + 1])));
        arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_9 [i_4 + 1]))) > (((/* implicit */int) ((short) var_9)))));
    }
    var_21 = ((/* implicit */_Bool) ((unsigned int) ((int) ((int) (unsigned char)0))));
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
