/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105084
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
    var_10 = ((/* implicit */unsigned char) var_4);
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min(((+((-(511431953462937670ULL))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) + (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (_Bool)0))))))))))));
    var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */int) (unsigned short)3118)) % (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((unsigned char) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned char) (short)19806))) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_14 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0 - 2])), (var_8)))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_3))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [20U])), (var_1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2849244725U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26020)) && (((/* implicit */_Bool) (unsigned char)15))))), (var_9)))));
        var_15 = ((/* implicit */unsigned int) ((unsigned short) arr_0 [(unsigned short)4]));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) arr_4 [i_1]);
        arr_6 [i_1] = var_4;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) arr_3 [i_1] [i_2]))))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (var_0)))));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_2] [i_2]))));
        }
        var_17 = ((/* implicit */unsigned short) arr_0 [i_1]);
        /* LoopSeq 2 */
        for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) ((short) (short)23502))) ? (((/* implicit */int) arr_3 [i_1] [i_3 + 1])) : (max((arr_12 [9LL]), (((/* implicit */int) arr_3 [i_1] [i_3])))))) : (((/* implicit */int) ((unsigned char) ((short) var_9))))));
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) var_6);
            arr_14 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-1)) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [(unsigned short)1] [i_1])))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_18 [i_1] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((int) (_Bool)0))))) ? (((arr_12 [i_1]) - (((/* implicit */int) ((short) var_0))))) : (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_15 [(unsigned short)7] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1])) : (((/* implicit */int) var_3))))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1]))))))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */long long int) max((min((((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [(signed char)16])) || (((/* implicit */_Bool) var_1))))), (arr_3 [i_5] [i_5]))), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_3 [(short)8] [i_5]), (((/* implicit */short) (unsigned char)229))))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= ((-((+(arr_11 [i_5] [i_5] [i_5]))))))))));
    }
}
