/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157062
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -223718933197179483LL)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (signed char)50))));
            var_20 = ((/* implicit */unsigned long long int) var_12);
            arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53709))))) == (((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)15))))));
        }
        var_22 = ((/* implicit */_Bool) ((((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-96))))) ? (((/* implicit */int) var_17)) : ((+(((/* implicit */int) (signed char)-77))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_14 [10LL] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        var_23 *= ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_18) + (2560602629611359121LL)))));
                        var_24 = ((/* implicit */_Bool) (+(var_11)));
                        arr_15 [i_0] [(signed char)1] [i_0] [i_0] = ((((/* implicit */int) ((var_15) && ((_Bool)1)))) != (((/* implicit */int) (signed char)-3)));
                    }
                } 
            } 
        } 
    }
    var_25 = (unsigned short)65535;
    var_26 = ((0U) > (((/* implicit */unsigned int) ((((var_12) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)68)))) >> (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-37))))))));
    var_27 = ((/* implicit */unsigned char) var_11);
    var_28 *= ((/* implicit */unsigned short) var_3);
}
