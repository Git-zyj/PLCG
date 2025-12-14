/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121255
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 -= (unsigned char)100;
                    var_15 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)12))));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned char) (~(max((var_1), (((/* implicit */int) ((var_1) > (((/* implicit */int) (unsigned char)158)))))))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)993)) ? (((/* implicit */long long int) (~(arr_2 [i_0])))) : ((-(var_3)))));
        var_18 ^= (unsigned short)63488;
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_19 = (+(min((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) var_11))))), ((-(((/* implicit */int) var_2)))))));
        var_20 = max((arr_12 [i_3]), (((/* implicit */unsigned short) var_8)));
        var_21 *= ((/* implicit */_Bool) arr_13 [i_3]);
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_3])) * (((/* implicit */int) (unsigned short)2044))));
    }
    /* LoopSeq 4 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) > (((/* implicit */int) (unsigned short)19126))))) % (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [15ULL] [i_4] [i_4])), ((unsigned short)46411)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1317671557)) ? (((/* implicit */int) (unsigned short)51225)) : (((/* implicit */int) (short)27349)))))))))))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50660))) / (9223372036854775798LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        var_24 -= ((((((/* implicit */int) (unsigned short)24298)) << (((((/* implicit */int) (unsigned short)19124)) - (19123))))) + ((~(((/* implicit */int) (unsigned char)247)))));
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_18 [i_5])))), (((/* implicit */int) min((var_13), (((/* implicit */signed char) (_Bool)1))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_2) ? (((/* implicit */int) var_10)) : (1813211878))) >= (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)57344)))))))) - ((-((+(arr_19 [21U])))))));
            var_27 = ((/* implicit */long long int) (~(min((arr_17 [i_6 - 1]), (((/* implicit */unsigned int) (_Bool)0))))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_28 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
        arr_25 [i_7] = ((/* implicit */unsigned short) (~(arr_21 [i_7])));
    }
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((((((/* implicit */int) var_6)) - (-27))) >= (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) var_7)) - (58))))))) ? (((/* implicit */int) ((((/* implicit */int) ((var_2) && ((_Bool)1)))) < (((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8]))))) : ((~(((/* implicit */int) arr_6 [i_8])))))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [7LL])) || (((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8] [i_8]))))) < (((/* implicit */int) arr_23 [i_8]))));
        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8]))) - (var_3))) <= (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
    }
}
