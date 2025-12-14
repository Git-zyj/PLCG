/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110288
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) var_13))));
                        var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (-751592168)))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_20 = (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0])) : (var_13));
                        arr_16 [i_4] = ((/* implicit */short) (unsigned short)54727);
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)10817))));
                        arr_17 [i_0] [i_1] [i_4] [i_2] [i_4] [i_4] = (+(((/* implicit */int) var_5)));
                    }
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_2] [i_0])) ? (((int) var_12)) : (((((/* implicit */_Bool) (unsigned short)54737)) ? (0) : (((/* implicit */int) var_8))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned int) var_0)))));
                        var_24 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]))) : (arr_2 [i_5])))) * (arr_18 [i_0] [i_1] [i_2] [i_5] [i_5 + 2] [i_1])));
                    }
                    arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) || (((_Bool) var_4))));
                }
                var_25 = ((/* implicit */unsigned int) var_0);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_6] [i_7] [i_7 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_18)), (arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)54727)) : (((/* implicit */int) var_8))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7] [i_6] [i_6] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) 0))))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)54742)) != (((/* implicit */int) (unsigned short)20182)))))))) < (((/* implicit */int) (unsigned short)10817))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (((~(((((/* implicit */_Bool) arr_3 [i_1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0]))))))) / (((/* implicit */long long int) 4294967295U)))))));
                            arr_27 [i_1] = ((/* implicit */long long int) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_12))));
}
