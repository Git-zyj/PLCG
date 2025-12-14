/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147989
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = min((((/* implicit */signed char) (_Bool)1)), ((signed char)-33));
                arr_4 [i_1] [i_0] = var_1;
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_10) ^ (((/* implicit */int) var_3)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) < (((/* implicit */int) (signed char)-104))));
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_14))))));
        var_24 += ((/* implicit */signed char) arr_3 [12ULL] [i_2]);
        arr_7 [(short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_14))));
        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_0)) >> (((var_1) - (7860388338043802390LL)))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_3])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_4) : (arr_8 [i_3 + 1])));
        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_18))));
        var_28 = var_16;
    }
    /* LoopNest 2 */
    for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            {
                arr_18 [i_5 - 2] [i_5 + 1] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_3))));
                arr_19 [(signed char)14] [i_4] [i_5] = ((/* implicit */_Bool) var_15);
                var_29 = ((/* implicit */unsigned char) arr_13 [i_4]);
                arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-67)) + (2147483647))) << ((((~((~(((/* implicit */int) arr_2 [i_5])))))) - (101)))));
                arr_21 [(signed char)6] [i_4] = ((/* implicit */short) var_2);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
        {
            {
                var_30 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))) / (((/* implicit */int) var_12))))), (arr_8 [(unsigned char)6]));
                arr_29 [i_7] [(signed char)3] [(_Bool)1] = ((/* implicit */long long int) var_19);
            }
        } 
    } 
}
