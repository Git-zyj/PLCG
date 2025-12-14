/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11014
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((2047) == (1549224231)))), (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((min((var_10), (((/* implicit */unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) min((var_7), (var_7)))))))));
                arr_6 [i_0] = min((max((max((var_3), (var_5))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) var_8)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((min((min((var_5), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20676))) / (6917529027641081856LL)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (var_10))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (var_11))))))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 6; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_19 [4ULL] [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_11)))), (((var_2) % (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) var_6))));
                        var_12 = ((/* implicit */int) var_10);
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (min((max((max((var_10), (var_2))), (((/* implicit */unsigned long long int) ((var_1) && (((/* implicit */_Bool) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)79)), (1549224250)))) <= (min((var_2), (var_3))))))))));
                        var_14 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_8)), (max((var_2), (var_2))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 2; i_6 < 7; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2] [i_3] = min((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0))))) * (((var_5) / (((/* implicit */unsigned long long int) var_6)))))), (max((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((var_10) * (var_4))))));
                            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((var_10), (((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_1))))) ^ (var_4)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_2))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), (var_4))))));
}
