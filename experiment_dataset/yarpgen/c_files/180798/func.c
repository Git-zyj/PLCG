/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180798
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) 1023U))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_2 [i_0 - 1]))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (unsigned short)65525))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1] [i_0]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) : (min((var_11), (((/* implicit */unsigned int) var_3))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)24665))) && (arr_1 [i_0 + 1] [i_0])))) << (((((/* implicit */int) (unsigned char)255)) - (248)))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (-((+(min((((/* implicit */unsigned long long int) (unsigned char)90)), (arr_6 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 1937705926)) ? (124U) : (85174708U)));
        var_16 = ((/* implicit */unsigned int) (((((-(var_9))) + (((/* implicit */unsigned long long int) (+(4294967285U)))))) + (((((/* implicit */_Bool) ((13010522119525917826ULL) - (var_8)))) ? (((arr_1 [13] [i_1]) ? (((/* implicit */unsigned long long int) 2241856016U)) : (3849901460304910661ULL))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_6 [i_1]) : (var_9)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_1] [i_1] [(short)9] = ((/* implicit */long long int) arr_6 [i_1]);
            var_17 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_5) == (var_5))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_1] [i_3 + 2]))));
            arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))) - (var_0)))) ? (min((var_5), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_1])))))) + (9223372036854775807LL))) >> ((-(((((/* implicit */_Bool) (unsigned short)48530)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)28705))))))));
            arr_14 [i_1] [(signed char)3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_1])) & (6229468425736641201ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) - (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_3]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)17918)), (arr_8 [i_3 + 4]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) (short)-23390);
            var_20 = ((/* implicit */unsigned int) max((var_20), (((((((/* implicit */_Bool) var_6)) ? (32767U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))))) ^ (var_10)))));
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_25 [i_1] [i_4] = max((7U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 3]))) < (3359770623U)))));
                        arr_26 [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (+(((var_7) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    }
                } 
            } 
        }
    }
}
