/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169663
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)183))))) ? (max((((/* implicit */unsigned long long int) (signed char)-109)), (1048575ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13242)))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_1 [i_0 - 3])))), (((/* implicit */int) max((arr_3 [i_0 + 2] [i_0 - 2]), (arr_3 [i_0 - 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) var_3);
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = var_1;
    /* LoopSeq 3 */
    for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((4294967295U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5976221335988166512LL)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2])))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_2 + 4]), (arr_0 [i_2 + 1] [i_2 + 1])))) > (((((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 4])) - (((/* implicit */int) arr_1 [i_2 + 1])))))))));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)124)) >> (((((/* implicit */int) (signed char)-1)) + (14))))));
                        arr_20 [i_5] [i_4 + 1] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) ^ (-7840457215602045672LL)));
                        var_16 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)109))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) arr_9 [i_3]);
        var_18 = ((/* implicit */unsigned long long int) var_8);
        arr_21 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [i_3] [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_16 [i_3])) ? (((unsigned long long int) arr_13 [i_3] [i_3] [i_3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)150)))))))));
    }
    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        arr_26 [i_7] = arr_23 [i_7];
        arr_27 [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_24 [i_7])), (var_2)));
        arr_28 [i_7] = ((/* implicit */short) ((((max((7636384074455207566LL), (7840457215602045672LL))) - (7840457215602045672LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7])))));
    }
}
