/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152522
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((_Bool) (((-(((/* implicit */int) (short)3)))) != ((+(((/* implicit */int) (short)-32761)))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)61768)), (arr_1 [i_0 + 2])))) ? (arr_0 [i_0 + 3]) : (((/* implicit */long long int) ((var_3) + (((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) <= (max((((/* implicit */unsigned long long int) var_10)), (18446744073709551589ULL))))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (15ULL)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) -162228311))));
            var_20 ^= ((/* implicit */unsigned short) arr_0 [i_1]);
            var_21 = ((((((/* implicit */int) (short)-9103)) & ((+(var_3))))) / (((/* implicit */int) (short)9095)));
        }
    }
    var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)15))))), (min((((/* implicit */unsigned int) var_9)), (0U))))) ^ (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1)))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_2)))))));
    var_23 = ((/* implicit */_Bool) min((((max((31ULL), (((/* implicit */unsigned long long int) var_1)))) << (((/* implicit */int) ((unsigned short) 1))))), (((/* implicit */unsigned long long int) var_16))));
}
