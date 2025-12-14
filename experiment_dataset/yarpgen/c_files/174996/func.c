/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174996
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-116)) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)115)))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)115)))) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)104)) || (((/* implicit */_Bool) (signed char)113))))) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-116)))) - (((/* implicit */int) (signed char)-111)))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((((/* implicit */int) (signed char)115)) != (((/* implicit */int) (signed char)102)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_2 [i_1])) - (((((/* implicit */int) (signed char)115)) - (((/* implicit */int) (signed char)99))))))));
        var_19 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (signed char)109))))));
        var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        var_21 = ((/* implicit */long long int) (~(((((((/* implicit */int) (signed char)-116)) * (((/* implicit */int) (signed char)88)))) & ((~(((/* implicit */int) (signed char)-99))))))));
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-100)) >= (((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1]))))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)84)))))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_13 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-95)) >= (((/* implicit */int) (signed char)-116)))))));
                var_23 += (((~(((/* implicit */int) (signed char)-114)))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)8]))) ^ (arr_11 [3U] [(unsigned char)5])))) ? (((((/* implicit */int) (signed char)-92)) ^ (((/* implicit */int) (signed char)90)))) : (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [(unsigned short)18])))))) + (29))));
            }
        } 
    } 
}
