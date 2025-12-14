/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17298
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
    var_12 ^= var_7;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [6] [i_2] [i_0] [i_4] = ((/* implicit */int) (unsigned short)3);
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((var_1), (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) max((var_14), (max((min((((/* implicit */unsigned int) min((arr_5 [i_1] [i_1] [i_2] [i_0]), (((/* implicit */short) (_Bool)0))))), ((~(var_6))))), (((/* implicit */unsigned int) arr_1 [8LL]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_5);
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)137);
                                var_16 += ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), ((+(((((/* implicit */int) (unsigned short)65515)) >> (((arr_1 [(unsigned short)10]) + (495440444)))))))));
                                arr_19 [i_0] [i_0] [i_2 - 1] = min(((!((_Bool)1))), (arr_9 [i_0] [i_1] [i_2] [i_5] [i_6 + 1] [i_6] [i_1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
