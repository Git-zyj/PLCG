/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139656
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) -1707643283)) == (var_17)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((-1707643274) + (1707643284))) - (10)))))), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_8 [i_0 + 1] [i_1 - 3] [i_1] [i_3])))))) ? (((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */unsigned long long int) max((arr_9 [i_0 + 1] [i_3] [i_2] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) (short)-1428))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                                var_22 = ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]);
                                var_23 ^= ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0] [i_4]) <= (((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0 + 1] [(signed char)7] [i_0] [i_0 - 2]), (((/* implicit */unsigned int) 222386110)))))));
                                var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 - 1])) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) - (arr_9 [24LL] [i_1] [i_1] [i_1] [i_1 - 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = -5927097777283027570LL;
    /* LoopSeq 1 */
    for (int i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) (+(((int) arr_7 [i_5]))));
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            for (int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_27 |= (((!(((((/* implicit */_Bool) var_6)) && (arr_18 [i_8] [i_7] [i_6] [i_5]))))) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) max((((/* implicit */short) ((-1113153624) != (arr_11 [i_7])))), ((short)19127)))));
                        var_28 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)35661)) != (arr_19 [i_5]))))));
                    }
                } 
            } 
        } 
    }
}
