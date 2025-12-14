/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181592
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
    var_11 = var_5;
    var_12 = ((/* implicit */long long int) ((0) / (((((/* implicit */_Bool) 0)) ? (0) : (2147483647)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (signed char)15);
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned char) var_0)))), (((/* implicit */unsigned char) ((((long long int) (unsigned char)255)) >= (((-5019640541831913308LL) ^ (((/* implicit */long long int) 764699607))))))))))));
        arr_2 [i_0] &= ((/* implicit */signed char) ((((3255837453U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-16)) || (((/* implicit */_Bool) (unsigned char)252))))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_15 = ((unsigned long long int) max((15948121529673464568ULL), (((/* implicit */unsigned long long int) (+(var_7))))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) <= (var_4))))));
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)-31))))))));
                }
            } 
        } 
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */long long int) ((/* implicit */int) var_2))) / (274877382656LL))))) ^ (var_7)));
        var_17 = ((/* implicit */signed char) 2147483647);
        var_18 = ((/* implicit */unsigned short) var_6);
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned char) ((((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)87))))) + (((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) >= (8)))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((long long int) 0)) : (((/* implicit */long long int) 3))));
    }
    var_21 = ((/* implicit */unsigned short) (unsigned char)142);
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) + (((/* implicit */int) ((_Bool) ((var_10) ^ (((/* implicit */int) (signed char)-7)))))))))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned short)6144)) / (var_10))))) ^ (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288))) >= (9223372036854775807LL)))) / (min((((/* implicit */int) (signed char)37)), (2147483647)))))));
                    arr_23 [i_7] [i_7] [11LL] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
}
