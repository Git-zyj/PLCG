/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164077
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? ((+(var_10))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))))) ^ (((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_11))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((var_2) ? ((-(((/* implicit */int) ((((/* implicit */int) (short)-3359)) >= (((/* implicit */int) (unsigned short)5049))))))) : ((~(((/* implicit */int) (short)2745))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((_Bool) (unsigned char)62))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) >> (((((/* implicit */int) var_8)) - (23397)))))) ? (min((((/* implicit */int) var_9)), (var_13))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((max((((/* implicit */int) (short)-18958)), (var_13))) == ((~(((/* implicit */int) arr_0 [0] [i_0]))))))) + (min(((~(((/* implicit */int) var_11)))), (max((var_13), (-31626264)))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_10 [i_4 - 2])))) <= (var_5)));
                arr_13 [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_3] [i_3 + 2] [i_3])))) | (((var_5) - (var_13)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)16]))) : (var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_5]))))) : (-2147483635)));
                var_21 = ((/* implicit */long long int) max((((/* implicit */int) (!(((((/* implicit */int) arr_12 [(short)9] [i_6] [i_6])) >= (((/* implicit */int) var_4))))))), (max((((/* implicit */int) (unsigned short)58284)), ((-2147483647 - 1))))));
            }
        } 
    } 
}
