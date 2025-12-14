/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18070
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / ((-(-9054998189107179573LL)))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) 9054998189107179562LL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) -9054998189107179583LL);
                        arr_11 [i_1] [i_1] [i_2] [i_2] = ((unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19387))) : (2097151U)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-9054998189107179591LL)))) + ((+(((arr_3 [i_4] [i_4]) ? (-9054998189107179591LL) : (((/* implicit */long long int) var_5))))))));
                            var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (((9054998189107179549LL) - (((/* implicit */long long int) var_5)))))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [i_1 + 2])))))));
                            var_16 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (9054998189107179591LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7372))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                {
                    arr_25 [i_7] = ((/* implicit */int) arr_10 [i_8] [i_0]);
                    arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                    arr_27 [i_8] [i_7] [i_0] = ((/* implicit */signed char) (unsigned short)33307);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (unsigned char i_12 = 3; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) arr_35 [i_12 - 2] [i_12 - 2]);
                            var_18 = ((/* implicit */unsigned short) arr_29 [i_10]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            arr_43 [i_9] |= ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_14] [i_10] [i_13]))) : (arr_37 [i_10] [i_10]))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56712)))))), ((-(-9054998189107179556LL)))));
                            arr_44 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((max((var_8), (-2113441676))) ^ (((((/* implicit */_Bool) 1470297237)) ? (((/* implicit */int) arr_35 [i_13] [i_13])) : (((/* implicit */int) arr_35 [i_9] [i_13]))))));
                            var_19 = ((/* implicit */unsigned char) ((unsigned short) ((-9054998189107179566LL) <= ((((_Bool)1) ? (((/* implicit */long long int) -1470297257)) : (-9054998189107179591LL))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned short) arr_35 [i_9] [i_10]);
            }
        } 
    } 
}
