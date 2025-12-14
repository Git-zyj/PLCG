/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182605
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_7))))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_12))) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0]))))), (arr_7 [i_0] [i_0] [i_0]))));
                    arr_9 [0ULL] [i_1] [(unsigned char)2] = ((/* implicit */_Bool) -912868573);
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) (signed char)-91))))), (min((((/* implicit */long long int) arr_6 [i_1])), (var_9)))))), (((((/* implicit */_Bool) ((arr_3 [i_2] [(_Bool)1] [i_0]) / (((/* implicit */long long int) -912868573))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_1 [(unsigned short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))) : (min((6223561934463436413ULL), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
                    var_18 = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_6 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_9)))) ? (max((var_12), (((/* implicit */long long int) var_7)))) : (((((/* implicit */_Bool) (signed char)50)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2])))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) arr_4 [(unsigned char)4] [(unsigned char)4]);
        var_20 = var_11;
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) arr_5 [(_Bool)1]);
                    var_22 *= ((/* implicit */signed char) 12223182139246115203ULL);
                    var_23 -= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_14))))))));
                    arr_16 [i_4] = (!(((/* implicit */_Bool) var_8)));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) var_2);
        var_25 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5])))))) - (max((var_9), (((/* implicit */long long int) arr_18 [i_5])))))) | (((/* implicit */long long int) (+(((((/* implicit */int) arr_17 [i_5])) / (((/* implicit */int) arr_17 [i_5])))))))));
    }
    var_26 -= ((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_6))));
    var_27 |= var_4;
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_14), (var_2)))) | (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-80))) : (var_12)));
}
