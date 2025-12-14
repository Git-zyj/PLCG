/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178818
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
    var_11 = ((/* implicit */_Bool) (+((-((+(var_1)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_12 -= ((/* implicit */signed char) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_8)))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_9))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_9)))));
        var_14 = ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = var_10;
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(var_6)))), ((signed char)122)))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 14LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            var_15 ^= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-115))));
                            var_16 *= ((/* implicit */signed char) arr_1 [i_1] [i_2]);
                            var_17 = ((/* implicit */long long int) var_3);
                            var_18 *= ((/* implicit */unsigned long long int) arr_19 [i_5 + 1] [i_2] [i_5 + 1] [i_2] [i_5 - 1]);
                        }
                    }
                } 
            } 
            arr_20 [i_1] = var_1;
        }
        for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((signed char) min(((!(((/* implicit */_Bool) arr_0 [6ULL])))), ((!(var_6)))))))));
            var_20 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_19 [i_1] [i_1] [i_6] [i_1] [(unsigned short)4])))), (((/* implicit */int) ((min((arr_12 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */signed char) var_6)))))))))));
        }
        arr_25 [i_1] [i_1] = ((/* implicit */long long int) (~(4294967295U)));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)104))) / (5157381360326022244LL)))), (arr_6 [i_1] [i_1])))));
                        arr_34 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)122))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_1))), (((/* implicit */unsigned long long int) arr_4 [i_7]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    arr_39 [i_1] [i_10] = (~(7ULL));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 2) 
                        {
                            {
                                arr_45 [i_1] [i_13 - 1] [i_10] [i_12] [i_12] [i_13 - 1] [i_13 - 1] = ((/* implicit */unsigned short) (~(var_2)));
                                arr_46 [i_1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (var_5)));
        var_23 -= ((/* implicit */short) var_4);
    }
    var_24 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
    var_25 = var_10;
    var_26 = ((/* implicit */long long int) 1U);
}
