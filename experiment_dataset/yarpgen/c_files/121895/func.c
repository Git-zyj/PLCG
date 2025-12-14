/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121895
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_11 [11LL] [i_0] [4ULL] [i_0] = ((/* implicit */long long int) var_12);
                            arr_12 [i_0] [i_1] [i_0] = ((17179869183LL) == (-17179869158LL));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) + (((var_13) / (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (var_9) : (var_2))), (max((((/* implicit */long long int) var_15)), (var_2))))))));
                var_19 *= ((/* implicit */unsigned long long int) ((unsigned char) (+(9223372036854775807LL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            {
                var_20 &= ((/* implicit */unsigned long long int) ((unsigned char) ((var_5) && (((/* implicit */_Bool) var_8)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            var_21 = ((((_Bool) (signed char)19)) ? (((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : ((-(var_9))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (2147483646)));
                        }
                    } 
                } 
                arr_23 [i_4] [i_4] [i_4] = ((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_15))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_14)))))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))) != (((((/* implicit */_Bool) 1244778228866079259LL)) ? (9408861583429612772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) 1244778228866079278LL)) * (8242543251319416514ULL)))));
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7)))))));
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 10204200822390135102ULL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -17179869158LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_14)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-94)), (var_7)))) : (min((6420617972608122761ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))));
        var_27 = ((/* implicit */unsigned short) ((17179869178LL) ^ (((/* implicit */long long int) 2147483646))));
        arr_29 [i_9] [i_9] = ((/* implicit */_Bool) var_17);
        arr_30 [i_9] [i_9] = ((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-32761))))))));
    }
}
