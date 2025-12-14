/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115515
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)2] [i_1] [i_0] = min((((((/* implicit */_Bool) -292268368)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-51)))), (((/* implicit */int) var_2)));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_9) != (4239674554U))) ? (((((/* implicit */_Bool) 6692932295624090412ULL)) ? (11753811778085461204ULL) : (6692932295624090412ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49208)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (arr_1 [i_0])))) : (((/* implicit */int) var_2))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    arr_9 [(short)1] [i_1] [(short)1] [(short)1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-30974)) - (((/* implicit */int) var_7)))) - (-1022558882)));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_2 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65509)) ? (-1022558882) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2]))))) : (2486003499U)));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) >> (((((/* implicit */int) (short)30983)) - (30958)))))) ? (((/* implicit */int) (unsigned short)10603)) : (((/* implicit */int) var_4)));
                    var_15 = ((/* implicit */unsigned char) ((1022558863) > (((/* implicit */int) (unsigned char)167))));
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_14 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 643718070)) ? (1807866324U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))) : (2781533761U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (short)-16384))))))) : (arr_11 [i_0] [i_0])));
                    arr_15 [i_0] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */_Bool) (((+(-643718070))) % ((-(((/* implicit */int) arr_0 [i_1 + 1]))))));
                }
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 55292750U)) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_1]))))));
                var_16 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)3490)))) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0)))))))) & (13878202321298949545ULL));
    var_18 = max((min((3489678551U), (((/* implicit */unsigned int) (signed char)20)))), (((/* implicit */unsigned int) ((short) var_7))));
}
