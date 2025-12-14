/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135941
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */signed char) var_10);
                        var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-206104945)))))) ? (((((/* implicit */int) var_0)) << (((((5279965144928270458LL) & (((/* implicit */long long int) arr_6 [(short)6] [i_1] [i_2] [(unsigned short)19])))) - (23111701LL))))) : (((/* implicit */int) arr_3 [20]))));
                        var_14 *= ((/* implicit */unsigned char) var_7);
                        var_15 = ((/* implicit */long long int) (((-(-4756578220466079931LL))) < (((/* implicit */long long int) ((/* implicit */int) ((4222287677U) <= (((/* implicit */unsigned int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1 + 1]))))))));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */_Bool) (((~(var_6))) << (((/* implicit */int) ((arr_6 [(short)2] [i_0] [i_0] [i_0]) <= (arr_6 [i_0] [i_0] [i_0] [14LL]))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_6)))), (var_10)))) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [5LL] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned int) (~(var_11)));
        arr_11 [i_4] = ((/* implicit */unsigned short) ((arr_6 [i_4] [i_4] [i_4] [i_4]) ^ (arr_6 [i_4] [i_4] [i_4] [i_4])));
        arr_12 [i_4] [(short)14] = ((/* implicit */unsigned char) var_9);
        var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_4])) + (((/* implicit */int) arr_10 [i_4])))) >= (((/* implicit */int) arr_2 [i_4]))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */short) 72679628U);
        arr_15 [i_5] [(_Bool)1] |= ((/* implicit */unsigned int) ((var_3) << (((((/* implicit */int) arr_1 [i_5] [i_5])) - (48132)))));
    }
    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 72679599U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) : ((+(((var_7) ? (var_10) : (((/* implicit */unsigned long long int) var_6))))))));
    var_22 = ((/* implicit */unsigned char) ((((var_10) <= (((/* implicit */unsigned long long int) var_8)))) || (((/* implicit */_Bool) var_4))));
    var_23 = ((/* implicit */_Bool) var_10);
}
