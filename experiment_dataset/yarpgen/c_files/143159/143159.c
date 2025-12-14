/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((((-915696101 ? 353199246 : var_18))) < (max(var_15, var_9)))))) < (8153983967485128858 % 16431339155760737178)));
    var_21 = 1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 *= arr_0 [i_0] [i_0];
        arr_2 [i_0] [9] = (min((((max(var_3, (arr_1 [i_0] [i_0]))) * ((min(915696089, 915696080))))), (arr_1 [i_0] [i_0])));
        var_23 *= (max(var_19, (1 * 8876050232200108290)));
        arr_3 [2] [2] = var_16;
        var_24 += ((1712957459 ? 231 : (((~(arr_0 [i_0] [7]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
        var_25 -= (~2959481461);
        var_26 = (min(((((1 ? var_12 : (arr_5 [i_1]))))), (~7895266303563404011)));
        var_27 = (((((((((arr_4 [16]) ? 64218 : (arr_4 [6])))) || ((((arr_5 [i_1]) ? var_12 : 402653184)))))) ^ (((-1289207555 == ((-(arr_5 [i_1]))))))));
        arr_8 [i_1] = (((max(((22 ? (arr_4 [i_1]) : -915696089)), (~60))) - 1));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [4] = (((((arr_10 [1]) ? (((((arr_10 [i_2]) < (arr_10 [i_2]))))) : (((arr_9 [i_2]) ? (arr_10 [i_2]) : 2052466410619558311)))) >= (arr_9 [i_2])));
        arr_12 [i_2] = (((((-((1 ? 2062 : 10))))) ? -46259 : 4294967286));
        var_28 -= (3953437031578668319 < 2062660049217694048);
        var_29 = ((-(arr_9 [1])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] [i_3] |= ((((((var_12 > -8059) ? (max(-12232, 114688)) : ((var_0 ? 54 : var_11))))) ? (arr_6 [i_3] [i_3]) : (18446744073709551615 * 1)));
        var_30 ^= (~2015404917948814425);
    }
    var_31 += var_5;
    var_32 = var_0;
    #pragma endscop
}
