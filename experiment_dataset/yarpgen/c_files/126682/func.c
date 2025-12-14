/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126682
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
    var_18 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) && (((/* implicit */_Bool) ((signed char) (short)-32760)))))), (((unsigned long long int) -872275549492276798LL)));
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((8495889210146983691ULL), (((/* implicit */unsigned long long int) var_1)))) * (var_12)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_7)))));
        var_20 = ((/* implicit */short) min((var_20), (((short) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (5985820361774949350ULL) : (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) & (8958713119785833606ULL)));
        var_21 ^= (+(min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_1 [i_0]))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_5 [i_1 + 2]))))));
        var_23 -= ((/* implicit */unsigned short) (+(arr_7 [i_1 + 4])));
    }
}
