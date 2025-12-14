/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13195
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_14))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) 4294967286U))), (((((/* implicit */unsigned long long int) 26U)) - (((unsigned long long int) -2126200745))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned long long int) var_2)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-4678)) - (((/* implicit */int) arr_1 [i_0] [i_0])))) + (((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_9))))) + (var_7)))));
        var_18 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned char)255), (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)4])))))))));
        var_19 += min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((10ULL), (((/* implicit */unsigned long long int) (signed char)-79)))))))), (min((var_15), (((/* implicit */unsigned int) arr_0 [(short)10] [(short)10])))));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_1])) + (9284567618747352771ULL)))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_1 + 1]), (((/* implicit */int) (short)-32462))))))))));
        var_20 = ((/* implicit */unsigned int) arr_4 [i_1]);
    }
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        arr_9 [10LL] |= ((/* implicit */int) ((((/* implicit */_Bool) (-((-(var_5)))))) ? (((min((var_15), (((/* implicit */unsigned int) arr_5 [i_2])))) << (((((/* implicit */int) arr_0 [(unsigned char)14] [(unsigned char)14])) - (67))))) : (((var_10) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) min(((-(arr_7 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_7 [i_2])))))));
        var_21 = ((/* implicit */short) max((min((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2]))))))), (((unsigned int) var_11))));
    }
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((unsigned short) var_2)))))) ? (((((/* implicit */_Bool) (+(2641395596932079830LL)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4096)) * (((/* implicit */int) var_3))))))) : (max((min((var_4), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_2)))));
    var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)99))) >= (((long long int) 35963212U)))));
}
