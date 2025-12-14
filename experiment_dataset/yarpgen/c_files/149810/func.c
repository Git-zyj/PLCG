/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149810
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
    var_11 = (unsigned short)60635;
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (-((-(7838247996959606655ULL)))));
                                var_13 ^= ((/* implicit */short) (unsigned short)35094);
                                var_14 = ((/* implicit */_Bool) (unsigned short)35094);
                            }
                        } 
                    } 
                    arr_12 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6089)))))));
                    var_15 = ((/* implicit */short) 549755748352ULL);
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) 4162438851554145698ULL);
                                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)84))));
                                arr_19 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_6] = (signed char)-74;
                                arr_20 [i_0] [(short)10] [i_2] [(short)10] [i_6] = ((/* implicit */short) (_Bool)0);
                                var_18 = (short)27630;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
