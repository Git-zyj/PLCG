/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112620
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 + 3] = ((((/* implicit */_Bool) 8927058791699132705LL)) && (((/* implicit */_Bool) 424048736)));
        var_16 = ((/* implicit */_Bool) arr_0 [i_0 + 3]);
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 - 1])) % (((((/* implicit */int) arr_3 [i_1 + 1])) | (((/* implicit */int) arr_4 [i_1 + 2]))))));
        var_17 = 10448247646720236738ULL;
        var_18 -= ((/* implicit */short) max((((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_1])) > (((/* implicit */int) arr_4 [i_1 - 1])))), (((-1167447092) <= (((/* implicit */int) (_Bool)1))))))), (min((max((arr_3 [i_1]), (((/* implicit */signed char) var_12)))), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) var_14)))))))));
        arr_6 [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_4 [i_1])), (min((((/* implicit */unsigned int) 564256949)), (var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_19 ^= max((((/* implicit */unsigned long long int) max((max((var_1), (((/* implicit */int) var_12)))), (arr_7 [i_2])))), (min((((/* implicit */unsigned long long int) arr_7 [i_2])), (((8370298117768320001ULL) * (((/* implicit */unsigned long long int) 3245865051U)))))));
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)69)) || ((_Bool)1)))) / (((/* implicit */int) (_Bool)1))))), (arr_9 [i_2] [i_2])));
        var_21 = ((/* implicit */unsigned short) ((var_1) << (((895325505) - (895325505)))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_3] = ((/* implicit */long long int) var_14);
                arr_15 [i_3] = ((/* implicit */int) arr_4 [i_3]);
                arr_16 [i_3] [i_3 - 1] = max((((/* implicit */int) ((arr_13 [i_4] [i_4] [i_3]) <= (((/* implicit */long long int) -1183311069))))), (min((var_10), (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
