/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125847
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
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    var_19 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : ((~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_5)))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */int) max(((signed char)124), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_3] [i_0] [i_3])) >= (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_2)))) : (((/* implicit */int) var_3)))))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_18 [i_6] [i_0] [i_4] [i_3] [i_0] = ((/* implicit */signed char) (+(max((((unsigned long long int) (unsigned short)32)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_4])))))))));
                            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((signed char) arr_2 [i_0] [i_8])))) ? ((+(arr_8 [i_7] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_7 - 3] [i_0] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))) : (var_14)));
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) max((((short) min((((/* implicit */unsigned short) (signed char)94)), (arr_27 [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20701)) || (((/* implicit */_Bool) (signed char)15)))))));
                    var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44856)) || (((/* implicit */_Bool) (unsigned short)44835))))), (min((var_12), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_8] [i_7 - 3] [i_10]))))));
                }
                for (signed char i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_11] [i_8] [i_0])))) < ((+(((/* implicit */int) arr_15 [i_0] [i_7] [i_0])))))))));
                    var_28 = ((/* implicit */unsigned short) var_12);
                }
                var_29 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [i_7 - 3] [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_5 [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 1])) : (((/* implicit */int) arr_24 [i_7 - 1] [i_0] [i_7] [i_7 - 1])))), (((/* implicit */int) arr_10 [i_0] [i_0]))));
                var_30 -= arr_12 [i_0] [i_8];
            }
            arr_31 [i_0] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */int) min((arr_11 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1]), (var_5)))) >> (((((/* implicit */int) arr_23 [i_0])) + (108)))));
        }
        for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_31 *= ((/* implicit */signed char) max((((/* implicit */int) min((arr_27 [i_0] [i_0] [i_0] [i_12]), (((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_12]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_12] [i_0] [i_0] [i_12]))))));
            var_32 *= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)108)))));
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_12] [i_12] [i_0] [i_12])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_12] [i_12]))));
        }
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (var_9)))))))))))));
    }
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        for (signed char i_14 = 1; i_14 < 9; i_14 += 2) 
        {
            {
                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_29 [i_14 - 1] [(signed char)2] [i_14 + 1] [i_14] [i_14 + 1]), (arr_21 [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 2]))))));
                /* LoopNest 3 */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
                        {
                            {
                                arr_48 [i_13] [i_14 + 2] [i_15] [i_16] [i_16] [i_16] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_15] [i_14 + 1])) >> (((((/* implicit */int) arr_36 [i_14 + 1] [i_14 + 1])) - (23992))))) << (((/* implicit */int) ((((/* implicit */int) arr_46 [i_14] [i_16])) == (((/* implicit */int) var_9)))))));
                                var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)56))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_36 -= ((/* implicit */signed char) var_12);
    var_37 = ((/* implicit */short) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (signed char)36))));
}
