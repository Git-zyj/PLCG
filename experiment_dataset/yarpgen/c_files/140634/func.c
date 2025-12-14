/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140634
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_10)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= ((-9223372036854775807LL - 1LL)))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42689))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) 2131463288)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_16)) ? (var_18) : (((/* implicit */int) (unsigned char)0)))))) : (min((arr_10 [i_0] [i_0] [4LL] [i_0]), (((2131463288) / (var_13)))))));
                        arr_14 [i_1] = arr_8 [i_0];
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((arr_4 [i_0] [(unsigned char)10] [i_0]), (((/* implicit */unsigned char) ((-2131463275) > (-466355958)))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */int) ((signed char) var_0));
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) arr_21 [i_4] [i_6]);
                        arr_27 [i_4] [i_5 + 2] [i_6] [i_7] = ((/* implicit */short) arr_6 [i_4] [i_4] [i_4] [(signed char)10]);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) 2373709857U);
    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8868)) ? (((/* implicit */int) (_Bool)1)) : (var_14)));
}
