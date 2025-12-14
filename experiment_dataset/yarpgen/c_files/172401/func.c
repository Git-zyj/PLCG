/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172401
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
    var_14 = (!((_Bool)1));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2147483648U))) : (min((805306368U), (((/* implicit */unsigned int) (_Bool)1))))))), (min(((-(-1LL))), (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (0LL)))))));
        var_16 += ((/* implicit */int) (_Bool)1);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -597139175)) ? (597139154) : (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 16776704U))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)182)), (((var_6) ? (97217156) : (((/* implicit */int) (_Bool)1))))))) ? (3LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)-31313)) / (597139182)))))))));
        arr_4 [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (-(23LL)));
                    var_21 = ((((/* implicit */int) (signed char)15)) % (((/* implicit */int) var_4)));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((min((((/* implicit */unsigned int) var_9)), (arr_10 [i_2] [i_2] [i_2] [1ULL]))), (min((((((/* implicit */_Bool) (unsigned char)23)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_9 [i_2] [(short)8]))))))))))));
                }
            } 
        } 
        var_23 |= ((/* implicit */_Bool) max(((short)26769), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) 1755422512)) : (arr_8 [i_2])))))))));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        arr_14 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_12 [i_5] [i_5]))))), (((signed char) var_5))))) ? (min((((unsigned long long int) -23LL)), (((/* implicit */unsigned long long int) 8388608U)))) : (((/* implicit */unsigned long long int) min((-23LL), (((/* implicit */long long int) arr_12 [i_5] [i_5])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) arr_12 [i_5] [i_6]);
                            var_25 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-32287)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)15)))));
                            var_26 &= ((/* implicit */signed char) arr_20 [i_8]);
                        }
                    } 
                } 
            } 
            var_27 = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
            var_28 = ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) arr_12 [i_5] [i_6])) : (((/* implicit */int) var_8)));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (signed char i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_5] [i_12 - 3] [i_12 + 1] [i_12 - 2])) : (((/* implicit */int) (signed char)(-127 - 1))));
                            arr_32 [i_12] [i_12] [i_6] [i_11] [i_5] [i_6] = ((/* implicit */short) 1525478900U);
                            arr_33 [i_5] [i_6] [i_6] [0LL] [i_5] [(unsigned char)5] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_29 [i_12] [i_12 - 3] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12])) : (((/* implicit */int) arr_31 [i_12 - 3] [i_12 - 2] [i_5] [i_12 - 1] [i_12 - 1]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_13])))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_5] [i_13] [i_13] [13])) + (((/* implicit */int) arr_25 [i_5] [i_5] [(_Bool)1] [(_Bool)1]))));
        }
        arr_36 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((short)-64), (((/* implicit */short) arr_26 [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) var_10)) : (arr_28 [i_5] [i_5] [i_5] [i_5]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)54)))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            arr_47 [i_5] = ((/* implicit */_Bool) max((min((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (var_13)))), (min(((short)32265), (((/* implicit */short) arr_30 [i_15] [i_14] [i_5] [i_16] [i_14] [i_14] [i_16])))))), (((/* implicit */short) arr_12 [i_5] [i_17]))));
                            arr_48 [i_5] [i_5] [i_15] [i_16] [i_17] [i_5] [i_16] = ((/* implicit */unsigned long long int) (!(var_6)));
                            var_32 = ((/* implicit */signed char) ((432345564227567616ULL) % (((/* implicit */unsigned long long int) -7LL))));
                            var_33 &= ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) max(((short)56), ((short)-1)))) - (46))))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1536)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) 1065353216)) : (3796086075U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)1536))))) ? (((arr_19 [16U] [16U]) ? (-1LL) : (((/* implicit */long long int) arr_37 [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
                        {
                            var_35 = ((/* implicit */int) ((signed char) 1073479680U));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_15] [i_15] [i_18] [i_16] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_15] [i_16] [i_15] [i_16] [i_16]))) : (30LL)));
                            var_37 = ((((/* implicit */_Bool) ((unsigned long long int) 2248512450721561035ULL))) ? (((int) var_12)) : (((/* implicit */int) (signed char)60)));
                            var_38 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)48));
                        }
                        var_39 += arr_13 [i_5] [i_5];
                    }
                } 
            } 
        } 
    }
    var_40 += ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_2) | (((/* implicit */long long int) var_10))))))));
    var_41 = (_Bool)1;
    var_42 = ((/* implicit */long long int) (_Bool)1);
}
