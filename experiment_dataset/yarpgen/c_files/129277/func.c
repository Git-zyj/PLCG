/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129277
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) var_7))))) == (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_11))))) ? (min((((((/* implicit */int) var_6)) | (var_9))), ((~(((/* implicit */int) (unsigned short)57163)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned short)8391)) : ((-(((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_5)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((var_16) * ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])))))) * (((((/* implicit */_Bool) (((_Bool)1) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [1ULL] [i_3])))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) : (((((((/* implicit */int) (short)-3318)) + (2147483647))) << (((((/* implicit */int) (unsigned short)57155)) - (57155)))))))));
                        arr_10 [i_0] [(signed char)12] [i_3] [(signed char)12] [i_3] [(signed char)12] = ((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1]);
                        var_22 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2] [i_3]);
                        var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)3342)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57178)))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = max((((/* implicit */int) ((3178637748978292792LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8374)))))), ((((_Bool)1) ? (((/* implicit */int) (short)-3317)) : (((/* implicit */int) (signed char)-88)))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_17 [i_4] [(unsigned char)11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned char)63))))))));
                    arr_18 [i_0] [i_4] [i_5] = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5]);
                    arr_19 [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) arr_6 [i_5]);
                }
            } 
        } 
        arr_20 [(signed char)7] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)11)), ((unsigned short)52431))))));
    }
    var_24 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */int) var_2))));
}
