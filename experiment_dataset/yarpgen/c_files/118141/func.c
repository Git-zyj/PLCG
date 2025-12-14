/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118141
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_17 -= ((/* implicit */short) ((((((var_2) % (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))) + (2147483647))) >> (((((/* implicit */int) var_5)) + (3597)))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                }
            }
            arr_14 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39798))) : (var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0]))));
            var_19 = max((((((/* implicit */_Bool) (+(var_0)))) ? (var_13) : (((/* implicit */int) var_10)))), (((/* implicit */int) (signed char)-122)));
        }
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10)))))))));
    }
    for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) : (max((((/* implicit */unsigned int) var_2)), (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (6149686031648030143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) var_13)) : (((var_14) >> (((var_6) - (1082352447U))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((12297058042061521470ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_4 - 1])))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_12))));
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 4; i_6 < 12; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))) : (min((min((6149686031648030146ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_6 + 1] [i_6 + 1])))))))));
                    var_24 &= ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) 12297058042061521470ULL)) ? (6149686031648030143ULL) : (((/* implicit */unsigned long long int) var_0))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) var_10);
    }
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_13)) : (12297058042061521469ULL))), (((/* implicit */unsigned long long int) var_4)))))))));
}
