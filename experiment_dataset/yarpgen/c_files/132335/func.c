/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132335
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (+(max((((var_6) << (((((/* implicit */int) var_7)) - (20926))))), (var_6))))))));
    var_11 += ((/* implicit */signed char) max((((((/* implicit */int) var_3)) * (var_0))), ((+(var_0)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_1 + 3] [i_1 + 3] [i_0] = ((/* implicit */short) ((4292503075U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) arr_3 [i_1 + 2] [i_2 + 1]);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) arr_3 [i_3] [i_3]);
        var_13 = ((/* implicit */signed char) ((max((arr_15 [i_3] [i_3]), (((/* implicit */long long int) arr_2 [i_3] [i_3])))) == (((/* implicit */long long int) (+(arr_7 [i_3] [i_3]))))));
        var_14 = ((((/* implicit */int) ((arr_15 [i_3] [i_3]) >= (arr_15 [i_3] [i_3])))) << (((max((arr_7 [i_3] [i_3]), ((-(arr_7 [i_3] [i_3]))))) - (1434629964))));
        arr_16 [8ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_2 [i_3] [i_3]), (arr_2 [i_3] [i_3]))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_15 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3])))))) | (arr_15 [i_3] [i_5 + 1]));
                        arr_24 [i_4] = ((/* implicit */signed char) arr_1 [i_6]);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((/* implicit */unsigned int) -748268270)), (4292503060U))))));
}
