/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188144
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
    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)0))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned short) (-(((max((((/* implicit */unsigned long long int) -4946108449058515307LL)), (arr_0 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2)))))))));
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_0 [i_0 + 1]))))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_14 = ((min(((-(4611686018427385856ULL))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) (unsigned short)16481))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) 8711054429243207889ULL);
                    arr_11 [4U] [i_1] [4U] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 17495490519139842816ULL)) ? (var_4) : (var_10))) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_7)) : (-1108609429))))))));
                }
            } 
        } 
        var_16 = ((((/* implicit */int) var_2)) ^ (max((((/* implicit */int) (unsigned char)208)), (var_10))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) max((min((((/* implicit */unsigned short) (short)-20081)), (arr_3 [i_6] [2]))), (((/* implicit */unsigned short) var_8))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)0)), (var_0)))) - (min((((/* implicit */unsigned long long int) arr_18 [i_1] [i_1 - 1] [i_1] [i_1] [i_6 + 2])), (17059715722225948637ULL))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
    {
        arr_25 [(unsigned char)3] = (_Bool)1;
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (signed char)-100)) + (118)))));
    }
    var_20 = (((-((+(((/* implicit */int) var_8)))))) > (max((((/* implicit */int) (_Bool)1)), (1479881934))));
    var_21 = ((/* implicit */unsigned int) var_7);
}
