/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114821
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((var_16) % (((/* implicit */int) (unsigned short)53827)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (min((((/* implicit */int) var_9)), (arr_0 [(unsigned char)5] [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(var_4))))));
        var_21 *= (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (1708998544)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_15))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) + (7ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)20350)) : (var_8))))))) ? (((/* implicit */long long int) max(((-(arr_5 [i_1]))), (((/* implicit */int) ((unsigned short) arr_4 [i_1])))))) : (max((arr_2 [i_1]), (((/* implicit */long long int) arr_0 [i_1] [i_1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (~((+(arr_4 [i_1])))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_23 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) >= ((-(arr_0 [i_3] [i_3])))));
                var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((+(var_13))) >> (((/* implicit */int) ((_Bool) arr_10 [i_3] [(unsigned short)7] [(unsigned short)8])))))), (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_2 [i_3])), (arr_4 [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) max(((~(6789685469736188321LL))), (((/* implicit */long long int) max((arr_1 [i_4 + 1]), (((((/* implicit */int) (_Bool)1)) != (arr_12 [i_2] [i_2]))))))));
                    var_26 = ((/* implicit */short) var_13);
                }
            }
        } 
    } 
}
