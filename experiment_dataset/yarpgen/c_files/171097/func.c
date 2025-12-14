/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171097
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) var_5);
        var_11 -= ((unsigned int) (_Bool)0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_12 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_1))))));
                        arr_8 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_4), ((_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1)))))));
                        arr_9 [i_3] [i_3] [i_3] [i_1] [i_0] [i_3] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_13 = ((/* implicit */unsigned int) arr_3 [i_0] [19ULL]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) var_6);
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) var_4);
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 18; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 + 3] [i_6 + 2] [i_6]))) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (((/* implicit */long long int) -1024983463))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (_Bool)1))));
                    var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (var_5)))) ? (((unsigned int) var_2)) : (((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                {
                    arr_26 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) (+(((var_2) / (((/* implicit */long long int) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))))))))));
                    var_18 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                {
                    arr_32 [i_7] [i_10] [i_7] [i_7] = ((/* implicit */unsigned char) var_8);
                    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            {
                arr_39 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((arr_34 [i_12] [i_13]) == (((/* implicit */unsigned int) var_0))))) : (arr_37 [i_12] [i_12] [i_13])))));
                var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_3)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) (_Bool)0))))) & (((9223372036854775807LL) >> (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
