/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174178
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
    var_14 = ((/* implicit */unsigned char) (!((!(((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    var_15 = ((/* implicit */short) -1064639798371567331LL);
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_16 = ((var_6) ? ((+(((/* implicit */int) ((_Bool) (unsigned char)16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)49))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned int) 974474327320172628LL)))));
        var_18 *= ((((((/* implicit */_Bool) 3928874328U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) -1064639798371567331LL)) ? (3928874328U) : (3928874312U))))) | (3928874331U));
        var_19 = arr_1 [i_0];
    }
    for (short i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 1300239350U)) : (arr_0 [i_1]))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2884211879U) : (366092967U)))) ? (((/* implicit */unsigned long long int) min((arr_5 [i_1] [(signed char)3]), (3928874329U)))) : (var_3))) - (2975075112ULL)))));
        var_21 = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) > (-2394847528381185213LL))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) (signed char)32))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (short)-8446);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((signed char) (signed char)14)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 4; i_3 < 12; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), ((short)8433)))), (((long long int) var_1))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [8])) ? (min((var_7), (((/* implicit */unsigned long long int) (signed char)-16)))) : (((unsigned long long int) arr_0 [i_3])))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)104)), (arr_4 [i_1] [(signed char)4])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)8] [i_3] [i_4]))) / (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [10U]))))))))))));
                        var_24 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_6))))), (((unsigned long long int) -7704721343024554497LL))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) var_0);
        var_25 = ((/* implicit */unsigned long long int) arr_16 [i_5] [i_5]);
        var_26 += ((/* implicit */short) ((unsigned char) (+(((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (var_5) : (((/* implicit */long long int) arr_15 [i_5] [i_5])))))));
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (3928874328U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
        var_28 *= ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) arr_18 [i_6])) ^ (((/* implicit */int) arr_19 [(unsigned char)0] [i_6])))))));
        arr_21 [i_6] = ((/* implicit */int) max((((((/* implicit */_Bool) var_13)) ? (366092967U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)38020)))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(2302722248009414939LL))))));
    }
}
