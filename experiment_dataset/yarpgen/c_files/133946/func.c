/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133946
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) var_18);
                    var_20 = ((/* implicit */unsigned char) ((-11) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((+(var_14))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned char)142))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_21 = (short)12928;
                                var_22 += ((/* implicit */int) var_10);
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)110)))) ? (((/* implicit */int) arr_7 [i_3 + 2] [i_3 - 2] [i_3] [(short)12])) : (((int) var_18)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 += var_9;
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        var_25 = ((/* implicit */long long int) max((((/* implicit */int) ((short) (unsigned char)133))), (((((/* implicit */int) (unsigned char)129)) & (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_26 = (-(max((((/* implicit */int) (unsigned char)142)), (((((/* implicit */int) var_0)) ^ (var_17))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)122)))) : ((-(((/* implicit */int) (unsigned char)114))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (short)-19155)) && (((/* implicit */_Bool) var_6))))) - ((~(((/* implicit */int) var_10)))))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_6))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
    {
        var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-109)), (arr_19 [i_8]))))) > (2063983739580920762ULL));
        var_29 = ((/* implicit */short) max((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_18 [i_8])))), (((/* implicit */int) (unsigned char)114))));
        var_30 = ((/* implicit */unsigned char) ((((16382760334128630869ULL) == (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (13657155916084251675ULL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */int) (unsigned char)0))))) ? (((14043278813889439761ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33459)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (arr_21 [i_9]) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) != (((/* implicit */int) var_13)))))));
        var_32 += ((/* implicit */int) ((((/* implicit */_Bool) 16382760334128630853ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11034))) : (274877906943ULL)))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) >= (var_8)));
    }
    var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) min((var_3), (var_13)))))))) > (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (13657155916084251677ULL))) : (((16382760334128630853ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12230)))))))));
}
