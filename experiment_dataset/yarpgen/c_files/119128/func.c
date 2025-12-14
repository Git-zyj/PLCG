/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119128
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [3U] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned short) 500565709U)))))));
        var_12 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)31211))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)0)))));
        var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (249286429U))))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (min((var_7), (((/* implicit */unsigned int) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) arr_2 [i_0])) : (var_2)))) == (var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4045680878U)) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 - 1]))))) : (((((/* implicit */_Bool) 4095U)) ? (831346632032038866ULL) : (((/* implicit */unsigned long long int) 33554431))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
            arr_6 [i_0] = ((/* implicit */unsigned int) min((17241060110073547606ULL), (((/* implicit */unsigned long long int) ((unsigned int) 714404924U)))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_17 = ((/* implicit */_Bool) (+((+((-(((/* implicit */int) arr_1 [i_2]))))))));
            arr_9 [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (max((arr_7 [i_2]), (((/* implicit */unsigned char) (signed char)5)))))))));
            var_18 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (var_11)))));
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), (var_2)))), ((-(var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_1 [i_0]))));
        }
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((arr_4 [i_3 + 1] [i_3 - 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967284U)) ? (22U) : (((/* implicit */unsigned int) var_8))))) : ((-(var_0))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_3 + 1])))))));
        }
    }
    var_22 &= ((/* implicit */_Bool) 29U);
}
