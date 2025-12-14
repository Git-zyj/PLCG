/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169635
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned char) (-(((((/* implicit */_Bool) (unsigned char)146)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1377))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_4] [7U] [i_1] [(unsigned char)5] [i_1] [2] = ((/* implicit */int) min((var_13), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_12 [i_4 + 1] [i_1] [i_2] [14ULL] [i_4 - 1])))))));
                            var_18 = ((/* implicit */signed char) var_0);
                        }
                        for (long long int i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)36801))))) : ((+(arr_5 [i_0])))))));
                            var_19 += ((/* implicit */unsigned short) max(((+(((((/* implicit */int) (short)-8640)) - (var_12))))), (((/* implicit */int) var_14))));
                            var_20 -= ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_5 + 1] [i_2] [(short)0]);
                            arr_19 [(signed char)6] [(unsigned char)12] [i_2] [(signed char)6] [(short)2] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [i_5 + 1] [i_3] [i_2] [i_1] [i_0])) : ((-(((((/* implicit */int) arr_13 [7ULL] [7ULL] [i_3] [i_2] [7U] [7ULL] [(unsigned short)12])) - (((/* implicit */int) (unsigned short)57990))))))));
                        }
                        var_21 = ((/* implicit */signed char) (-(13186076067155541660ULL)));
                        arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_9)), (arr_17 [i_1] [i_1] [i_1] [i_1])))))) ? (((((/* implicit */int) (unsigned short)50886)) / (((/* implicit */int) arr_16 [i_3] [i_3] [i_2] [i_1] [i_0])))) : (((/* implicit */int) var_8))));
                        arr_21 [3ULL] [(_Bool)1] [i_1] [2U] = ((/* implicit */_Bool) ((unsigned short) (~((+(var_12))))));
                        var_22 = ((/* implicit */long long int) (~(min((((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), ((~(((/* implicit */int) var_8))))))));
                    }
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-25505)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_3) : ((-((+(2198353163U)))))));
    var_24 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) var_8))))), (min((((/* implicit */unsigned int) var_4)), (var_11))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
