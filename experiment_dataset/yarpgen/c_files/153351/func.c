/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153351
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
    var_17 += ((/* implicit */unsigned char) (short)-32032);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
                    var_18 = ((/* implicit */long long int) (_Bool)1);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 2147483647);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))));
                                var_20 ^= ((/* implicit */short) ((4123938035U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-26583)))));
                                arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_7)) - (42228)))))) + (var_11)))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (max((var_9), (((/* implicit */long long int) var_15))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */short) (_Bool)1);
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) var_10);
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((var_4) ? (((/* implicit */int) (short)12839)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_24 ^= ((/* implicit */unsigned short) ((unsigned char) var_0));
                    }
                } 
            } 
        } 
        arr_27 [i_5] = ((((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])))) == ((-(((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) < (((/* implicit */int) (short)-26599))));
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */int) (!(arr_16 [i_9])))) : (((/* implicit */int) var_3))));
        var_25 = min((((/* implicit */long long int) var_8)), (arr_21 [i_9] [i_9]));
    }
    var_26 = ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_10)))) >> (((((/* implicit */int) var_10)) - (22815))));
}
