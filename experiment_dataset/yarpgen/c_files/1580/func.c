/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1580
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
    var_13 = ((/* implicit */long long int) 0U);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */short) 0U);
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((unsigned char) 4294967292U)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967290U))))))))) - (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0 - 2] [i_0 - 2])), (var_3))))) | (-7323910047522875790LL)))));
    }
    for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)34597)) ? (((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */unsigned int) -265222700)) : (11U))) : (4294967292U))) > (((/* implicit */unsigned int) (~((+(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)56966)))))));
                        var_18 = ((/* implicit */unsigned short) (short)-945);
                    }
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_14 [(unsigned short)10] [i_5] [i_3] [(_Bool)1] [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) var_4)), ((+(((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (-7986371985254912493LL)))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_13 [i_1 + 1] [i_3 - 1]))))))));
                        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) arr_8 [i_5]))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (arr_3 [i_3]))))));
                    }
                    var_21 = ((/* implicit */long long int) ((((((int) var_2)) ^ (((/* implicit */int) arr_6 [i_3])))) <= (((((/* implicit */_Bool) max((arr_7 [i_2]), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((signed char) (unsigned char)126))) : (-1954410481)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_11)), (((-7986371985254912493LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_6] [i_1 + 2] [i_6] [i_1]))) : (arr_19 [i_6 - 1] [i_1 + 2] [i_3 - 1] [i_1 + 2] [i_1 - 3] [i_1]))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 2] [i_2] [i_3 - 1] [i_2] [i_1 - 2] [i_7]))) : (4294967281U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_6] [i_3 - 1] [i_1 + 1] [i_1 + 1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (4294967289U)))) ? (min((-7986371985254912493LL), (((/* implicit */long long int) arr_5 [i_1 - 3])))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) -14103331)) : (-4616024569263229236LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 |= ((/* implicit */short) ((_Bool) max((((((/* implicit */int) var_2)) + (((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) (_Bool)1))))));
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_12))));
}
