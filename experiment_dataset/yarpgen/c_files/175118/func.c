/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175118
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
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-25)), (((unsigned int) ((short) var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    arr_7 [i_2] [i_1] [(short)8] [i_2] = ((/* implicit */unsigned int) max((((int) min((var_12), (((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]))))), (((int) ((((/* implicit */_Bool) (signed char)25)) && (((/* implicit */_Bool) var_15)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_2 [i_3] [i_1] [i_0]), (((/* implicit */short) arr_4 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_15))));
                        arr_12 [i_0] |= max((((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2])))), ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
                        var_20 = ((/* implicit */unsigned char) max((((long long int) ((long long int) 6028523097204182171LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (-6028523097204182174LL))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_12))))), (((signed char) var_6)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 6028523097204182171LL)) ? (((/* implicit */int) (short)-28550)) : (((/* implicit */int) (short)25292))))), (max((6028523097204182171LL), (((/* implicit */long long int) var_11)))))))));
                        var_22 = ((/* implicit */short) (!(((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 3760204676516415844LL)))) || (((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_2] [i_4] [i_0] [i_2])) : (-1913602686651228719LL))))))));
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    }
                }
            } 
        } 
    } 
}
