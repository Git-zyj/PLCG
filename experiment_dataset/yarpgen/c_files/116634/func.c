/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116634
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) 838254385);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */int) (_Bool)1);
                                arr_18 [i_0] [i_1 - 4] [i_2] [i_4] [i_4] = ((/* implicit */short) (((~((-(8171806677919406728ULL))))) >> (((-8934546852049857829LL) + (8934546852049857882LL)))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)56))))) / (((8171806677919406699ULL) >> (((((/* implicit */int) (short)-56)) + (59))))))), (((/* implicit */unsigned long long int) (short)12240)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) (signed char)-74);
    var_15 *= ((/* implicit */signed char) var_1);
}
