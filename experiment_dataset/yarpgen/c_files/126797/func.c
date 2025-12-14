/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126797
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0]);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_20 |= arr_0 [(unsigned char)3];
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (arr_1 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) | (var_19))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), ((-(((unsigned long long int) arr_11 [i_0 + 1] [i_1 + 1]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2]))));
                        arr_15 [i_0 + 1] [i_0 + 1] [i_0] [i_2] [12U] = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1 + 1])), (arr_4 [i_1 + 1] [i_0 + 2] [i_0])))), (arr_2 [i_0])));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) var_10)))))))));
                        arr_19 [i_0 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)104))))) || (((/* implicit */_Bool) 274877906936ULL))));
                        var_25 |= ((/* implicit */unsigned short) (signed char)-10);
                    }
                    var_26 |= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                }
                var_27 = ((/* implicit */_Bool) 2350139331U);
                arr_20 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */short) arr_17 [6U] [i_1] [2LL] [i_1]);
            }
        } 
    } 
    var_28 ^= ((/* implicit */unsigned short) min(((+(var_14))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
}
