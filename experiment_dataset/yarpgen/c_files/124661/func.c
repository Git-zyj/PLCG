/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124661
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
    var_19 = ((/* implicit */int) var_9);
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(min((((/* implicit */int) var_6)), (var_15)))))), ((((+(0U))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1)))))))));
    var_21 = ((/* implicit */int) ((short) var_17));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) 3704056531U))) < (((/* implicit */int) min(((_Bool)1), (arr_1 [i_0]))))))) >> (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((arr_7 [i_0] [i_1] [i_2] [i_3] [i_0]), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) -2147483645)) : (arr_7 [i_0] [i_1] [i_1] [i_1] [i_0]))))))));
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                    }
                } 
            } 
        } 
        arr_11 [(signed char)12] = ((/* implicit */signed char) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483621)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)2] [(signed char)2] [i_4 + 3] [i_4 + 2]))) : (var_12)));
        arr_15 [i_4] = ((/* implicit */unsigned char) (signed char)0);
        var_25 -= ((/* implicit */_Bool) (unsigned short)65529);
    }
    var_26 += ((/* implicit */short) min((var_14), (((/* implicit */unsigned int) (unsigned short)4))));
}
