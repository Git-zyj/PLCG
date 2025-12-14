/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102491
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
    var_12 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) 65535U))), ((+(((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) (unsigned short)32767))), (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))) : (arr_3 [i_2 + 1] [i_1 - 1])))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (unsigned short)1042))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [13U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((unsigned short)1029), ((unsigned short)24224)))), (arr_6 [i_2 - 2] [i_1] [i_1 - 1])));
                        var_15 = ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned long long int) var_11)), (var_6))))) ^ (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [(unsigned char)5] [i_3]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */long long int) var_2)) - (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_10)))), (((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 1]))) : (var_8)))))));
                        arr_15 [i_1] [i_1 - 1] [i_1] [8LL] [i_1] [8LL] = min((var_0), (((/* implicit */int) ((_Bool) ((var_3) ? (arr_6 [i_0] [i_1 - 1] [i_2]) : (var_8))))));
                    }
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */short) ((((arr_5 [i_0]) != (arr_5 [i_0]))) ? (((/* implicit */int) (_Bool)1)) : (((min((1050260590), (arr_10 [12ULL] [12ULL] [0LL] [i_0]))) >> (((min((((/* implicit */unsigned int) var_11)), (6291456U))) - (51U)))))));
        var_17 |= ((/* implicit */_Bool) 4294901769U);
    }
    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) (~(var_4)))) ? (var_2) : (((/* implicit */int) ((((/* implicit */_Bool) 65526U)) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_3))))));
}
