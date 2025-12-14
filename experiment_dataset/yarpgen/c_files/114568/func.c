/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114568
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
    var_10 -= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535))))));
                    var_13 -= ((/* implicit */_Bool) var_0);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_0] [0LL] [2U] = ((/* implicit */int) min((((var_4) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4498481247056853867ULL)))))), (((/* implicit */long long int) (+(((/* implicit */int) ((short) var_5))))))));
                        var_14 = ((/* implicit */unsigned char) var_9);
                    }
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
                    {
                        var_15 = (-(((int) (_Bool)1)));
                        arr_15 [i_0] [i_1] [i_2] [i_0] [6] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? ((((+(((/* implicit */int) var_5)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -450835984))))))) : (((/* implicit */int) ((unsigned char) arr_7 [i_2 - 2] [i_4 - 1])))));
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_19 [i_1] [i_5] [i_2] [i_5] [i_5] [(short)13] &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2 - 2])) > (((((/* implicit */_Bool) (unsigned short)36871)) ? (((/* implicit */int) arr_17 [i_5] [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                        var_16 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) arr_6 [i_0] [i_0] [i_2 + 1] [i_0])));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) arr_4 [i_1]);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_7)) : (arr_1 [i_5] [i_2 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0]))))) : (((unsigned long long int) arr_10 [(short)1]))))));
                    }
                }
            }
        } 
    } 
}
