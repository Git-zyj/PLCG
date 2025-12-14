/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142620
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                {
                    var_13 |= ((/* implicit */int) (~((~((~(var_0)))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_2] [i_3]) % ((~(var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_3 - 1]) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_4)))))))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_5 [i_2] [i_1])) : (arr_9 [i_1] [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_15 [(unsigned short)4] [8] [(unsigned short)4] [(unsigned short)4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) % ((+(max((4294967295U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))));
                                arr_16 [i_1] [i_1] [i_3] [(short)3] [i_5] [i_5] = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) arr_4 [7LL]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (short i_7 = 3; i_7 < 6; i_7 += 3) 
                        {
                            {
                                arr_22 [i_1] [i_2] [(unsigned short)2] [i_1] [i_1] = (+((+(((((/* implicit */_Bool) var_9)) ? (var_9) : (var_9))))));
                                arr_23 [(unsigned short)6] [i_2] [i_1] [i_2] [i_1 - 1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_14 [i_3 + 2] [i_7 + 4]))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_21 [i_3 - 2] [i_3 + 2])) ? (((/* implicit */unsigned int) var_2)) : (arr_21 [i_3 + 2] [i_3]))) : (((((/* implicit */_Bool) arr_21 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_21 [i_3 + 2] [i_3])))));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) : (var_9)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_8)))))))) ? (((/* implicit */int) min((min(((short)-32766), (var_11))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [8] [8])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_4) % (((/* implicit */long long int) var_0)))))) != (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
