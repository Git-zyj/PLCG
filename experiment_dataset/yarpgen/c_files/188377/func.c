/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188377
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
    var_18 *= ((/* implicit */signed char) max(((unsigned char)113), (var_9)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = min((((((((/* implicit */int) (unsigned short)29139)) <= (((/* implicit */int) arr_5 [i_0])))) ? (((int) arr_7 [i_1])) : (((/* implicit */int) max(((short)14311), (arr_5 [i_0])))))), (((((/* implicit */int) max((var_5), (var_5)))) / (((/* implicit */int) max(((unsigned short)50946), (((/* implicit */unsigned short) (short)17523))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (((-(arr_11 [i_0] [i_0]))) <= (arr_11 [i_3] [i_1]))))));
                        arr_13 [(signed char)20] [i_1] [i_2] = ((/* implicit */short) ((_Bool) arr_11 [i_0] [(unsigned short)13]));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-112)) && (((/* implicit */_Bool) (unsigned short)7963))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))) + (min((((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(_Bool)1] [i_3] [(unsigned short)18] [14LL] [(_Bool)1] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)59891)))))))));
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_16)) : (arr_11 [i_2] [i_1])))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0])) + (29936))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((unsigned short) var_0))) + (((/* implicit */int) (short)17461))))));
        var_23 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_3 [i_0])))));
    }
}
