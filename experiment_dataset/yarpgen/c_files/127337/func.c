/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127337
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
    var_17 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned short)63618)) ? (6154238343435947422LL) : (((/* implicit */long long int) ((/* implicit */int) (short)2618))))))) >> (((((/* implicit */int) var_7)) - (17916)))));
    var_18 = ((/* implicit */unsigned long long int) ((int) 3667779565450897229ULL));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_10);
        var_19 = ((/* implicit */int) ((short) arr_2 [i_0]));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [12ULL]);
        arr_8 [(short)13] &= ((/* implicit */short) (unsigned short)12360);
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (var_2))))) : (((((/* implicit */_Bool) var_1)) ? (arr_11 [i_1] [i_1] [(unsigned char)1]) : (arr_11 [i_1] [i_2] [i_3 - 2]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)44475)) : (((/* implicit */int) (unsigned short)44475)))))))));
                    var_20 += ((/* implicit */long long int) arr_5 [i_1] [i_1]);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 20; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    var_21 = ((max((1373648074547183984ULL), (974710113634774357ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_5 + 1])) >> (((((/* implicit */int) arr_20 [i_5 - 1])) - (55569)))))));
                    var_22 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_16 [i_4 + 2])) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)196)))) - (17917)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) 9223372036854775790LL);
}
