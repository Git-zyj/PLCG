/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136044
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
    var_15 = ((/* implicit */short) (~(min((((/* implicit */long long int) ((((/* implicit */int) (short)27055)) >= (((/* implicit */int) var_5))))), (max((((/* implicit */long long int) var_0)), (140720308486144LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_1] [i_0])));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_10))));
                    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8631935705493892372ULL))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((long long int) arr_10 [i_3])) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)66)))))));
        var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3]))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_9 [i_3]))));
    }
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) max((16443794415442415142ULL), (16443794415442415142ULL)));
        arr_16 [i_4] [(unsigned short)19] = ((/* implicit */_Bool) (((~(arr_12 [i_4] [i_4]))) | ((~(arr_12 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    var_21 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_0), (arr_10 [(signed char)16])))) ? (((/* implicit */unsigned int) ((int) arr_12 [(unsigned char)2] [i_6]))) : (arr_14 [i_4]))) << (((((/* implicit */int) ((unsigned char) 10389419273881151799ULL))) - (34)))));
                    arr_22 [i_4] [i_5] [i_6] = var_6;
                    arr_23 [i_6] [i_5] [i_4] = ((/* implicit */signed char) arr_10 [i_5]);
                    arr_24 [i_4] = ((/* implicit */unsigned char) (+(((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (137405399040LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        arr_25 [i_4] |= ((/* implicit */short) arr_17 [i_4] [i_4]);
        var_22 = ((/* implicit */signed char) ((long long int) ((8589934591LL) + (((/* implicit */long long int) 1576586656U)))));
    }
}
