/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142610
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
    var_17 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [19LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) max((740589306), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_18 = max((((((/* implicit */int) (_Bool)1)) << (((((((((/* implicit */_Bool) 6552269829709319642LL)) ? (-7970556480331394347LL) : (3753076766144034372LL))) + (7970556480331394378LL))) - (1LL))))), (((((/* implicit */_Bool) (short)32738)) ? (((/* implicit */int) (short)27523)) : (min((740589297), (((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)65531))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_19 |= ((/* implicit */_Bool) var_6);
            arr_11 [i_0] [i_0] = ((/* implicit */int) arr_10 [i_0]);
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) var_10);
            var_21 = ((/* implicit */unsigned char) (((~(((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))))))) << ((((~(((/* implicit */int) arr_13 [i_0] [i_3])))) - (16064)))));
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned int) ((arr_5 [i_0]) * (max((arr_5 [i_3]), (arr_5 [i_0])))));
        }
        arr_15 [0U] = ((((/* implicit */_Bool) arr_3 [i_0] [20])) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)152)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) > (arr_3 [i_0] [(unsigned char)12])))));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((9223372036854775788LL) % (var_15))))) ? (min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) & (arr_5 [i_4]))))) : (((((/* implicit */_Bool) 72057594037927920LL)) ? (((/* implicit */unsigned long long int) 4543423711888229208LL)) : (max((((/* implicit */unsigned long long int) -6552269829709319646LL)), (18446744073709551604ULL))))))))));
        arr_18 [i_4] = arr_1 [i_4] [i_4];
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_24 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_5]));
        var_25 *= ((/* implicit */short) var_4);
        arr_23 [19LL] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_5 [i_5]))) ^ (((/* implicit */int) (_Bool)1))));
    }
    for (short i_6 = 2; i_6 < 21; i_6 += 3) 
    {
        arr_27 [i_6] = ((/* implicit */long long int) var_7);
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_24 [i_6 + 1] [i_6]))));
    }
    var_27 = (unsigned char)54;
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
    {
        for (short i_8 = 4; i_8 < 9; i_8 += 3) 
        {
            {
                arr_33 [2LL] [i_7] = ((/* implicit */_Bool) var_1);
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 + 1]))))))));
            }
        } 
    } 
}
