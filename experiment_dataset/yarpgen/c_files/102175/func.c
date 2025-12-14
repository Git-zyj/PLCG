/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102175
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) var_15);
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_20 = ((/* implicit */signed char) var_4);
                    var_21 = ((/* implicit */short) ((max((9047380162346395424LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)54))))))) << (((arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 3]) - (6678275930099112320LL)))));
                }
                for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (9047380162346395424LL)));
                    arr_14 [i_3] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
                }
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_18 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4] [i_1])) ? (1627805225U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)109)))))));
                    var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-4686)) ? (((/* implicit */int) arr_12 [9ULL] [i_1] [(unsigned short)6] [i_1])) : (((/* implicit */int) arr_12 [10U] [i_1] [i_0] [i_1]))))));
                    arr_19 [i_1] [14U] [i_4] [i_4] = (!(((/* implicit */_Bool) (unsigned short)62887)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) arr_9 [i_6 + 1] [i_1] [(unsigned short)10]);
                                arr_25 [9LL] [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (arr_21 [i_1] [(_Bool)0] [i_6 + 1] [i_6 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) -4872836730558343518LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9047380162346395425LL)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_25 = ((/* implicit */short) arr_28 [i_0]);
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_23 [i_1]))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) 1329654954U);
}
