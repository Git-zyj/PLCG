/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104663
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(var_0)));
                    arr_10 [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) == (arr_5 [24ULL] [i_1]))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) var_2);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_3])))) ? (min((arr_0 [i_3]), (arr_0 [i_4]))) : (min((((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3])), (((unsigned long long int) var_3))))));
            var_15 = ((/* implicit */long long int) (_Bool)1);
            arr_16 [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (min((((/* implicit */int) arr_1 [(_Bool)1])), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & ((((_Bool)1) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (_Bool)1))))));
                            var_18 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_18 [i_5] [i_7] [i_8])) & (((/* implicit */int) min((arr_11 [15ULL] [i_5]), (var_7))))))));
                        }
                        arr_27 [i_3] [i_5] [i_6] [i_7] = (+((+((-(var_8))))));
                        arr_28 [8ULL] [i_5] [i_7] [i_7] &= ((/* implicit */_Bool) (-(max(((+(2438250313U))), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_19 = ((/* implicit */unsigned int) arr_17 [i_6]);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((min((arr_14 [i_5] [i_5] [i_3]), (arr_14 [i_5] [i_5] [i_3]))) << (((/* implicit */int) (_Bool)1)))))));
            arr_29 [i_3] [i_5] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_21 -= ((/* implicit */int) (~(min((((/* implicit */unsigned int) (!((_Bool)1)))), ((~(var_4)))))));
            arr_32 [i_3] [10] [i_3] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))));
            var_22 = (!(((/* implicit */_Bool) (-(arr_31 [i_3] [i_9])))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    {
                        var_23 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((_Bool) -1))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_49 [(_Bool)1] [i_10] [i_3] [i_14] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_17 [i_14]) + (374678636180468724LL)))));
                            arr_50 [i_3] [i_10] [i_13] [i_3] [i_15] = ((/* implicit */long long int) arr_39 [i_3] [(_Bool)1]);
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */unsigned char) min((min((-6439242967492452002LL), (((/* implicit */long long int) (_Bool)1)))), ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (262147032011367031LL)))))));
    }
    var_26 = var_3;
}
