/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168683
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
    var_15 = ((/* implicit */unsigned short) (~(((min((((/* implicit */unsigned int) (signed char)17)), (var_3))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((-1LL), (((/* implicit */long long int) var_3))))))) ? (arr_2 [i_0] [i_0] [i_1]) : (((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((unsigned int) (signed char)-12)) : (((unsigned int) arr_0 [i_0] [i_1]))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-18)), (var_14)))) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (0ULL))) : (((/* implicit */unsigned long long int) 9223372036854775800LL))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (min((9223372036854775785LL), (((/* implicit */long long int) var_6))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_10))));
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25319)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-18))))) ? (1003395829U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)15535), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) min((arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]), ((unsigned char)255)))) : (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3] [12U] [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))))) : (((unsigned long long int) (unsigned char)161))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_25 [2] [i_6] [2] = ((/* implicit */unsigned long long int) arr_17 [i_6]);
                                var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 5712323837581944764LL)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_12 [i_4]);
                }
            } 
        } 
        arr_26 [i_4 + 1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5)))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_4] [(unsigned short)6] [(short)19])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (var_7)));
        arr_27 [i_4] = ((/* implicit */unsigned long long int) var_2);
    }
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_30 [(unsigned char)16] = ((/* implicit */long long int) 10162038762246102364ULL);
        var_23 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-3430)) : (((/* implicit */int) (unsigned short)29629))))) ? (arr_9 [i_9] [20LL] [i_9] [(signed char)18] [i_9]) : (((/* implicit */int) ((signed char) 1880291963))))));
    }
}
