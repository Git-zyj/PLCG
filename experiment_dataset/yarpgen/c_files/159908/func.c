/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159908
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
    var_15 *= ((/* implicit */_Bool) ((unsigned int) var_9));
    var_16 = ((/* implicit */unsigned long long int) ((_Bool) var_7));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((min((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 3]) ^ (arr_2 [i_0 - 2]))))));
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_10))))))))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0] [14LL]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18))))))))), (max((((/* implicit */unsigned long long int) ((short) var_9))), (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) var_13))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (((_Bool)0) ? (7518637571819552300ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30210))))))) + (((/* implicit */int) var_10))));
        var_19 = ((/* implicit */unsigned char) ((_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) & (arr_5 [i_1 + 1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) var_10));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_10 [i_2] [i_2]) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))))));
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2] [i_2])) < (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_22 = (!(((/* implicit */_Bool) var_14)));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((signed char) arr_11 [i_5] [i_5]));
                        var_24 -= ((/* implicit */unsigned int) ((_Bool) 3558294446U));
                        arr_23 [i_2] [i_2] [i_3] [i_4] [(unsigned char)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_10))))) : (((unsigned int) arr_3 [i_3]))));
                        arr_24 [i_2] [i_3] [i_4] [(unsigned char)5] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_4] [i_5])))) && (((/* implicit */_Bool) arr_5 [i_2] [i_2]))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) < (var_11)));
                    }
                } 
            } 
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29527))) / (16140993431901474070ULL)));
        var_27 = ((/* implicit */short) (!(((max((arr_26 [i_6]), (arr_26 [i_6]))) != (((/* implicit */int) ((signed char) (signed char)-20)))))));
    }
    var_28 = ((/* implicit */int) var_4);
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((var_1), (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_12), (((/* implicit */unsigned short) var_2))))))) : (((((/* implicit */_Bool) var_4)) ? (((var_11) << (((var_11) - (11310975913113136898ULL))))) : (((/* implicit */unsigned long long int) var_13))))));
}
