/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174840
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) 4607895307404186115LL))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 |= ((arr_5 [i_0 + 1] [i_0 - 1] [i_3]) && (((/* implicit */_Bool) var_12)));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) var_12))));
                            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0 - 1]))));
                            var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) (signed char)-30))));
                        }
                        for (long long int i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((var_5) && (((/* implicit */_Bool) -4607895307404186116LL))));
                            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0]))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_5 - 1] [i_5 + 1] = ((/* implicit */_Bool) var_11);
                        }
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0 + 1])) <= (((/* implicit */int) var_11))));
        }
    }
    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), ((unsigned char)188)))) && (((/* implicit */_Bool) arr_16 [i_6 + 1] [i_6 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (long long int i_8 = 2; i_8 < 23; i_8 += 3) 
            {
                {
                    arr_26 [i_6] [i_8] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_24 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6 + 1]), (((/* implicit */unsigned short) arr_22 [i_6 + 2] [i_7] [i_6 + 2] [i_6 + 2]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_8 - 1]))))))))) != (min((((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [i_6]))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)30581))))))));
                    arr_27 [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_7] [i_6] [i_7] [i_6])) < ((((+(((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) ^ (((/* implicit */int) arr_19 [i_6 + 1]))))));
                    var_21 = ((/* implicit */signed char) (~(arr_25 [i_6 - 1] [i_6 + 2] [i_6])));
                    var_22 *= ((/* implicit */_Bool) min((((((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_6] [i_6] [i_6]))))) | (((var_1) ^ (var_0))))), (((/* implicit */long long int) arr_17 [i_6 - 1]))));
                    arr_28 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) -2901111866763456497LL);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) (-(max((max((8529514373825318971LL), (var_10))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned short) var_13)))))))));
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_9))));
    var_25 = (+(var_14));
}
