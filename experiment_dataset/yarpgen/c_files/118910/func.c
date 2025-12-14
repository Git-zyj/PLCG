/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118910
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
    var_19 ^= ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((unsigned long long int) 2143289344);
        var_21 &= ((/* implicit */int) (~(min((((/* implicit */unsigned int) -2143289345)), (274547447U)))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_22 -= ((/* implicit */int) (~(((((/* implicit */unsigned long long int) var_2)) ^ (arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 1])))));
                        arr_14 [i_3] [i_3] [i_3] [i_2] [i_1] [i_3] = arr_3 [i_1 + 1] [i_1 - 1];
                    }
                    var_23 = ((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2]) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32779))))) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_1 - 1] [i_3 + 1])))));
                    arr_15 [i_3] = max(((short)-32036), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_3] [i_3]))) && (((/* implicit */_Bool) 0U))))));
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) 2143289345))))))))));
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) (-(-9223372036854775783LL)));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) - (((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (arr_3 [i_5] [i_5]) : (((/* implicit */long long int) var_18)))))) != (((/* implicit */long long int) ((/* implicit */int) (short)-32762)))));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            for (short i_7 = 3; i_7 < 10; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5 + 2] [i_6 + 1] [i_5 + 2] [i_7 + 1] [i_7])) ? (arr_11 [i_5] [i_5 - 1] [i_6 + 1] [i_6] [i_7 + 1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)28437)))))) ? (arr_11 [i_5] [i_5 + 1] [i_6 - 1] [i_7] [i_7 + 2] [i_7]) : ((+(arr_11 [i_5] [i_5 + 2] [i_6 - 1] [i_5] [i_7 - 2] [i_7])))));
                    var_25 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) (short)32751)) ? (545460846592LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32036))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (8388607)))))), (((/* implicit */long long int) ((short) arr_22 [i_6 - 1] [i_7 - 1])))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (var_16))))))) << ((((((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_11 [i_5] [i_5] [i_7] [i_6] [i_7] [i_5]))) ^ (17179869183LL))) - (5591475344828260853LL)))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_5 - 1] [i_5 + 2] [i_5 - 1])))) / ((~(arr_9 [i_5 + 2] [i_5 - 1] [i_5 + 2])))));
    }
}
