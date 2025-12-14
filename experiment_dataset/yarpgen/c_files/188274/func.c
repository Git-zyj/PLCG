/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188274
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
    var_17 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) 372090034);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_19 = ((/* implicit */_Bool) (+(((arr_2 [i_0]) / (((/* implicit */long long int) ((var_3) << (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (164))))))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3 + 1])))))) : (arr_5 [i_0] [i_1] [i_2])));
                            var_21 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) ((signed char) arr_8 [i_0] [i_1] [i_0]))), ((+(var_4))))));
                            arr_12 [i_0] [(unsigned char)19] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) (-(var_12)));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */_Bool) (+((-(4294967295U)))));
                arr_13 [0U] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [11LL])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(unsigned char)1])))));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                arr_17 [i_0] [i_5] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)221))));
                var_23 = ((/* implicit */int) (~(min((arr_2 [i_0]), (arr_2 [i_0])))));
                var_24 ^= ((/* implicit */_Bool) 581132081);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned int) arr_11 [(unsigned short)2] [i_1] [i_0] [(unsigned char)16]);
                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (var_12) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (-581132093) : (((/* implicit */int) (_Bool)1)))))))));
            }
        }
        var_26 = ((/* implicit */unsigned short) arr_21 [i_0] [i_0]);
    }
    var_27 = (-((~((~(((/* implicit */int) var_6)))))));
}
