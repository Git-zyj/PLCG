/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109365
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
    var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    var_19 &= ((/* implicit */_Bool) var_17);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */int) min((var_0), (var_8)))) ^ (arr_4 [i_4]))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_2 [i_0])))) - (79)))))) : (((/* implicit */short) ((((((((/* implicit */int) min((var_0), (var_8)))) ^ (arr_4 [i_4]))) + (2147483647))) << (((((((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_2 [i_0])))) - (79))) - (106))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */short) var_10)), (var_8))))) ? (((((/* implicit */int) var_15)) % (((/* implicit */int) arr_7 [i_0])))) : ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] [2ULL] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) arr_10 [i_1] [6U] [i_1] [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        arr_21 [4ULL] [4ULL] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */short) var_7);
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((var_2) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5 - 1] [i_5] [i_5] [i_5]))));
                            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0] [2ULL] [i_0 + 2] [i_5 - 1])) ? (var_14) : (((/* implicit */int) arr_24 [i_0 + 1] [i_0] [14U] [i_0 + 2] [i_5 - 1]))));
                            var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) - (var_14))));
                        }
                    }
                    for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        arr_29 [i_0] [(short)12] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) arr_0 [i_0 + 3]))))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) << (((/* implicit */int) arr_0 [i_0 - 2])))))));
                        var_23 = ((/* implicit */short) (_Bool)1);
                    }
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_15))));
}
