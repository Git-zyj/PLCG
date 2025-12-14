/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175884
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) 835530859U)), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = 3459436436U;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) var_5);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_1 [i_0]))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)18843)) : (((/* implicit */int) (unsigned char)4)))) - (18828)))));
                        var_18 = (((+(var_8))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)224)) >> (((arr_4 [i_0] [i_1] [i_2] [i_2]) - (1741950894)))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))) ^ (-2014784685542544588LL)));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_5))));
                    }
                    for (signed char i_4 = 4; i_4 < 12; i_4 += 4) 
                    {
                        var_21 += ((/* implicit */_Bool) 268427913023017552ULL);
                        var_22 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_1] [i_2] [i_5] [i_5])) ? (arr_5 [i_0] [i_1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))))));
                        var_24 = ((/* implicit */int) var_0);
                        var_25 = 268427913023017543ULL;
                        var_26 = ((/* implicit */long long int) ((((unsigned long long int) 9U)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))));
                    }
                    var_27 *= ((/* implicit */_Bool) var_11);
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_0)))) ? (((((/* implicit */_Bool) ((int) 903141771))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)17060), (((/* implicit */unsigned short) (signed char)99)))))) : (3459436436U))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 1717412058162931368LL)) && (((/* implicit */_Bool) (short)3015))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) (unsigned short)14);
}
