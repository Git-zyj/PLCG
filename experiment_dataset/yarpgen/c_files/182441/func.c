/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182441
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)17667)) >> (((((((/* implicit */_Bool) max((var_13), (arr_3 [i_1 + 1])))) ? (min((-596954240), (((/* implicit */int) (short)0)))) : (((/* implicit */int) (signed char)52)))) + (596954255)))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1367930099)) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)62747)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)3)))))))) ? ((-(arr_1 [i_0]))) : ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) ((arr_3 [i_0]) == (((/* implicit */int) var_15))))) : (((/* implicit */int) arr_0 [i_0]))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((-1306513472) - (((arr_3 [i_0]) * (((/* implicit */int) arr_0 [i_0])))))) : (arr_1 [i_0])));
                var_19 -= ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 640041929))))), (-1367930099)))) : (((1239261710693931292ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9579))))));
                var_20 ^= ((/* implicit */_Bool) 1872154604);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) 15659489665409186681ULL)))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(165555963U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_10), (var_16)))))))));
    }
    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : ((~(arr_6 [i_3])))))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 737109231U)) ? (((/* implicit */int) (unsigned short)33843)) : (-1306513472))))));
        var_24 = arr_8 [i_3 + 3] [i_3];
        var_25 = ((/* implicit */short) (((~(1306513471))) != (((/* implicit */int) (!(((/* implicit */_Bool) 1367930086)))))));
        arr_10 [1ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_15)), ((+(arr_8 [i_3 + 2] [i_3]))))))));
    }
}
