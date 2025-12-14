/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188236
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
    var_14 = ((/* implicit */unsigned short) var_6);
    var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(376673392)))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_0)))))))) ? ((+(((((/* implicit */_Bool) 7205889763604378841LL)) ? (2259833531746516776ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_2 + 2]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_2 + 1])))));
                                var_17 = ((/* implicit */unsigned int) var_3);
                                arr_15 [i_0] [i_1] [10ULL] [i_3] [i_2] [i_4 + 3] = arr_0 [i_0];
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_10)) : (var_9)))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) var_13);
                        var_20 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_5]))), (max((arr_8 [i_0] [i_1] [i_5]), (((/* implicit */int) var_12))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_10 [i_6]))));
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) var_0);
                            var_23 += ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_8])) >= (((/* implicit */int) arr_4 [i_5]))));
                            var_24 += ((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [i_8] [i_5] [i_0] [i_8]))));
                        }
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_3 [i_0]))));
                        var_26 += (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [(unsigned char)0] [(unsigned char)10] [i_5] [i_7])), (4294967283U)))), (2259833531746516776ULL)))));
                        var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2259833531746516776ULL)) ? (16516918536027354908ULL) : (2259833531746516776ULL)));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) 16186910541963034840ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))))))));
}
