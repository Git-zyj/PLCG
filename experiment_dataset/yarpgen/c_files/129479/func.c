/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129479
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
    var_15 = ((/* implicit */unsigned char) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)18))))))));
    var_16 &= ((/* implicit */signed char) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) -452998266)) | (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_12))));
        var_17 = ((/* implicit */short) 2567482118U);
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_1))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (short)30451))))) ? (((18066316781559991451ULL) | (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (_Bool)1)))))))))));
            }
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_20 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) | (var_6))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) && (((/* implicit */_Bool) var_2)))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    var_21 = ((((((/* implicit */int) (unsigned short)61905)) + (((/* implicit */int) (signed char)127)))) / (((/* implicit */int) (unsigned char)245)));
                    var_22 += ((/* implicit */unsigned long long int) var_6);
                    var_23 *= ((/* implicit */short) var_11);
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_24 = ((/* implicit */int) ((((((/* implicit */unsigned int) -1809279830)) & (0U))) - (((/* implicit */unsigned int) 1065353216))));
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)19281)) + (((/* implicit */int) (unsigned char)255))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)103)) || (((/* implicit */_Bool) (short)-31127)))))));
                    var_27 |= ((/* implicit */_Bool) var_3);
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((3270021917U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                }
                arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((-284010460972331016LL) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) == (var_3)));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 16LL)) ? (((/* implicit */int) (unsigned short)7680)) : (0)))))))));
            }
            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-5)) / (((/* implicit */int) (signed char)-126))))) * (var_0)));
        }
        var_31 *= ((/* implicit */short) var_3);
        var_32 = ((/* implicit */short) var_12);
        var_33 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31127))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))), (((unsigned short) var_0))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        arr_24 [i_7 + 1] [i_7] = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)15))))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-31148))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 1) 
    {
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((-3974697194138678446LL) == (var_3)))), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)17397)))))) && ((((_Bool)1) || ((_Bool)1)))));
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) -188849261331469637LL)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (short)-31123))))) : (((((/* implicit */int) (short)32767)) * (((/* implicit */int) (short)0))))));
    }
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        arr_29 [i_9] [i_9] = ((/* implicit */short) ((((4329621700818054006ULL) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) / (var_1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (var_3))))));
        arr_30 [i_9] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max(((short)(-32767 - 1)), ((short)-21919)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned short)0)))))) : (var_14))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)37390)))) - (((/* implicit */int) var_12))));
        var_37 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_4))));
        arr_35 [i_10] = ((/* implicit */short) ((((/* implicit */int) (short)-11115)) + (((/* implicit */int) (signed char)-95))));
    }
    var_38 = ((/* implicit */long long int) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((int) (signed char)-75)))));
}
