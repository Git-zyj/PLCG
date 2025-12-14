/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106427
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_10 *= ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */short) var_6))))) & ((((~(-891979744))) | (((/* implicit */int) (short)-26899))))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)55786)))))))) - (((/* implicit */int) ((((long long int) var_0)) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))))));
        var_12 &= ((/* implicit */_Bool) ((int) (short)-26899));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_13 = ((unsigned short) ((((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) var_2)))) / ((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_5 [i_1] = ((/* implicit */int) var_4);
        var_14 = ((/* implicit */short) (-((-(((/* implicit */int) ((unsigned char) var_5)))))));
        var_15 = ((/* implicit */unsigned char) arr_3 [i_1]);
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] = (+(((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (short)26898)))))) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_0))))) : (((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])) - (((/* implicit */int) arr_8 [i_2] [i_2 + 1])))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_16 &= (~(((((/* implicit */int) arr_18 [i_2 - 1] [i_3] [i_5] [i_4] [i_4 - 1] [i_4 - 1])) + (((((/* implicit */int) arr_15 [i_4] [i_5])) | (((/* implicit */int) var_8)))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_5])) ? (1202555328) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) arr_1 [i_3] [i_4 + 1])) - (8967)))))) : (min((((/* implicit */unsigned int) (~(-48883825)))), (2155824597U))))))));
                        arr_20 [i_2] [i_3] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */signed char) -652243704);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_32 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_8] = ((short) ((((/* implicit */long long int) ((((/* implicit */int) (short)18912)) | (((/* implicit */int) (signed char)-70))))) ^ (max((arr_27 [i_2 - 1]), (((/* implicit */long long int) var_7))))));
                            arr_33 [i_8] = ((/* implicit */unsigned short) min((((arr_24 [i_6]) ? (((/* implicit */unsigned int) min((1599557987), (((/* implicit */int) (short)-26919))))) : (2155824597U))), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_6]))), (var_9))))));
                        }
                        arr_34 [i_2 + 1] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((2139142708U) == (((/* implicit */unsigned int) arr_29 [i_2 + 1] [i_8] [i_7] [i_8] [i_8]))))) / (((/* implicit */int) ((short) (unsigned char)54))))) | (((/* implicit */int) ((unsigned char) ((arr_27 [i_6]) | (((/* implicit */long long int) arr_17 [i_7]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 2; i_10 < 7; i_10 += 1) 
                        {
                            var_18 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (+(var_9)))), (2275625826408069629ULL))), (((/* implicit */unsigned long long int) min((arr_12 [i_2 + 1] [i_10 + 3]), (arr_12 [i_2 + 1] [i_10 - 2]))))));
                            arr_37 [i_8] [i_6] [i_8] = arr_8 [i_8] [i_6];
                            var_19 *= ((/* implicit */unsigned short) var_2);
                        }
                        var_20 = ((/* implicit */long long int) var_0);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */int) arr_25 [i_2 + 1])) & (((/* implicit */int) var_0)))))));
    }
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_11] [i_11])) - (((/* implicit */int) arr_4 [i_11] [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11] [i_11]))) : (((unsigned int) arr_4 [i_11] [i_11]))));
        var_23 = ((/* implicit */short) min((min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_7))), (max((((/* implicit */unsigned int) var_1)), (var_7))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_6))) * (((/* implicit */int) arr_3 [i_11])))))));
    }
    var_24 |= ((/* implicit */int) var_0);
}
