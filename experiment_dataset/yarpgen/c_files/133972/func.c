/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133972
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) > (((((/* implicit */long long int) (+(4146384050U)))) / (min((-5250428356760914718LL), (arr_3 [i_0] [i_1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((min((-15LL), (((/* implicit */long long int) arr_12 [i_2])))) + (9223372036854775807LL))) >> (((((long long int) var_9)) - (51LL))))))));
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((148583245U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) ? (arr_5 [i_0] [5] [i_3]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 14LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_2])))))))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)(-127 - 1))))))))));
                        var_14 -= ((/* implicit */unsigned short) var_8);
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 2187212978198560590LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) - (9LL)))))) : (var_1)));
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((var_2) != (((/* implicit */int) var_3)))) ? (max((3690434016U), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-30595)) > (((/* implicit */int) var_7))))))))), ((~((-(var_4)))))));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 148583245U)), (17881082517033851572ULL))))))));
        arr_17 [i_4] [14LL] = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_14 [i_4]), (arr_14 [i_4])))), (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 793850293U)), (-15LL)));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) | (var_0)));
        }
        for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_18 [14ULL] [6LL]))));
            arr_22 [(unsigned char)10] [i_4] [4LL] = ((/* implicit */long long int) (signed char)1);
            var_20 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [(unsigned short)4]))));
        }
        var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((-15LL), (arr_18 [(unsigned char)12] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_4] [i_4] [(unsigned char)10])) ^ (((/* implicit */int) arr_19 [(unsigned char)16]))))) : (((((/* implicit */unsigned long long int) 0LL)) + (var_4))))) != (((/* implicit */unsigned long long int) arr_13 [i_4]))));
    }
}
