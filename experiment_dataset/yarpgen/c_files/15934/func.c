/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15934
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((((/* implicit */int) (signed char)117)) | (((/* implicit */int) (short)3869)));
        var_13 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = max((-263910068), (min((((/* implicit */int) (short)-32545)), (((((/* implicit */_Bool) (unsigned short)192)) ? (((/* implicit */int) (unsigned short)28672)) : (((/* implicit */int) var_9)))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)192))))));
                        arr_14 [i_1] [i_3] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (short)3854);
                        arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_9 [i_2 - 1]);
                        var_15 *= ((/* implicit */unsigned int) (short)3859);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_3]))))) && (((/* implicit */_Bool) arr_7 [i_1] [i_1])))))));
                                var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_3]))));
                                arr_22 [i_6] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (min((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)-3869))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_5 [i_6] [i_6])) : (((/* implicit */int) (short)3869)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)74)) >= (((/* implicit */int) (unsigned char)227))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned char)93))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned short) min(((~(((((/* implicit */long long int) ((/* implicit */int) var_4))) + (1072693248LL))))), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) (-(2677794869U)))) ? (max((2760021866U), (((/* implicit */unsigned int) (short)3869)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
}
