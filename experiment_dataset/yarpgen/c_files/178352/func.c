/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178352
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((29308021), (-29308022))))));
        arr_2 [i_0] [2U] = arr_0 [i_0 - 1];
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0 - 1])))) / ((+(((/* implicit */int) var_0))))))) ^ (((arr_0 [i_0 - 1]) / (arr_0 [i_0 - 1])))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_2] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) ((int) (unsigned char)62));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) arr_9 [i_1 - 1] [i_1 - 1]))))) : (max((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_0 [(unsigned short)7])))))));
            var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [9]), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1])) + (var_7))))))) ? (((/* implicit */int) ((short) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) var_13))));
        }
        var_20 = ((/* implicit */unsigned char) max((var_20), (arr_1 [i_1 - 1])));
        arr_11 [(_Bool)0] = ((/* implicit */unsigned short) arr_3 [i_1]);
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_4] [i_1 - 1] [i_1 - 1])) <= (((int) 4294967295U)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            arr_24 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned long long int) ((_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 + 1]))))));
                            var_22 = ((/* implicit */short) max((((max((((/* implicit */long long int) (short)-14251)), (var_14))) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_3]))))), (var_14)));
                        }
                        var_23 = ((/* implicit */_Bool) max(((unsigned char)165), (((/* implicit */unsigned char) ((((var_9) ^ (((/* implicit */unsigned long long int) var_7)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        var_24 += ((/* implicit */unsigned char) arr_3 [i_1 - 1]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) arr_4 [i_7 - 1] [i_7 - 1]);
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) ((unsigned char) arr_33 [i_9] [i_7] [i_7])))));
                    var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_9] [i_9])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 - 1])))))) ? (((((/* implicit */_Bool) 29308021)) ? (((/* implicit */int) arr_9 [i_7 - 1] [i_9])) : (((/* implicit */int) arr_1 [i_8])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned char)91)))))))));
                }
            } 
        } 
        arr_34 [(short)13] = ((/* implicit */short) ((((/* implicit */long long int) (+(632475097)))) < (255LL)));
    }
    var_28 = ((/* implicit */long long int) (+(((var_7) | (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    var_29 = ((/* implicit */_Bool) var_1);
}
