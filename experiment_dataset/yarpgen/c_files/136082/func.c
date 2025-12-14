/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136082
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */_Bool) (signed char)-47);
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_10 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1] [i_1]))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 7; i_4 += 1) 
                        {
                            arr_16 [i_3 - 3] [i_1] [i_3 + 1] [i_3 + 1] [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) != (11525699025599612470ULL))))))) ? (((((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (arr_1 [i_1] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_5))))) : ((+(8340040712103150107ULL))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)2)) ? (10106703361606401505ULL) : (10106703361606401509ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))));
                            var_17 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_2 [i_3 - 3])))), (((/* implicit */int) (unsigned char)22))));
                        }
                        arr_17 [i_1] [i_3] [i_0] [i_1] = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)11084))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_0] [i_5] [i_1] [i_5] [i_0] [i_0]))))))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_2] [i_1])) ? (min((0), (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) : (((/* implicit */int) (short)-11091))));
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_0])))))));
                        arr_24 [i_6] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((arr_18 [i_2] [i_2]) ? (min((((/* implicit */unsigned long long int) max((arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_1]), ((unsigned char)228)))), (8340040712103150131ULL))) : (((/* implicit */unsigned long long int) (+(((int) var_8)))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)11089))))))) ? (((((/* implicit */int) arr_18 [i_0] [i_6])) << (((/* implicit */int) arr_18 [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
                    }
                    arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) var_2)), (arr_14 [i_0] [i_0] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned short) arr_7 [i_2]))))) : (((((((((/* implicit */_Bool) (short)8358)) ? (((/* implicit */int) (short)-8365)) : (1623506131))) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0])) - (23027)))))));
                    var_23 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
}
