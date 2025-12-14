/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163742
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
    var_17 = ((/* implicit */unsigned char) 3919790091U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((long long int) arr_0 [i_0] [i_0])) : (min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (2152685599632094618LL)))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_2 [i_0 - 2])) / (((/* implicit */int) arr_2 [i_0 - 1])))));
                var_19 = ((/* implicit */unsigned short) (!(arr_1 [i_0 + 1])));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) arr_7 [i_2] [8U])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_7 [i_2 + 1] [i_2 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)9]))));
        var_21 = ((/* implicit */unsigned short) arr_7 [(unsigned char)14] [i_2]);
        var_22 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_6 [i_2 + 2]))))));
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) arr_6 [i_3 - 1])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -3754141485146676698LL)) ? (3797095609U) : (375177195U)))))) ? (((/* implicit */unsigned long long int) (+(((4U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))))))) : ((-(((((/* implicit */_Bool) 3797095628U)) ? (((/* implicit */unsigned long long int) 497871692U)) : (var_2)))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)79)) != (((/* implicit */int) arr_8 [0U])))))) * ((+(arr_7 [i_3 + 1] [i_3]))))) * (18092167003168486270ULL))))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) ((unsigned short) max((min((arr_6 [18LL]), (((/* implicit */unsigned short) (unsigned char)94)))), (((/* implicit */unsigned short) ((unsigned char) 6986474999808495594ULL))))));
        var_27 = min((((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [i_4 - 1] [i_4]))), (var_14));
    }
}
