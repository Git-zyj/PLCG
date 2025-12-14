/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187056
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) max((max((min((7801982826245593968ULL), (((/* implicit */unsigned long long int) (unsigned char)213)))), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned short)6591))))))), ((+(max((var_12), (((/* implicit */unsigned long long int) var_11))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] = max((((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) (unsigned short)39815)) ? (arr_0 [i_0]) : (var_4))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (((/* implicit */int) (_Bool)1))))) < ((-(var_3)))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_7)));
            arr_7 [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [2]))) < (arr_0 [i_1])))))));
        }
        var_17 = min((((-178981513) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [11U]))))))), (((/* implicit */int) ((((var_2) & (((/* implicit */unsigned long long int) 2999839009U)))) >= (((/* implicit */unsigned long long int) (~(arr_2 [i_0]))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1)))))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)14889)) : (((/* implicit */int) arr_10 [i_2] [i_2]))))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_2 [i_2])) : (arr_8 [i_2] [i_2]))))) - (1670779543074976846ULL)))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_2 + 1] [i_2 + 3])), (max((var_2), (var_6)))))) ? (arr_2 [i_2 - 1]) : (max((arr_2 [i_2 - 1]), (arr_2 [i_2 + 2]))))))));
    }
    var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_14))) < (min((((/* implicit */unsigned long long int) var_4)), (8495156712876245221ULL))))))) >= (max((max((((/* implicit */unsigned long long int) var_13)), (var_12))), (((/* implicit */unsigned long long int) var_0))))));
}
