/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102102
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
    var_13 += ((/* implicit */long long int) (signed char)0);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_4)), (var_10)))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) var_9)) / (3312956543U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) - (((/* implicit */int) var_8)))))))))));
    var_15 -= ((/* implicit */short) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((((arr_0 [i_0]) / (((/* implicit */int) var_0)))), (max((((((/* implicit */_Bool) arr_0 [19])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned short)65535))))))));
        var_17 *= ((/* implicit */signed char) var_5);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (var_9) : (arr_0 [i_0]))), (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [(short)18] [(short)18] [i_0]))))))))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned int) ((max((((/* implicit */int) var_12)), (arr_0 [i_2]))) / (((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_0)), (arr_0 [8U]))) >= (((/* implicit */int) var_1))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((+(max((arr_9 [i_3]), (((/* implicit */long long int) arr_3 [i_3] [16LL] [i_3]))))))));
        var_21 = ((/* implicit */short) max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((var_10) ^ (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_3])))))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_14 [(unsigned char)18] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (-(8763725U)))))), ((!(arr_3 [i_4] [i_4] [i_4])))));
        var_22 = ((int) ((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4))))) == (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) != (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))))));
        var_23 = ((/* implicit */int) max((var_23), (((((_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))) : (((/* implicit */int) max((arr_4 [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4]))))))));
    }
}
