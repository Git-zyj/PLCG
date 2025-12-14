/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148786
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
    var_19 = ((unsigned long long int) (+(2459431559U)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_20 &= (~(991074597));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_1] [i_0]));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((8427419121014469561LL) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-14132))) <= (var_15))))));
                        var_24 = ((/* implicit */unsigned int) var_12);
                        var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)11286)) <= (((/* implicit */int) var_8))))), (arr_1 [i_0] [i_1])))), (var_5)));
                    }
                } 
            } 
            var_26 ^= ((((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (arr_6 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1776000747)), (18446744073709551615ULL)))) && (((/* implicit */_Bool) arr_2 [(signed char)0])))))));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((((arr_1 [i_6] [i_6]) - (((/* implicit */int) var_7)))) + (2147483647))) << (((((int) var_9)) - (18895)))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_17 [i_6])) : (var_6))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_18 [i_6]))) * (0LL))))));
                            var_29 = ((((((/* implicit */_Bool) 654169797U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_6])))) != (((/* implicit */int) min((((/* implicit */short) arr_8 [i_8] [i_8] [i_8] [i_8])), ((short)11287)))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3913385689814654231ULL)))))));
        }
    }
}
