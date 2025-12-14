/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162253
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
    var_12 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (unsigned short)65527))));
                    arr_10 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31744))) : (1280332148199739293ULL));
                    arr_11 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [(unsigned short)11])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_18 [i_0] [3U] [i_3] [i_0] = ((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) arr_13 [i_0] [i_4])) : (((/* implicit */int) arr_13 [i_0] [i_4])));
                    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_2 [i_4])))) << (((((65535) >> (((((/* implicit */int) (unsigned short)50752)) - (50751))))) - (32760)))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) - (5728885980362358977ULL)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (signed char i_7 = 3; i_7 < 22; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */short) ((4063232) - (((/* implicit */int) (_Bool)0))));
                        var_17 = ((/* implicit */int) 5728885980362358996ULL);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(min((arr_23 [(_Bool)1] [(_Bool)1]), (arr_23 [(_Bool)1] [i_5]))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        arr_32 [i_9] = arr_29 [i_9];
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9]))));
        arr_33 [i_9] = ((/* implicit */_Bool) var_1);
    }
}
