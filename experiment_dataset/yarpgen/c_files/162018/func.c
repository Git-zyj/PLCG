/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162018
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_11))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))))) ? (var_0) : (((/* implicit */unsigned int) var_3))));
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((5847041501522068337LL) <= (((/* implicit */long long int) ((((/* implicit */int) var_17)) - (((/* implicit */int) (signed char)-1)))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16743))))))))));
        var_24 = ((/* implicit */long long int) ((short) arr_1 [i_0 + 2]));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
        {
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_1] [i_1])))) / (((/* implicit */int) var_12))));
            arr_9 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) min((3275809025U), (((/* implicit */unsigned int) (_Bool)1))))) % (arr_6 [i_2 - 2]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (var_10)))) <= (((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (255312934473209125ULL) : (((/* implicit */unsigned long long int) -6147962405004476983LL)))))))));
            arr_10 [i_2 - 2] [i_1] = ((/* implicit */short) max((1236669138933454288LL), ((-(1236669138933454285LL)))));
        }
        arr_11 [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) arr_4 [i_1])) : (((arr_6 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
        var_26 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_9))) & (((int) var_17))));
        var_27 = arr_6 [i_1];
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            arr_19 [i_3] [13U] = ((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_7 [i_3])));
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3])) + (((/* implicit */int) arr_13 [i_3]))))) ^ (((long long int) var_11))));
            arr_20 [i_3] = ((/* implicit */int) ((short) arr_6 [i_3]));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_29 -= ((/* implicit */signed char) var_18);
            var_30 ^= ((/* implicit */long long int) ((min((arr_22 [i_3]), (arr_22 [i_3]))) >= (((/* implicit */long long int) ((arr_18 [i_3] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
            arr_24 [i_3] [i_5] = max((((/* implicit */int) var_1)), (((int) arr_23 [i_3] [i_3] [i_3])));
        }
        arr_25 [i_3] [i_3] = ((short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_3]))) - ((((_Bool)0) ? (((/* implicit */long long int) 3275809025U)) : (-8693124576466581148LL)))));
    }
}
