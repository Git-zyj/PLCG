/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185355
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
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 |= ((/* implicit */unsigned long long int) ((((long long int) ((unsigned long long int) var_1))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3865145475U))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) min((arr_1 [i_0]), (min((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0])))))));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_5))))))), (((unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_4))))));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
        {
            arr_8 [i_1 + 2] [i_2 - 1] = ((arr_2 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))));
            var_17 = ((/* implicit */_Bool) ((signed char) arr_3 [i_1]));
        }
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1] [i_4]))));
                        arr_18 [(_Bool)1] [i_5] [i_4] [i_4] [i_5 + 2] = ((/* implicit */unsigned char) var_4);
                        var_19 += ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((arr_10 [i_3] [i_5]), (((/* implicit */int) arr_9 [i_4] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), ((((+(var_10))) >> (((((/* implicit */int) arr_16 [i_4])) - (31394)))))));
                        var_20 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_5]))) & (var_4)))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_3]))) == (arr_6 [i_4] [i_5 - 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5] [i_3])) || (((/* implicit */_Bool) arr_2 [i_3]))))) : (((/* implicit */int) ((unsigned char) arr_11 [i_1]))))) : (((/* implicit */int) var_8))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_5] [i_5])), (arr_15 [4] [(unsigned short)0] [i_4] [i_5])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [0U] [i_3])))) : (max((((/* implicit */unsigned int) arr_14 [i_5] [i_4])), (arr_17 [i_5] [i_5] [i_5 - 1]))))) : (min(((+(arr_15 [i_5 + 2] [i_4] [i_1] [i_1]))), (((/* implicit */unsigned int) ((unsigned short) 842018011U)))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) < (((/* implicit */int) arr_14 [i_1] [i_3 - 3])))) ? ((-(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((7049037203532162088LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))), (((/* implicit */long long int) ((_Bool) arr_13 [i_1] [i_1] [i_1] [i_1]))))))))));
            var_23 = ((/* implicit */unsigned long long int) (~(arr_6 [i_1] [(signed char)10])));
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            var_24 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [(short)7]))));
            var_25 -= ((/* implicit */_Bool) (+((+(min((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1 - 1] [i_1 + 1] [i_1])), (var_10)))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_26 |= ((/* implicit */signed char) ((unsigned int) arr_24 [i_1]));
            arr_26 [i_1] [i_7] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_2)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3865145478U)) ? (((/* implicit */unsigned int) -1593335709)) : (4014115137U))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_9))))))));
        }
    }
}
