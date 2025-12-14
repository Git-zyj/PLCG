/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114376
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_12))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */int) (short)31)) << (((/* implicit */int) (signed char)3)))) % (((((/* implicit */int) (signed char)84)) << (((2938378638006966139ULL) - (2938378638006966117ULL)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 *= ((/* implicit */short) 8869341547627911543LL);
                    arr_8 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-28529)) * (((/* implicit */int) ((-8869341547627911544LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49038))))))));
                    arr_9 [i_2] [i_1 + 1] [i_1] |= ((/* implicit */signed char) (-(((2197467823U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */int) (~(((0ULL) << (((4106766244U) - (4106766197U)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) (_Bool)1);
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) % (((1335582278675239154ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))));
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_23 = 1328804917;
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1426))))) % ((~(17677803459689414565ULL)))));
        arr_13 [i_3] = ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47264)) >> (((((/* implicit */int) (unsigned char)135)) - (117)))))) - (((-3176667065380776757LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-31674))))));
        arr_14 [i_3] = ((/* implicit */signed char) (_Bool)0);
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)17))))) / (((((((/* implicit */int) (signed char)-59)) + (2147483647))) >> (((1286624403) - (1286624389))))));
        arr_18 [i_4] &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))) && (((/* implicit */_Bool) (short)450))))) & ((-(((/* implicit */int) (unsigned short)63))))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                {
                    arr_27 [i_5] = ((/* implicit */unsigned long long int) (+((((+(-2451084342792103499LL))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)21179)))))))));
                    var_24 = ((-2019620889659718450LL) % (8796093022207LL));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_26 *= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)120)) / (((/* implicit */int) (unsigned char)7)))) / ((-(((/* implicit */int) (unsigned char)128))))));
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (short i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)127)) << (((((/* implicit */int) (signed char)-3)) + (6))))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (((-(3906331493U))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-30561))))))));
                        var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
}
