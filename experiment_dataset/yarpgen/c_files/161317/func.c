/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161317
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_10 &= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_1] [i_1] [(signed char)4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_3 + 1] [2U] [i_3] [i_0])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8498293338529319241LL)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                                arr_14 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_4] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_3 - 2] [i_2] [i_3 - 1])) + (arr_4 [i_3 + 2] [i_2 - 2])));
                                arr_15 [(unsigned short)0] [(signed char)9] [i_2 + 1] [i_2] [(signed char)9] [(signed char)9] = ((/* implicit */int) ((short) arr_7 [i_2] [i_2 + 1] [(signed char)5]));
                            }
                            for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                            {
                                arr_19 [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)8])) ? (((/* implicit */int) ((short) arr_3 [i_0]))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_7))))));
                                arr_20 [i_2] [i_3 + 1] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (var_3))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) + (((((/* implicit */_Bool) (unsigned short)12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))))))))));
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)22235)), (var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0])), (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)9)))))))) : (min((((/* implicit */unsigned long long int) (signed char)63)), (((((/* implicit */_Bool) -8498293338529319229LL)) ? (5734310518689400355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22235))))))))))));
                                var_13 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */long long int) arr_5 [i_2 - 2] [i_2 - 3] [i_3 - 1])) : (((((/* implicit */_Bool) arr_8 [i_5] [i_2] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-22229))))))));
                                arr_21 [i_0] [(unsigned char)0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) 5734310518689400354ULL)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)1))))));
                            }
                            var_14 = ((/* implicit */long long int) min((var_14), ((+(min((((/* implicit */long long int) (unsigned short)23643)), (arr_10 [i_3 + 2] [i_3 - 2] [i_2 - 2] [i_2 - 1])))))));
                        }
                    } 
                } 
                var_15 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (signed char)114)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -1LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)22223), (((/* implicit */short) var_6))))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((var_9), (((/* implicit */long long int) var_8))))));
    var_17 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 282318601U)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (signed char)-115))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) : (-601633248613359855LL)))))));
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)21984)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_4))));
}
