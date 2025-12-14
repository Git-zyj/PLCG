/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161982
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((var_5), (((/* implicit */unsigned char) (signed char)-112)))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (4194303))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)3)))), (((((/* implicit */_Bool) (short)-2941)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)1))))))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967289U) >> (((var_0) - (1633511400U)))))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)67))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65532)), ((~(((/* implicit */int) (unsigned char)24))))))) ? ((~(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) (unsigned short)65523))))));
        arr_6 [i_1] &= ((/* implicit */_Bool) var_8);
        var_12 = (!(((/* implicit */_Bool) var_2)));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (unsigned short)65533))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_9 [(unsigned char)0] = ((/* implicit */short) (unsigned short)15621);
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [(signed char)11] [(signed char)11] [(signed char)11] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                        var_14 = ((/* implicit */unsigned char) (short)23060);
                        arr_21 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) var_9);
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) || (((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    }
    var_17 = ((/* implicit */long long int) var_5);
    var_18 = ((/* implicit */unsigned char) var_3);
}
