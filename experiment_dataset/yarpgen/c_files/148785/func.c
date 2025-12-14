/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148785
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) (short)1536))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) (short)-28811))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(arr_5 [i_0] [(signed char)20]))) : (((/* implicit */unsigned long long int) 3452918281U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5271697991448020929LL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0] [i_0])), ((~(((/* implicit */int) (short)17114))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [1LL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [(unsigned char)3] [i_1] [i_2])) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [i_0]))))) : (((var_15) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)512)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_4 + 1] [i_5] [i_0] = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((unsigned long long int) arr_16 [i_4 - 1] [i_0] [i_4 + 2] [i_0]))));
                        var_18 = ((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4 + 1] [i_4 - 2]);
                        var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_1)) - ((+(((/* implicit */int) var_2)))))));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_4] [i_5] [i_0])) ? (((int) var_10)) : (((((/* implicit */int) arr_10 [i_5])) & (((/* implicit */int) var_1))))))), (min((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) var_7)))))))));
                        arr_18 [i_0] [(short)7] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((5194727707437229136ULL) / (((/* implicit */unsigned long long int) 246307639))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((-(-918932650))) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) ((int) var_15))) ? (((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) -918932650))))));
}
