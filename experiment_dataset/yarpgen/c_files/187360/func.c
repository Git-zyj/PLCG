/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187360
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((long long int) (unsigned char)229));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) max((((/* implicit */short) arr_6 [i_0] [i_1] [8U])), (max((((/* implicit */short) var_11)), (arr_3 [i_0] [i_3]))))));
                        arr_13 [i_0] [2U] [2U] [i_3] [i_0] [i_3] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)47)), ((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))));
                        arr_14 [i_3] [i_0] = min((min((((/* implicit */unsigned long long int) (+(var_7)))), (((((/* implicit */unsigned long long int) var_8)) - (9364332994401839294ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) & (((((/* implicit */_Bool) -6804109236714300919LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_4))))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) var_0)), (((long long int) ((var_1) << (((((/* implicit */int) (unsigned char)252)) - (250))))))));
    var_17 = ((/* implicit */unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6))));
}
