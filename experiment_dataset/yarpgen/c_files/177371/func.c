/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177371
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)218)))))) == ((+(var_8)))))), (min((((((/* implicit */int) (unsigned char)37)) >> (((((/* implicit */int) (unsigned char)57)) - (43))))), (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_10)) - (49232)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned char) ((4294967289U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 4])))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28383)) ? (-6086121085225712430LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)56), ((unsigned char)220)))))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_5 [i_0]))));
                        var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 4])) : (((/* implicit */int) (unsigned char)196))))));
                    }
                    for (short i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_4 [i_2] [i_4]);
                        var_18 = (unsigned char)60;
                        arr_15 [i_0] [(signed char)18] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_4])) ? (min((((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_1] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 3] [i_1] [i_2] [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)196))))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2])))) != (((/* implicit */int) (unsigned short)34676))))))));
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)28921)), ((unsigned short)54669)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_20 = ((unsigned short) (+(((/* implicit */int) arr_18 [i_2] [i_0] [i_1] [i_5 - 1]))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                        var_22 = ((/* implicit */signed char) arr_5 [i_2]);
                    }
                    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-106))));
                    arr_19 [i_0] [i_2] = ((/* implicit */unsigned short) max((((unsigned int) (+(((/* implicit */int) arr_4 [i_0] [(unsigned char)3]))))), (((/* implicit */unsigned int) min(((unsigned char)196), ((unsigned char)196))))));
                    var_24 ^= ((/* implicit */unsigned int) 9977159138778427556ULL);
                }
            } 
        } 
    } 
}
