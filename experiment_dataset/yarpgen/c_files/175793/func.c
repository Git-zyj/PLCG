/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175793
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)46767))) ? (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) - (72057594037927932ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))) > (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((+(18374686479671623684ULL))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (18374686479671623684ULL))))));
        arr_3 [i_0] = ((/* implicit */short) (+(-93171700)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [12U])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) arr_0 [i_0])), ((~(18374686479671623700ULL)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((18374686479671623700ULL) > (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (+(0U)))) : (max((9ULL), (((/* implicit */unsigned long long int) (unsigned char)24))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)36)) != (0))))));
        var_16 = ((/* implicit */_Bool) ((short) arr_7 [i_1]));
        arr_8 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_1])) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_10 [i_2]) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2] [i_2]))))), ((-(arr_7 [i_2]))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)10094)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (arr_11 [i_3] [i_3 + 2]))), (((/* implicit */unsigned long long int) (short)32758))));
        arr_13 [i_3] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-6)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3 + 1])))))));
        arr_14 [i_3 + 2] [i_3 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_11 [i_3 + 1] [i_3 + 1]), (12123884217709493755ULL))))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (short)32735))), ((+(((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_5)))))) : (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned char) ((unsigned long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_3)))))))));
}
