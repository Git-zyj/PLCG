/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137199
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_11 -= ((/* implicit */long long int) ((short) arr_1 [i_0]));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2875931836655415699LL)) ? ((~(var_3))) : (((/* implicit */unsigned long long int) (+(var_8))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [10ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1] [i_2]);
                        var_13 = ((/* implicit */unsigned long long int) (signed char)106);
                        var_14 = ((/* implicit */signed char) arr_5 [i_0]);
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_0 [i_2]) ? (3719231578U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_2]))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) (unsigned short)57288);
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4])) & (((/* implicit */int) arr_13 [i_4]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) - (var_8)))));
    }
    var_17 = ((/* implicit */unsigned short) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_10)) ? (6968943156888222641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6144987111694574482LL))))))), (((/* implicit */unsigned long long int) (unsigned char)30))));
}
