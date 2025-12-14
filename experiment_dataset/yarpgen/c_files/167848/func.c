/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167848
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) var_8);
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)8191)) % (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_21 ^= (!((_Bool)0));
                        var_22 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)128))))));
                        var_23 = (_Bool)1;
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) var_10);
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1433563186077940773ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_15 [4U] [i_5] [i_5] [4U] [i_5] [i_4] [(short)8] |= ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)24)) ^ (((/* implicit */int) var_11))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) != (((unsigned long long int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_24 [i_0] [i_0] [12LL] [i_7] = ((/* implicit */_Bool) (-(575334852396580864LL)));
                        arr_25 [7LL] [i_6] [(_Bool)1] [i_6] [(unsigned char)3] [i_7] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65526))));
                        var_29 = ((/* implicit */short) ((var_18) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)234))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((var_13) ? (((/* implicit */int) (unsigned short)8176)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    var_31 &= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) (!((_Bool)1)))))))));
}
