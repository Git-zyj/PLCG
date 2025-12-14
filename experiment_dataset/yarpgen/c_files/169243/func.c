/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169243
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_10 -= ((/* implicit */unsigned int) var_7);
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_3))))))))));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((((/* implicit */int) var_8)) >> (((var_4) - (2192996758142250902LL)))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_4)))))))));
                                var_13 = ((/* implicit */_Bool) max((var_13), (((var_8) || (var_3)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        var_14 *= ((/* implicit */unsigned int) var_9);
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_6))))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-106)) < (((/* implicit */int) (unsigned char)171))))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_1] &= var_5;
                        var_16 &= var_0;
                        var_17 &= ((/* implicit */unsigned long long int) var_5);
                    }
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((((((/* implicit */int) (unsigned short)44731)) << (((((/* implicit */int) (unsigned short)44731)) - (44724))))) - (5725538)))));
}
