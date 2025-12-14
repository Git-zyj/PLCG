/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105840
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
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) < (((int) (~(((/* implicit */int) (unsigned short)30236)))))));
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | ((+(946470901U))))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_1 + 1])) <= (var_3)));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((((/* implicit */long long int) arr_3 [i_1] [i_1])) & (-9223372036854775804LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -7383264780218521056LL))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (1761856345957834269ULL) : (((/* implicit */unsigned long long int) 4294967288U))))));
    }
    for (short i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_6 [i_2] [i_2] = ((/* implicit */unsigned long long int) max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned int) var_2))));
        var_15 = ((/* implicit */unsigned char) arr_4 [(signed char)2]);
    }
    var_16 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30414))) > (min((((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_4 + 1])), (((var_3) % (((/* implicit */unsigned long long int) 4294967258U))))))));
                var_18 = ((/* implicit */unsigned long long int) (((~(-1130414712650462131LL))) ^ (((((1130414712650462116LL) | (((/* implicit */long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3])))))));
                arr_12 [i_3] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) max((3536419722784770549ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1638126043)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-7255636443893535517LL))) > (((((/* implicit */_Bool) (unsigned short)35138)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_4 + 1] [i_3]))) : (arr_10 [i_3] [i_4]))))))));
            }
        } 
    } 
}
