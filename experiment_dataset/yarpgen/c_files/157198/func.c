/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157198
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
        arr_2 [i_0] |= ((/* implicit */unsigned char) (_Bool)0);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((long long int) -6310510357374537501LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max(((short)-6505), ((short)-5438)));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((var_13), (arr_5 [i_1])))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)28325))));
        var_17 = ((/* implicit */unsigned int) -1240099780);
        arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
    }
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_11 [22ULL] [22ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) 3846103934U)) ? (((/* implicit */long long int) 1467247605U)) : (-3822891629976796005LL))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-5423))))));
        arr_12 [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))))));
        var_18 = ((/* implicit */_Bool) ((int) ((unsigned long long int) 11329186947356945343ULL)));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 4; i_3 < 22; i_3 += 1) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_13 [i_2] [i_3 - 4] [i_3 + 1]))))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) max((arr_10 [i_3 - 3] [i_3 - 1]), (arr_10 [i_3 - 3] [i_3 - 3]))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) arr_15 [i_4 + 3] [i_4 + 3]))))));
        arr_18 [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_4 - 3]));
        var_22 = var_12;
        var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_15 [i_4 + 2] [i_4 - 3]));
        arr_19 [i_4 - 2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [15LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_9 [i_4 - 3])))) : (arr_10 [i_4 - 1] [i_4 + 3])));
    }
}
