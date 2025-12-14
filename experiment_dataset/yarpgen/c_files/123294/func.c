/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123294
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) -1LL));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (arr_5 [i_1 - 1]) : (((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_14 [(short)8] [i_1] [i_1] [(short)9] = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [(unsigned char)2] [i_2])) ? (((/* implicit */long long int) var_9)) : (var_5))) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    arr_15 [(unsigned char)5] [i_2] [i_1] = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    var_14 = (-(var_1));
                    arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-8581)) && (((/* implicit */_Bool) (unsigned short)65535)))))))) * (min((536316004U), (((/* implicit */unsigned int) (signed char)85))))));
                    var_15 *= ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (var_8)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) arr_24 [i_6] [(short)10]);
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) var_10);
    }
    var_17 = ((/* implicit */int) ((unsigned short) var_10));
    var_18 += ((/* implicit */short) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) (((~(((/* implicit */int) var_10)))) - ((~(((/* implicit */int) var_7)))))))));
}
