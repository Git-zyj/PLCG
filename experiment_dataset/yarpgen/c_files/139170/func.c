/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139170
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
    var_13 = ((/* implicit */short) (~(((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_10))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (+(var_4)));
        var_15 -= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)28)) + (((/* implicit */int) arr_1 [12LL]))))) + ((+(var_4))))), (((/* implicit */unsigned long long int) var_8))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) (unsigned char)165))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */short) (unsigned short)38780);
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24527)) ? (((/* implicit */int) ((unsigned short) (short)-32279))) : (((/* implicit */int) arr_9 [i_5] [(unsigned short)8] [i_2] [(unsigned short)8]))))) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (signed char)-53))));
                            var_18 -= ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38783))) != (arr_19 [i_1] [i_2] [i_6] [i_7]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [1ULL] [1ULL] [i_7])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_6] [i_7])))))) : (((((/* implicit */_Bool) arr_13 [i_7] [i_6] [i_2] [i_2] [i_1] [i_1])) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))))))));
                        var_20 = ((/* implicit */unsigned short) max(((+(max((arr_18 [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_6 [i_1])))))), (((/* implicit */unsigned long long int) ((((long long int) (_Bool)1)) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                        var_21 = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) (short)-8192))) ^ (((/* implicit */int) var_7)))), ((((((~(((/* implicit */int) (unsigned short)16320)))) + (2147483647))) >> ((((-(-8612497888406341831LL))) - (8612497888406341810LL)))))));
                        arr_22 [i_1] [i_1] [i_2] [(unsigned char)16] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_10)))) ? (((var_9) ? (((arr_3 [i_1]) & (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8612497888406341832LL)))) ? (((((/* implicit */int) arr_11 [i_1] [i_2] [i_7] [i_7])) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))))));
                        arr_23 [i_1] [5U] [i_6] [i_7] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            arr_28 [i_8] [(unsigned short)2] [i_1] = ((/* implicit */unsigned char) arr_8 [i_1] [i_8]);
            arr_29 [i_1] [(short)12] [i_1] = ((/* implicit */unsigned char) ((0ULL) & (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_8] [i_8] [i_8] [i_8]))));
            var_22 = ((/* implicit */signed char) arr_5 [i_1] [i_8]);
        }
        var_23 = ((/* implicit */long long int) (-(((arr_0 [i_1]) - (((/* implicit */int) var_2))))));
    }
}
