/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116090
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_10)), (var_0))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 2366954733U)) : (((long long int) 10463582486047539008ULL))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((2366954716U) << (((((/* implicit */int) (signed char)101)) - (71))))))) != (((int) ((((/* implicit */_Bool) 17253337277171783358ULL)) ? (7988692292544857490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */long long int) ((17253337277171783343ULL) << (((4294967295U) - (4294967260U)))));
                    var_16 = ((/* implicit */unsigned int) 5643398973000717449ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 576460752303423487LL)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) & (-1160526420)));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -6483449948147974552LL)) ? (2556987481U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)65535))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned char) ((signed char) 2366954725U))))));
                }
            } 
        } 
    }
}
