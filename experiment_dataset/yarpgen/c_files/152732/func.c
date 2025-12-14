/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152732
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) >= (((/* implicit */int) (_Bool)1))))))))));
                        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -2147483647)), (4173387435U)));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (arr_6 [i_2] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-36))))))))));
                        var_19 = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_20 = ((unsigned int) -743581457);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)103), (((/* implicit */unsigned char) var_8)))))) : (((var_4) ? (var_1) : (var_0)))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [4ULL])) : (((((/* implicit */_Bool) (short)-32435)) ? (((/* implicit */int) (unsigned char)83)) : ((-2147483647 - 1))))));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) min((4173387442U), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_8)))))))));
                        arr_20 [i_5] |= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14671379087141271457ULL)))));
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) << (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (13242082193889297855ULL))) - (13242082193889297850ULL)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26853))) : (-9223372036854775798LL)));
                        arr_23 [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_15 [i_1 + 1] [i_2] [i_2] [i_2 + 2] [i_1 + 1]) % (arr_15 [i_1] [i_1] [i_1] [i_2 + 2] [i_2])))) ? (((unsigned long long int) 4173387452U)) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-60)), (-3389319596094968644LL))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) 743581469)) & (((((/* implicit */_Bool) 4294967293U)) ? (2548010025164016688LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        var_25 |= ((/* implicit */short) ((((((/* implicit */_Bool) 5510368369102455470LL)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (unsigned char)61)))) * (((((/* implicit */int) arr_3 [i_1 + 3] [i_2 - 1] [i_7 - 1])) >> (((/* implicit */int) var_4))))));
                        var_26 = ((/* implicit */long long int) arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7]);
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) var_4);
    var_28 |= ((/* implicit */long long int) var_11);
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (13802499833244750619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111)))));
}
