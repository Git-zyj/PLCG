/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15621
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_11)))))))));
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 889706712)) ? (arr_5 [i_0] [i_0] [i_3]) : (arr_5 [i_0] [i_1] [i_2]))))));
                        arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0]))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
                    }
                } 
            } 
            arr_13 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_0] [i_1] [i_1])))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (unsigned char)189);
                        arr_20 [i_4] [17LL] [i_4] [i_5 + 1] [i_1] = ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_4] [i_5 + 1]))) ^ (var_1))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_16))));
                        var_23 -= ((/* implicit */long long int) 610549970);
                    }
                } 
            } 
            arr_21 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_1);
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_19 [i_6] [i_6] [i_6] [i_0]))));
            var_25 = ((/* implicit */unsigned int) var_2);
            var_26 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_6]);
            var_27 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (var_8) : (((/* implicit */unsigned int) -418356360))))))), (((unsigned long long int) ((((/* implicit */_Bool) -418356352)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7))))));
        }
    }
    var_28 = var_0;
    var_29 = ((/* implicit */unsigned char) var_15);
    var_30 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned int) max((418356335), (((/* implicit */int) var_4)))))));
}
