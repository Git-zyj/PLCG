/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145550
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((var_14), (((/* implicit */int) var_8))))), (((unsigned int) min((((/* implicit */long long int) 877093683)), (4727743532808592528LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) var_1);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) var_3)), (arr_0 [i_0] [i_0])))) ^ ((~(((/* implicit */int) arr_0 [i_1] [i_1]))))))))))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) || ((!(((/* implicit */_Bool) arr_1 [i_1]))))))), (((unsigned long long int) arr_3 [i_2 + 1] [i_1]))));
                    var_20 = ((/* implicit */signed char) ((unsigned char) arr_3 [i_2 + 1] [(unsigned char)7]));
                    var_21 = ((/* implicit */unsigned char) var_9);
                }
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */int) (signed char)-32)) / (-1108930614)))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 1556110260082454857ULL))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3 + 1] [i_0] [i_3 - 1]))));
                                var_24 = ((/* implicit */signed char) ((2301882087687515420ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32)))));
                                var_25 = (~(((int) var_0)));
                                var_26 *= ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 2])) ? (arr_10 [i_3 - 1] [i_3 + 2] [i_3 - 2]) : (arr_10 [i_3] [i_3] [i_3 + 2]))), (((/* implicit */unsigned long long int) ((signed char) arr_10 [i_3] [i_3] [i_3 - 2]))))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((var_28), (var_16)));
}
