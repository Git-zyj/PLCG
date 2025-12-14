/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134232
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((max((((unsigned long long int) arr_4 [12ULL] [i_1])), (((/* implicit */unsigned long long int) var_1)))) << (((max((arr_1 [i_0]), (((/* implicit */int) arr_5 [i_0] [i_1])))) - (1661136034)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                arr_8 [i_0] [i_1] = ((long long int) 1194654705467429334ULL);
                arr_9 [i_0] [(unsigned char)6] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((2099825610214738443LL), (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) arr_3 [(unsigned short)17])) : (((/* implicit */int) var_7))))))))));
            }
        } 
    } 
    var_10 &= ((/* implicit */_Bool) max((((/* implicit */int) var_3)), (min((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) (signed char)-75)))), (((/* implicit */int) max(((unsigned char)153), (((/* implicit */unsigned char) var_1)))))))));
    var_11 = ((/* implicit */unsigned char) -2099825610214738413LL);
    var_12 = ((/* implicit */signed char) min((var_8), (((/* implicit */short) var_4))));
}
