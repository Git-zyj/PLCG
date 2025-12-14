/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175042
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_4 [i_0] [i_0 + 4] = ((/* implicit */unsigned short) arr_0 [(unsigned char)3]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19)))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 2]))));
                        var_12 = ((unsigned char) (_Bool)1);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_17 [i_1] = ((/* implicit */short) arr_6 [i_4] [i_1] [i_0]);
                            var_13 = ((/* implicit */_Bool) (((+(var_7))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        arr_18 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
                        var_14 = ((/* implicit */int) (((_Bool)1) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) : (arr_20 [i_5]))))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((int) (~(min((((/* implicit */long long int) arr_19 [i_5] [i_5])), (arr_20 [i_5]))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (arr_23 [i_6] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [16LL] [i_6] [i_6])) | (((/* implicit */int) arr_11 [i_6] [i_6] [i_6]))))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) : (((/* implicit */int) ((short) var_1)))));
        var_18 = ((/* implicit */unsigned long long int) (+(3629622364U)));
    }
    var_19 = ((/* implicit */short) 18446744073709551615ULL);
}
