/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189150
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((unsigned short)0), ((unsigned short)30281)))), (min((((((/* implicit */_Bool) var_8)) ? (arr_1 [12LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 1905374800U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) : (601640971742390885LL)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-(((((/* implicit */int) ((arr_7 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) * (((/* implicit */int) (unsigned short)0)))))))));
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(arr_5 [(short)12] [i_3] [i_2]))))));
                        var_13 |= ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) arr_8 [i_0] [i_1]))));
                        var_14 = ((/* implicit */long long int) (unsigned short)65535);
                        var_15 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_12 [i_4] [(short)2] = ((/* implicit */unsigned long long int) min((min((arr_11 [i_4]), (((/* implicit */short) (unsigned char)255)))), (((/* implicit */short) (unsigned char)255))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (unsigned short)65535))));
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
        }
        var_18 = ((/* implicit */_Bool) (unsigned short)65535);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) min((min(((unsigned short)1), (((/* implicit */unsigned short) arr_13 [i_4])))), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    var_20 |= -851648053;
}
