/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179887
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) 4ULL))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : ((-(arr_0 [i_0]))))) + (((((/* implicit */_Bool) 0LL)) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) 937171967U)))) : (((/* implicit */unsigned long long int) 3357795328U))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])) - (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
            var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2 + 1]))));
            var_20 *= ((/* implicit */int) ((signed char) var_7));
            arr_10 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) arr_7 [i_2 + 1])) < (arr_4 [i_2]))));
            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
        }
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_7 [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_16 [i_1] [i_4] = (+(arr_14 [i_4] [i_4 - 2] [i_4]));
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (-(arr_7 [i_4 + 1]))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)5460)) ? (arr_15 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5460))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_6 [i_1])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((max((arr_9 [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5] [i_5]))) ? (((((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_9 [i_5] [i_5] [i_5])))) : (((arr_9 [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5]))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12631)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))), (arr_15 [i_6]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_11 [i_7 + 1] [i_6]), (((/* implicit */int) arr_1 [i_5]))))))))));
                        arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) arr_0 [i_6]);
                    }
                } 
            } 
        } 
        var_26 = ((unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5]))))));
        arr_31 [i_5] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)189))))), (937171967U))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [(_Bool)1])))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5])) : (arr_13 [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5]))))))))));
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) (+(arr_0 [i_5]))))), (((((unsigned int) arr_25 [i_5] [i_5] [i_5] [(_Bool)1])) + (2991885813U)))));
    }
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)5472)) * (((/* implicit */int) var_8)))), (((/* implicit */int) var_13)))))));
}
