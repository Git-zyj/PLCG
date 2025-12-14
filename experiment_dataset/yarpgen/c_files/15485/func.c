/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15485
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((10834288318266158416ULL) >= (((/* implicit */unsigned long long int) var_6))))), ((unsigned char)255)));
    var_15 &= ((/* implicit */unsigned int) -1386183259);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((_Bool) -1474823099)))))));
        var_16 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (_Bool)0);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)42155)) ? (327824293U) : (((/* implicit */unsigned int) 1386183259))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) max((((/* implicit */int) (_Bool)1)), (arr_11 [i_1] [i_1]))))) * (((((/* implicit */int) arr_1 [i_1])) << (((/* implicit */int) (unsigned char)9))))));
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3]))));
                }
            } 
        } 
    }
    var_20 *= ((/* implicit */unsigned short) 5927070475209275942ULL);
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_15 [i_4] [i_4]) : (16426258108751554106ULL)))));
        arr_17 [(short)22] = 18446744073709551610ULL;
        var_21 &= ((((unsigned long long int) arr_14 [i_4])) <= (((/* implicit */unsigned long long int) ((unsigned int) 1474823099))));
    }
}
