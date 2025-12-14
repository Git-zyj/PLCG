/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12027
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned char) (~((+((-(var_1)))))));
                                var_17 = ((/* implicit */unsigned char) (((~(arr_14 [(signed char)7] [i_1] [i_1] [i_1]))) == (var_4)));
                                var_18 = ((/* implicit */unsigned char) arr_7 [i_1] [i_2] [i_3] [i_4]);
                                var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
                                var_20 = ((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1]));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) var_6);
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) var_10);
                        var_23 = ((/* implicit */long long int) var_10);
                        var_24 = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_1] [i_0]))))))));
                        var_25 = min((((unsigned short) max((var_4), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_5]))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0])))))))));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_10)))) - (arr_8 [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_6] [i_0]))));
                        var_28 = var_12;
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) (~(var_4)));
                            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8])))))));
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_31 = arr_19 [i_1] [i_2] [i_7] [i_9];
                            var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                        }
                        var_33 ^= var_4;
                        var_34 = ((/* implicit */int) var_8);
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) var_5);
}
