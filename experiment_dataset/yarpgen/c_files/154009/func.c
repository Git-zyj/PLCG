/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154009
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((int) (_Bool)0));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((7277882608131216424LL) > (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) ((var_13) == (((/* implicit */long long int) var_2)))))));
                    arr_8 [i_2] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3))));
                    var_17 += ((/* implicit */signed char) (-(((long long int) (signed char)-122))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 4; i_4 < 23; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (unsigned char i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_20 [i_5] [i_5] [i_4 - 3] [(_Bool)1] [i_5] = 5561774780507182420ULL;
                        var_18 = ((/* implicit */signed char) max((((unsigned int) max(((signed char)64), (((/* implicit */signed char) (_Bool)1))))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] [15LL] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_3] [i_3] [17]))));
    }
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) max((((signed char) (_Bool)1)), (arr_17 [i_7] [(_Bool)0] [i_8] [i_8] [i_8] [i_9 - 1])));
                    arr_31 [i_8] [(unsigned short)7] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (signed char)-62)) ^ (((/* implicit */int) (short)-32767)))))))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))) - (((long long int) -8312993625658382834LL))))));
                    arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_7] [(unsigned char)6] [i_7] [i_7])) > (132120576))))));
                }
            } 
        } 
    } 
    var_20 = var_12;
}
