/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183279
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (var_14))))) == (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_15)))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (var_5)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_16)))))));
        var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) var_3)) / (var_14))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (short)-29865)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_3)) | (var_9))) > (((var_10) | (((/* implicit */unsigned long long int) var_11))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29864)) + (((/* implicit */int) (short)29864))))) + (((((var_12) + (var_9))) + (((/* implicit */unsigned long long int) (+(var_11)))))));
                    var_21 = ((/* implicit */short) ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_12))) < (((/* implicit */unsigned long long int) ((var_15) | (((/* implicit */long long int) var_5)))))))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((var_3) - (var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 3; i_3 < 7; i_3 += 4) 
    {
        var_23 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-29865)) && (((/* implicit */_Bool) (short)29865)))))))))));
        arr_12 [i_3 - 3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) ((short) var_7))))));
    }
    /* vectorizable */
    for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((short) var_1));
        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((short) var_3)))));
    }
    var_27 = ((/* implicit */short) var_5);
    var_28 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
}
