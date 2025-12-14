/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162258
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (unsigned char)13);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 &= ((/* implicit */long long int) (short)-12002);
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((min((((/* implicit */int) var_5)), (var_9))) + (((int) var_4)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >> ((((-(var_4))) - (2228291102044315892LL)))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-25251)))))) - (max((((/* implicit */long long int) (short)-8012)), (arr_6 [i_5])))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((((/* implicit */int) (short)-29628)) ^ (((/* implicit */int) (signed char)28)))))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) > (var_10)));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_6 + 1])) != (((arr_18 [i_6 - 1]) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_16 [i_6 - 2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) (signed char)-26);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_7 - 2])) & (((/* implicit */int) arr_16 [i_7 - 1])))))));
        var_20 = ((/* implicit */long long int) min((var_20), (var_3)));
        var_21 = ((/* implicit */int) arr_20 [i_7] [i_7]);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned long long int) ((((arr_18 [i_8]) ? (((/* implicit */int) arr_20 [i_8] [4])) : (((/* implicit */int) var_2)))) << (((((((/* implicit */int) (signed char)116)) & (((/* implicit */int) (short)32760)))) - (111)))));
        var_23 += ((/* implicit */long long int) arr_22 [i_8] [i_8]);
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                {
                    var_24 *= ((/* implicit */short) ((arr_23 [i_8 - 2]) ? (((/* implicit */int) arr_23 [i_8 + 1])) : (((/* implicit */int) arr_23 [i_8 - 2]))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_8 + 1])) * (((/* implicit */int) arr_23 [i_8 - 1])))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_8 - 2])) ? (((/* implicit */int) arr_19 [i_9])) : (((((/* implicit */int) var_2)) << (((/* implicit */int) arr_26 [i_8])))))))));
                    var_27 = ((/* implicit */long long int) (!(arr_26 [i_8 - 2])));
                }
            } 
        } 
    }
}
