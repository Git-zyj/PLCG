/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148000
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = (~(((/* implicit */int) var_2)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [2U] [i_3] [(short)6] [i_1] [i_0] = ((/* implicit */short) min((max(((-(((/* implicit */int) var_8)))), (var_7))), (((/* implicit */int) ((unsigned char) min((((/* implicit */short) var_4)), (var_6)))))));
                                var_12 = ((/* implicit */long long int) var_2);
                                arr_15 [i_0] [i_3] [(unsigned short)0] [i_3] [i_4] [10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_7)))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) max((var_10), (var_4))))));
                                arr_16 [6LL] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1440914120383199170LL)) ? (((/* implicit */long long int) max(((-2147483647 - 1)), (2147483642)))) : (2304717109306851328LL)));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((max((var_5), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((unsigned short) var_4)))))));
                    arr_17 [i_1] [6] [6] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) -1130956434)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))));
                }
            } 
        } 
        var_14 += ((/* implicit */unsigned long long int) (~(((long long int) var_2))));
        arr_18 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_6)))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
        arr_22 [i_5] = ((/* implicit */long long int) ((unsigned int) (unsigned short)26669));
        var_16 *= ((/* implicit */unsigned short) ((_Bool) var_5));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_5)))) ? (max((-2304717109306851336LL), (((/* implicit */long long int) 2147483628)))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)32754), ((short)3150)))))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                        var_19 = ((/* implicit */int) min((var_19), (min((max((var_1), (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)32768)))))), (((/* implicit */int) var_0))))));
                        var_20 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) var_7))), ((+(((/* implicit */int) var_9))))));
                        var_21 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))));
                        var_22 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
        arr_35 [i_6] = ((/* implicit */int) var_4);
    }
    /* LoopSeq 1 */
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_23 ^= min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_3)))), (min((((/* implicit */unsigned long long int) var_8)), (var_5))));
        var_24 = ((/* implicit */unsigned long long int) var_6);
    }
    var_25 &= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) max((var_6), (((/* implicit */short) var_10))))))), (((/* implicit */int) max((((/* implicit */short) var_10)), (min((((/* implicit */short) var_4)), (var_6))))))));
}
