/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104031
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
    var_20 = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) << (((((/* implicit */int) max((var_11), ((unsigned short)2048)))) - (15823))))));
    var_21 += var_18;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (268435455ULL) : (((/* implicit */unsigned long long int) 0LL)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) >> (((/* implicit */int) ((unsigned short) 527765581332480LL)))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1]))) : (8903110712330225162LL)))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1 - 1])))) : (((/* implicit */int) ((1032192U) <= (((/* implicit */unsigned int) -1869305479)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) arr_1 [i_2] [i_2]))))) || (((/* implicit */_Bool) ((short) var_14)))));
        arr_12 [1LL] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) 3625160379U)) ? (13210390704127555663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) (unsigned short)15))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((2048488534) ^ (((/* implicit */int) arr_4 [(unsigned short)12])))), (783150856)))) ? (max((max((((/* implicit */long long int) (unsigned short)0)), (576460477425516544LL))), (((/* implicit */long long int) ((signed char) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        arr_16 [i_3] = ((/* implicit */signed char) arr_3 [(signed char)20] [i_3]);
        var_24 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) max((arr_5 [9LL] [i_3]), (((/* implicit */int) var_7))))) > (18014397435740160LL))));
        var_25 -= ((/* implicit */_Bool) (short)-25182);
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_26 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_18 [i_4] [i_4]))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_4])))))), (((((1038548275U) + (1072466289U))) % (((/* implicit */unsigned int) (-2147483647 - 1)))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) 2198754820096LL);
        var_27 *= ((/* implicit */signed char) (~(((((/* implicit */int) ((((/* implicit */int) var_7)) <= (-598070064)))) + (((/* implicit */int) ((unsigned short) (signed char)15)))))));
    }
}
