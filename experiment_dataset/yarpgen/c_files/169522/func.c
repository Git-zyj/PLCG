/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169522
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (var_10)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_1]))))) - (max((((((/* implicit */_Bool) var_1)) ? (1982367268U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1982367269U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)32767)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_2 - 1])) | (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1]))));
                    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28672)))))));
                    arr_8 [3U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 14075771552513744468ULL))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_0])) <= (((/* implicit */int) arr_4 [i_3] [i_0 + 1] [i_3 + 1])))))));
                    var_19 = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)48)))) - (((((/* implicit */_Bool) 1982367268U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                    var_20 = ((/* implicit */_Bool) (-((((_Bool)1) ? (4370972521195807157ULL) : (2539562019636558826ULL)))));
                }
            }
        } 
    } 
    var_21 = ((var_4) - (max((min((var_5), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2312600036U)))))));
}
