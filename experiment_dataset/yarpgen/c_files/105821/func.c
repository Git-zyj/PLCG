/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105821
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
    var_11 = ((/* implicit */long long int) min((var_11), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) max((((/* implicit */int) (short)8150)), (-892099744)))) : (((((/* implicit */long long int) ((/* implicit */int) (short)8150))) / ((-9223372036854775807LL - 1LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9066)) - (((/* implicit */int) (signed char)118))));
                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 892099744)) ^ (63U)))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)40)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2099184760U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_0))) << (((((1956790265U) | (max((((/* implicit */unsigned int) (short)-16384)), (4294967295U))))) - (4294967286U)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3174847880U)) ? (((/* implicit */int) min(((unsigned short)37183), (((/* implicit */unsigned short) (short)571))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-32069)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && ((!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)1334)) << (((((/* implicit */int) arr_7 [(unsigned short)0] [i_1] [i_2])) - (18580)))))), (max((3145728U), (var_9)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60643)))))) ? (max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) : ((-(var_8)))));
                        arr_12 [i_1] [i_2] = ((((((/* implicit */_Bool) (+(-892099744)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [(signed char)12] [i_1] [i_2]))))) : (4291821540U))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [10ULL] [i_1] [i_2]), (arr_11 [(signed char)5] [i_1] [i_2]))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))) : (((arr_2 [i_3] [(signed char)4] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)9))))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-8128))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27032))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_10 [i_3] [i_3] [i_2] [i_1] [i_0])) : (var_9)))))));
                    }
                    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((3145738U) | (var_8)))) && (((min((var_5), (((/* implicit */unsigned int) arr_11 [i_1] [i_0] [i_1])))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))))))));
                }
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) : (4291821532U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
}
