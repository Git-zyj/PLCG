/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110144
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) 2305843009213693952ULL);
        var_16 *= ((/* implicit */short) (unsigned short)36291);
        arr_5 [i_0] = (unsigned short)4874;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (_Bool)0);
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)36291);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 24; i_5 += 2) 
                    {
                        arr_19 [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (unsigned short)11);
                        var_19 = ((/* implicit */short) (unsigned short)21182);
                    }
                    var_20 = ((/* implicit */unsigned int) (short)5);
                    var_21 = ((/* implicit */unsigned short) 15090937172060005096ULL);
                }
            } 
        } 
    }
    var_22 &= var_8;
}
