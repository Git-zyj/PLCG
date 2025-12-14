/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115708
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
    var_12 = ((/* implicit */unsigned char) var_2);
    var_13 *= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) arr_6 [i_2] [0ULL]);
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) ((arr_7 [i_0] [(unsigned short)10]) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3432387567U)) ? (-815386201) : (((/* implicit */int) arr_0 [i_2 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : ((-((+(-6716155919455540664LL)))))));
                    }
                } 
            } 
        } 
        arr_14 [5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_8 [i_0]))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) & ((-(((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_0]))))));
        arr_15 [(signed char)12] [6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */signed char) arr_10 [i_0] [(unsigned char)8] [i_0])), ((signed char)-91)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0])))), (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_10 [(unsigned char)6] [i_0] [1U]))))));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_7 [i_4] [i_4]));
        arr_19 [i_4] [(unsigned char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 0ULL)) ? (-4696525948138947485LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32746))))), (1384947870705579090LL)))) ? ((+((+(((/* implicit */int) arr_9 [6] [6] [i_4] [i_4])))))) : (((/* implicit */int) min(((unsigned char)8), (((/* implicit */unsigned char) arr_4 [i_4])))))));
        var_17 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_2 [i_4]))))));
        var_18 *= ((/* implicit */unsigned short) (_Bool)1);
    }
    var_19 = ((/* implicit */unsigned long long int) var_4);
}
