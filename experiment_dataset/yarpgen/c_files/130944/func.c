/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130944
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)190)) ? (-331712128) : (((/* implicit */int) (short)3))));
        var_20 -= var_4;
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (331712099) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) (short)-1))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (-331712128)));
                            arr_18 [i_2] [i_2] [i_3] [(short)15] [(unsigned short)1] = ((/* implicit */short) var_3);
                            var_22 = ((/* implicit */signed char) var_7);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_23 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_17))))) ? (-1705355897) : (((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned char)11))));
                            var_24 = ((/* implicit */int) min((var_24), (var_8)));
                            arr_23 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((max((max((((/* implicit */unsigned short) var_4)), (var_15))), (max((var_15), (((/* implicit */unsigned short) var_12)))))), (((/* implicit */unsigned short) (short)-4948))));
                        }
                        for (short i_7 = 3; i_7 < 23; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) var_14)), (var_5))), (var_2))), (((/* implicit */unsigned long long int) var_18))));
                            var_26 = min(((~(max((var_11), (331712116))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))) != (5834100215039949145ULL)))));
                            var_27 = ((/* implicit */int) (signed char)41);
                        }
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-331712075), (((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) : (var_5))))))));
                    }
                } 
            } 
        } 
        var_29 = min((((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) var_16))))), (var_18));
    }
    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned short) -576786100);
        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-1111177387412674290LL) / (((/* implicit */long long int) (~(var_3))))))), (15951345029337965804ULL)));
    }
    var_31 = ((/* implicit */long long int) var_14);
}
