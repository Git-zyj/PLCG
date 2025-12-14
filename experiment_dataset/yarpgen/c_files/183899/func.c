/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183899
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)32767)), (-797946255)))) ? (max((arr_2 [i_0]), (((/* implicit */int) (unsigned char)196)))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0])))))) ? (((long long int) (unsigned char)65)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((int) (unsigned char)65)))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_3)) > (arr_2 [i_0])))), ((-(-409205796))))))));
        var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) : ((-(-5106551281914762795LL)))))) ? (min((max((arr_1 [i_0]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_6 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */int) ((((/* implicit */int) (short)14)) > (((/* implicit */int) var_10))))) > (((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1 + 1]))))));
        var_17 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
        arr_9 [i_1] = ((/* implicit */unsigned char) (short)32748);
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1099494850560LL)) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) var_13)) : (41716543))))), (max((max((var_11), (-1651925780))), (max((((/* implicit */int) var_8)), (268434944)))))));
        var_19 -= ((/* implicit */unsigned short) max((arr_0 [i_2]), (((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))) > (arr_1 [i_2]))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3] [i_3])) > (((/* implicit */int) arr_14 [i_3]))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? ((~(-5377130211764017155LL))) : (8465853566307694993LL))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (arr_14 [i_4])));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2676025490159403338LL)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) (unsigned char)196))));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((2147483647) > (((/* implicit */int) arr_14 [i_4]))));
        var_23 = ((/* implicit */long long int) ((short) ((527783902016315786LL) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_21 [i_5]) ? (((/* implicit */int) arr_20 [i_5 - 1] [i_5])) : (((/* implicit */int) arr_20 [i_5 - 1] [i_5]))))) ? (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_20 [i_5 - 1] [i_5])) : (((/* implicit */int) arr_20 [i_5 - 1] [i_5])))) : (((/* implicit */int) (unsigned char)62))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned char) arr_20 [i_5] [i_5]));
    }
}
