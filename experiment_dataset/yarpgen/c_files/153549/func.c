/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153549
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)16] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned int) arr_0 [(_Bool)1])) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_1 - 1]))))))) * (((int) arr_4 [i_0] [i_1] [i_0]))));
                var_13 += arr_0 [18ULL];
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((unsigned short) arr_3 [i_0] [i_1 + 2] [i_1 + 2])))) ^ (((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1])))) == (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 2])) >> (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 3])))));
                var_16 = ((/* implicit */int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) > (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 2])) & (((/* implicit */int) arr_2 [i_0])))))), (min((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0])))), (arr_2 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((long long int) var_8));
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) >= (((/* implicit */int) arr_7 [i_2 - 2] [i_2]))))))), (((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_2])) >= (((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_2 + 1])))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) arr_7 [i_2] [i_2])), (((((/* implicit */int) arr_6 [i_2 - 2])) & (((/* implicit */int) arr_6 [10])))))));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned char) ((long long int) max((arr_3 [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_3 [i_4 - 1] [i_4 + 2] [i_4 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 3; i_7 < 13; i_7 += 3) 
                        {
                            arr_26 [i_7 - 2] [i_6] [i_5 + 1] [i_4] = ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_6] [i_6] [i_7 + 3])) + (((/* implicit */int) arr_4 [i_5 + 1] [i_5] [i_7 + 3])))) >= (((/* implicit */int) ((arr_10 [i_3] [i_4]) == (((int) arr_14 [i_3] [i_3])))))));
                            var_19 = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_23 [i_7] [i_7] [i_7] [i_7] [i_3] [i_7 + 1] [i_3]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_19 [i_6] [i_3]))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5])))))))) >= ((+(((/* implicit */int) arr_12 [i_4 - 2]))))));
                            var_21 = ((/* implicit */unsigned long long int) (((-(((long long int) arr_16 [i_3] [i_3])))) / (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_8])))) > (((((/* implicit */int) arr_3 [i_4] [i_5 - 1] [(unsigned char)20])) << (((((/* implicit */int) arr_24 [i_3])) - (10136)))))))))));
                        }
                        for (int i_9 = 2; i_9 < 15; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) arr_11 [i_4 - 1]);
                            var_23 = ((arr_29 [i_3]) | (((/* implicit */int) ((unsigned char) ((unsigned char) arr_24 [i_5])))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((long long int) ((int) ((((/* implicit */int) arr_12 [i_6])) + (arr_15 [i_3] [i_4] [i_5 - 1])))));
                        arr_32 [i_6] [i_4] [i_4] [i_6] = ((/* implicit */long long int) ((((unsigned long long int) ((_Bool) arr_15 [i_3] [i_4] [i_5]))) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_3])) & (arr_10 [i_6] [i_6]))) % (((((/* implicit */int) arr_17 [i_3] [i_3])) + (((/* implicit */int) arr_12 [i_5 - 1])))))))));
                        arr_33 [i_3] [i_4] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) ((unsigned short) arr_23 [(unsigned short)4] [i_4 + 2] [i_4 - 1] [i_4 - 1] [(_Bool)1] [4] [i_4]))))));
                    }
                } 
            } 
        } 
        var_25 += ((unsigned int) ((((/* implicit */int) ((signed char) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3]))) != (((((arr_10 [i_3] [i_3]) + (2147483647))) << (((arr_28 [i_3] [i_3] [2U] [i_3] [i_3] [i_3] [i_3]) - (727687536982938065LL)))))));
        arr_34 [i_3] |= arr_14 [i_3] [i_3];
    }
}
