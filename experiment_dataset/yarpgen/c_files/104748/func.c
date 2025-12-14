/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104748
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
    var_10 = ((/* implicit */short) (-(3267861491U)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (2714527017U)))) || (((/* implicit */_Bool) var_8)))))) >= (((max((((/* implicit */long long int) var_2)), (6821437749359568226LL))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_11 = ((/* implicit */unsigned char) 3267861491U);
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3267861491U)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8067)) | (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) (unsigned short)50882)) ? (((/* implicit */long long int) var_6)) : (6821437749359568229LL))))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_13 [(unsigned char)8] [i_1] [i_4] = ((/* implicit */long long int) var_3);
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */long long int) 2015323900U)), (var_7))) <= (((/* implicit */long long int) ((/* implicit */int) max(((short)32755), (var_8))))))))) >= ((-((-(2279643402U)))))));
                    }
                } 
            } 
            var_14 = ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)43344))))) | (((((/* implicit */long long int) ((/* implicit */int) (short)-32767))) | (6821437749359568210LL))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((10LL) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
            var_16 = ((/* implicit */int) (unsigned short)65032);
        }
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((int) min((min((((/* implicit */unsigned int) (signed char)119)), (2279643402U))), (((/* implicit */unsigned int) ((signed char) (unsigned short)65535)))))))));
        arr_18 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)111)) / (((/* implicit */int) ((unsigned short) max((var_1), ((short)-32758)))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21813)) ? (((((/* implicit */unsigned int) ((/* implicit */int) max(((short)32755), ((short)-32758))))) - (max((((/* implicit */unsigned int) (short)-32755)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_19 = ((/* implicit */unsigned long long int) 4294967295U);
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        for (short i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            {
                arr_24 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((11957428992060065944ULL) & (((/* implicit */unsigned long long int) var_9)))))) - (((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (short)32755))))));
                arr_25 [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_1))))) ? (11957428992060065944ULL) : (((/* implicit */unsigned long long int) max((-7146928676907821729LL), (((/* implicit */long long int) ((1853230453U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))))))));
            }
        } 
    } 
}
