/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16603
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
    var_19 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_10)) >> (((arr_1 [i_0]) + (6126274949490498496LL))))) << (((min((1387153424U), (var_2))) - (1225477167U)))))));
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [0LL] [i_1] [i_2 - 4] [i_3])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3])))))))) == (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((3992308338U) - (((/* implicit */unsigned int) -961153159))))))));
                                var_22 = ((/* implicit */unsigned int) min((-903465563), (((/* implicit */int) (unsigned short)56244))));
                                var_23 = ((/* implicit */_Bool) (~(1753072491)));
                            }
                        } 
                    } 
                    var_24 = arr_1 [i_2];
                    var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0]));
                    var_26 |= ((/* implicit */signed char) ((unsigned short) (((~(((/* implicit */int) (unsigned short)4095)))) == (((/* implicit */int) arr_7 [i_0] [(unsigned short)4] [i_1] [(unsigned short)4])))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_27 |= ((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)-111)) | (((/* implicit */int) (unsigned short)15087)))));
                    var_28 = ((/* implicit */unsigned int) ((((1250845226U) < (302658961U))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [5LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) ((_Bool) var_4));
                        var_30 = ((/* implicit */_Bool) ((short) ((int) arr_12 [i_0] [i_0])));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                {
                    var_31 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((arr_24 [i_7]) > (((/* implicit */long long int) ((/* implicit */int) arr_23 [(unsigned short)17])))))))), (min((((/* implicit */unsigned int) var_10)), (((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7])))))))));
                    var_32 &= (~(7011050151886042142LL));
                    var_33 = ((/* implicit */unsigned short) (~(1959545628U)));
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)20)))))));
                }
            } 
        } 
    } 
}
