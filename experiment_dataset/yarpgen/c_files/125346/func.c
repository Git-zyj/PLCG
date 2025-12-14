/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125346
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [(unsigned char)12] [i_1] = ((/* implicit */_Bool) max((((arr_3 [i_0] [i_1 + 1] [i_1 + 3]) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) arr_3 [(unsigned char)4] [i_0] [i_1])))), (((arr_3 [i_0] [i_0] [i_1 - 3]) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 3]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = max(((_Bool)0), ((_Bool)1));
                    arr_8 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_3 [19ULL] [(_Bool)1] [i_2])))) : ((~(((/* implicit */int) var_3)))))) * (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL)))) || (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))))))))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((var_2) ? (((var_11) / (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned char) var_0)), (var_5))), (((unsigned char) (unsigned char)64))))))));
    var_13 = ((/* implicit */unsigned char) (((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0ULL))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_18 [2ULL] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (14971509702230075817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((_Bool) (_Bool)1)))))));
                    arr_19 [i_5] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_3 [i_5] [(unsigned char)5] [i_3])) / (((/* implicit */int) arr_3 [20ULL] [i_4] [i_3]))))));
                }
            } 
        } 
    } 
}
