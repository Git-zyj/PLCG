/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171297
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
    var_10 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (var_0) : (var_6)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_4))) : (((/* implicit */long long int) ((1458447874U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-8)))))))) ^ (var_5)));
    var_11 = ((/* implicit */long long int) var_3);
    var_12 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_1))))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_0), (var_6))) <= (max((1099511627775LL), (2147352576LL))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) arr_0 [i_0 + 1])), (arr_1 [i_0] [i_0 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (((((((/* implicit */_Bool) 2966041767U)) && (((/* implicit */_Bool) var_1)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_0] [i_0] [i_1] [i_0 - 4] = ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (short)-20)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (-1LL));
                        arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                        var_14 = ((/* implicit */long long int) min((var_14), (arr_6 [i_0 - 1] [4U] [i_0 - 1] [i_0 - 2])));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) max((-3825450180665661529LL), (((/* implicit */long long int) (signed char)3))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (+(arr_1 [(signed char)0] [i_1])))), (max((33553920LL), (((/* implicit */long long int) (short)8)))))))))));
                            var_17 -= ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (1924568078U)))) & (((((/* implicit */_Bool) 1328925528U)) ? (((long long int) arr_4 [i_4] [i_1] [i_1])) : (min((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1])), (arr_7 [i_0] [i_1] [i_2] [(short)8])))))));
                            var_18 -= ((/* implicit */short) ((max((3850272333439630479LL), (-3825450180665661529LL))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)28407))))));
                        }
                    }
                } 
            } 
        } 
        var_19 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((var_0), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (var_2) : (var_2)))))));
        var_20 = 3850272333439630479LL;
    }
    /* vectorizable */
    for (long long int i_5 = 4; i_5 < 9; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5 - 1] [i_5] = var_4;
        var_21 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 3850272333439630479LL)))));
        var_22 = (((-(var_8))) % (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5 + 1]))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 6; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_23 += ((/* implicit */long long int) ((signed char) arr_21 [i_7 + 4] [i_5 + 1]));
                        var_24 -= ((/* implicit */unsigned int) ((long long int) arr_5 [i_5 - 2] [i_7 - 1] [i_7 + 2]));
                        arr_27 [i_5] [i_6] [i_7 + 2] [i_7 + 2] = ((/* implicit */unsigned int) var_4);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) 2377608415U)) / (1LL)));
                    }
                } 
            } 
        } 
    }
}
