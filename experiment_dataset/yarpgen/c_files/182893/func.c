/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182893
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 16128)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
    var_19 += ((/* implicit */long long int) (((((-((-(((/* implicit */int) var_10)))))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) max(((short)32767), ((short)224))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) min(((short)-32755), (((/* implicit */short) (signed char)-11)))))))) : ((+(min((12270965031750055714ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
        var_21 = ((/* implicit */int) arr_0 [i_0]);
        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)64))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-19091)) ? (((((/* implicit */_Bool) (short)-2427)) ? (((/* implicit */unsigned long long int) (-(arr_0 [i_1])))) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)64098)), (arr_5 [i_1]))))));
        var_24 *= ((/* implicit */unsigned int) min((((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (8054636596965994556ULL)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (1610612736)))))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_9 [(_Bool)1] [i_2] |= min((((/* implicit */int) max((((((/* implicit */_Bool) var_15)) || ((_Bool)1))), ((!((_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)224))))) ? ((~(((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) arr_2 [i_2])))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) 1152921504606715904ULL))));
        var_26 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (min((((/* implicit */long long int) arr_4 [i_2] [i_2])), (arr_0 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_27 *= ((/* implicit */short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-16)), (var_13)))) ? (((unsigned long long int) (signed char)15)) : (((/* implicit */unsigned long long int) ((int) arr_10 [i_3])))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 18; i_5 += 1) 
            {
                for (unsigned char i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (_Bool)0))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((unsigned int) (_Bool)1)))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (402653184ULL)))) ? (((/* implicit */int) ((short) 489064791))) : ((+(var_9)))))))))));
                    }
                } 
            } 
        } 
    }
}
