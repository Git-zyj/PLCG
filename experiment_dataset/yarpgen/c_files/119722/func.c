/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119722
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
    var_12 = ((/* implicit */int) ((unsigned char) (~(var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 2] [i_1] = ((/* implicit */unsigned short) (~(-77063657)));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_14 &= ((/* implicit */_Bool) (-((+(var_1)))));
                    arr_9 [i_0] [6ULL] [i_1] [i_0] = ((/* implicit */int) var_1);
                    var_15 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [(short)10]))))));
                }
                var_16 = max((max((((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0]))), (var_10))), (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_2)))) | (var_10))));
            }
        } 
    } 
}
