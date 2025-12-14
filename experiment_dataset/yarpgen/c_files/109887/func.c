/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109887
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
    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (signed char)55)) >> (((((/* implicit */int) (unsigned char)184)) - (153)))))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_5)))))) : ((((~(((/* implicit */int) var_12)))) | ((+(((/* implicit */int) (short)-12013))))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((var_4) & (((/* implicit */unsigned int) var_11)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(-3524392667683326061LL)))) || (((/* implicit */_Bool) var_18))))) : (((/* implicit */int) var_3))));
    var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) == (var_1)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [11] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) (unsigned short)40195)) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) var_16)), (arr_5 [i_1] [i_1]))));
                    var_23 = ((/* implicit */signed char) min((-4933372109340046705LL), (((/* implicit */long long int) (short)0))));
                    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))) >= (((((/* implicit */_Bool) (unsigned short)25354)) ? (((/* implicit */long long int) 1908972976U)) : (1854996695986690124LL)))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) arr_11 [i_3])), (min((-1854996695986690122LL), (((/* implicit */long long int) var_6)))))));
        arr_14 [(short)2] |= ((short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-12013)) + (2147483647))) << (((((/* implicit */int) (unsigned short)25340)) - (25340)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) arr_11 [(unsigned short)13])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_17))) - (2197113641232796924LL)))));
        arr_15 [i_3] = ((/* implicit */long long int) ((signed char) (~(((unsigned long long int) (signed char)60)))));
    }
    for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_4])) != (((/* implicit */int) arr_12 [i_4]))))), (((((/* implicit */_Bool) var_18)) ? (-1326199507) : (((/* implicit */int) var_0)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))))));
        arr_18 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_4 + 2]))));
    }
}
