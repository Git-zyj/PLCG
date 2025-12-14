/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164073
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [8LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) ((signed char) (short)13568))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) var_0);
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_4))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)22)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) var_0)))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-22)), ((unsigned short)32596)))))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3] [i_3])) + ((+(((/* implicit */int) var_9))))))) ? (((((_Bool) arr_7 [i_3])) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */int) arr_13 [i_3])) ^ (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)27))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) var_5);
                    arr_20 [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_3]))))));
                }
            } 
        } 
        arr_21 [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) arr_10 [i_3])) : (var_1))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) arr_7 [i_6])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_31 [i_6] [i_6] = ((/* implicit */short) arr_30 [i_6] [i_7] [(unsigned char)2]);
                    arr_32 [i_6] [i_6] = ((/* implicit */unsigned int) arr_4 [i_8] [i_7] [i_6]);
                }
            } 
        } 
        arr_33 [9U] [i_6] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_6])) ? (var_3) : (((/* implicit */long long int) var_7)))))) ? (((int) ((((/* implicit */_Bool) (unsigned short)32954)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5915417454390435558LL)))) : (((/* implicit */int) arr_12 [i_6])));
    }
    var_14 = ((/* implicit */long long int) var_2);
    var_15 = ((/* implicit */_Bool) ((long long int) ((_Bool) (!(((/* implicit */_Bool) var_6))))));
}
