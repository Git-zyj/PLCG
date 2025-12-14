/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161168
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) > (((/* implicit */unsigned long long int) -7532781380106866LL))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_6 [21] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7532781380106866LL)) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (-(var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [(_Bool)1]))) : (4014099942U))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) 1157968129U)));
            var_15 = ((/* implicit */unsigned long long int) (~(((unsigned int) (signed char)-21))));
        }
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((min((((/* implicit */long long int) ((short) var_4))), (var_6))), (((/* implicit */long long int) var_7)))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (min((280375465082880ULL), (((/* implicit */unsigned long long int) var_10)))))))));
    }
    /* vectorizable */
    for (short i_3 = 3; i_3 < 14; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((_Bool) 7532781380106866LL));
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            arr_14 [i_3] [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 - 3] [i_4])))));
            var_19 += ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 6727771907928250132ULL))) ^ ((-(var_2)))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((var_8) + (((((/* implicit */unsigned long long int) var_11)) / (3245656326905847529ULL))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_4)) : (4014099931U)))) ? (var_0) : ((+(((/* implicit */int) arr_18 [i_7] [4U] [i_4] [i_3]))))));
                            arr_25 [15] [i_4] [i_5] [(_Bool)0] [(short)14] [i_7] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_11)));
                            var_22 = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) ((unsigned int) var_3));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1)))));
        }
        for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) 
        {
            arr_29 [i_3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3]))) : (arr_27 [i_8 - 1] [i_3 + 2])));
            arr_30 [i_3] [i_3] = ((/* implicit */short) (~(18446463698244468736ULL)));
            arr_31 [i_3 + 2] = ((((unsigned long long int) var_8)) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) arr_34 [i_3] [i_9 + 1]);
            var_26 = ((/* implicit */_Bool) (-((~(12076617342958316980ULL)))));
            arr_35 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_23 [0LL] [(short)5] [14U] [(_Bool)1] [i_9 + 1]) : (((/* implicit */int) (short)-32415))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_3] [i_10] [i_3 - 3])) == (((/* implicit */int) arr_37 [i_3] [i_3 + 1] [i_3 - 1]))));
            var_28 ^= ((/* implicit */unsigned short) (~(((1691982082) + (((/* implicit */int) var_5))))));
        }
        arr_38 [i_3 - 2] [i_3 - 2] = ((/* implicit */signed char) 18446463698244468736ULL);
        arr_39 [i_3 - 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)83)) ? (var_2) : (2147483647))) ^ (0)));
        var_29 = ((/* implicit */_Bool) ((short) ((unsigned short) var_1)));
    }
    var_30 = ((/* implicit */int) ((_Bool) 2212571026U));
}
