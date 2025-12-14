/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182150
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
    var_14 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)(-127 - 1)))) * (((/* implicit */int) var_7))));
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_10))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(arr_1 [i_0 - 1]))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7264)))))) ? (var_12) : ((+(arr_0 [i_0]))))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        var_18 = ((/* implicit */short) ((unsigned int) (signed char)-1));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((((~(2556245146596894962ULL))) ^ (((/* implicit */unsigned long long int) (~(var_3)))))) << (((((/* implicit */int) ((short) ((unsigned char) 17520655850582308767ULL)))) - (104))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (short)26805)) | (((/* implicit */int) ((signed char) (signed char)127)))));
        var_21 &= ((/* implicit */signed char) ((unsigned short) var_9));
        var_22 = (-((-(((/* implicit */int) var_11)))));
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(14703443610494783990ULL))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (((((/* implicit */_Bool) var_12)) ? (926088223127242852ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            var_24 ^= ((/* implicit */short) var_7);
            arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (((((/* implicit */long long int) arr_8 [i_4 - 2] [i_4])) + (-6581644818442112316LL)))));
            var_25 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) var_12)) : (194092281U)))) ? (((unsigned long long int) ((_Bool) 10607187072580862084ULL))) : (((/* implicit */unsigned long long int) ((arr_1 [i_3]) / (((/* implicit */unsigned int) ((var_12) ^ (((/* implicit */int) var_4))))))))));
        }
        /* LoopSeq 1 */
        for (short i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */short) var_13);
            var_26 = ((/* implicit */signed char) (!((_Bool)0)));
            var_27 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */unsigned int) var_12)) : (arr_8 [i_5 + 1] [7LL]))) >= (((/* implicit */unsigned int) (+((+(arr_9 [i_5 - 3]))))))));
            arr_22 [i_3] [i_3] = arr_18 [0] [(short)10] [(short)10];
        }
        arr_23 [i_3] |= ((/* implicit */unsigned char) (_Bool)1);
        arr_24 [i_3] [i_3] = ((/* implicit */int) arr_3 [i_3]);
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 83605231048658308ULL)) ? (((((/* implicit */_Bool) (unsigned short)25291)) ? (1530273827765998721ULL) : (((/* implicit */unsigned long long int) 186196387013805934LL)))) : (((arr_7 [i_3]) & (((/* implicit */unsigned long long int) arr_8 [i_3] [0U]))))))) ? (6581644818442112309LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
    }
    var_29 = ((/* implicit */unsigned char) (((~(max((15661959987136525913ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
