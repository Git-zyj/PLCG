/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120794
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
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) & (((((/* implicit */_Bool) 329516641)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13476))) : (14212660692271410359ULL))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_20 += ((/* implicit */long long int) ((2847132285668468028LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */unsigned short) arr_6 [i_3 - 1] [i_3 + 1]);
                            var_22 = ((/* implicit */unsigned char) (~((-(arr_9 [i_0] [i_1 - 3] [i_3])))));
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_4] [i_0] [i_0]))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 4])) + (2147483647))) << (((((/* implicit */int) (unsigned char)210)) - (210))))) : (arr_12 [i_4] [(unsigned char)16] [(unsigned char)16])));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_3 - 2] [i_3] = ((/* implicit */int) (((+(arr_14 [i_1] [i_3] [i_3]))) > (((/* implicit */int) var_16))));
                            arr_17 [i_3] = ((/* implicit */signed char) var_5);
                        }
                        for (short i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((var_17) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))))) & (((/* implicit */int) var_6)))), (arr_14 [i_1 - 3] [i_1 + 1] [i_3])));
                            var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (unsigned char)45))))));
                            arr_20 [i_0] [(signed char)2] [(signed char)2] [i_3] [i_0] [i_6 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (arr_11 [i_3 - 2] [i_3 - 2] [i_2] [8LL]))))));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -641278566)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)45))))) ? (max(((~(((/* implicit */int) (short)14328)))), (max((var_14), (-1355735818))))) : (((/* implicit */int) arr_4 [(short)16] [1U] [1U]))));
                        arr_21 [i_1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (short)-31690)), (((((/* implicit */_Bool) 17460405841603274515ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2292204494U)))))));
                    }
                } 
            } 
        } 
    }
    var_28 = var_9;
    var_29 = ((/* implicit */signed char) var_8);
}
