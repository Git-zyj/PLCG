/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1815
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((2311470852032112800ULL) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)121))))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) var_2)), (12383888560413531476ULL)))));
            var_14 &= ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) + (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((~(16135273221677438815ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((8098362267087191911ULL) >> (((((/* implicit */int) (unsigned short)40847)) - (40787)))))) && (((/* implicit */_Bool) var_3)))))) : (15401173350140588600ULL)));
            var_16 = ((/* implicit */unsigned char) (-(min((2305843009213693951LL), (((/* implicit */long long int) (short)-9009))))));
            arr_4 [i_0] = var_5;
        }
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            arr_9 [i_0] [i_2] [i_0 - 1] = ((/* implicit */short) ((unsigned short) arr_8 [i_2 + 1] [i_0 - 1]));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                var_17 = ((/* implicit */_Bool) (-(17854360962995309993ULL)));
                var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
                arr_13 [(short)13] [(short)13] [i_3] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_5)))) == (((/* implicit */int) ((750684696152927942ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23876))))))));
                arr_14 [i_0 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2311470852032112800ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_3 - 2] [i_3 - 2])));
            }
        }
        for (short i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            var_19 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_4 - 1])) ? ((~(4058990863871961854ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_4 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_8)))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (arr_1 [i_0 - 1] [i_4 + 2])));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) arr_11 [i_4 - 1] [i_5] [i_6]);
                        var_22 &= ((/* implicit */short) 17129690922514495933ULL);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_7 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) + (((((/* implicit */_Bool) 16135273221677438827ULL)) ? (4642504357840731403LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_0 + 1]))))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_4))) ^ ((~(arr_11 [i_0 + 1] [i_0] [i_0 - 1])))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        arr_25 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned char)97)) : ((-(((/* implicit */int) var_8))))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [(unsigned short)7])) ? (2311470852032112782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [(unsigned char)1])))))));
            var_26 -= ((/* implicit */unsigned char) (~(11515788655179915028ULL)));
            var_27 = var_6;
        }
        var_28 = arr_6 [i_7] [i_7];
    }
}
