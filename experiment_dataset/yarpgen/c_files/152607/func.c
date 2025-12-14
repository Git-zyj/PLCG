/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152607
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
    var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4096)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(var_7)))))));
    var_15 |= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_3)) < (((/* implicit */int) var_5)))))))) : (var_8));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned short) (-(536870911LL)));
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (unsigned char)32))) % (((((/* implicit */_Bool) ((((-1) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65517)))))) ? (max((var_11), (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_4] [i_0 - 1] [i_0 - 1]))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) (+(((((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_6)) - (38422)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 4; i_5 < 11; i_5 += 4) 
    {
        var_18 |= ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) var_6))), (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5]))) | (((arr_16 [i_5] [i_5 - 3]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30)))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_8);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? ((~(((unsigned long long int) (unsigned short)49152)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [(unsigned short)10] [i_5 - 2])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_28 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= ((~(2534011810U)))));
                        arr_29 [i_5] [i_6] [(signed char)1] [1] [(signed char)1] [i_9] = ((/* implicit */unsigned long long int) ((signed char) (((~(-1147933136))) >> (((arr_1 [i_5 - 2]) - (3759173981399733882LL))))));
                        var_21 |= ((/* implicit */short) (+(0)));
                    }
                }
            } 
        } 
    }
}
