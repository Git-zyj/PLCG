/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114604
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max(((unsigned char)76), ((unsigned char)80))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (min((max(((unsigned char)76), ((unsigned char)102))), ((unsigned char)156)))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((unsigned char)128), ((unsigned char)171)))), ((+(var_8)))));
        arr_2 [i_0 + 3] = ((/* implicit */unsigned long long int) var_13);
    }
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63410))))))))));
        arr_6 [i_1] = (unsigned char)77;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(-5291414612870644267LL))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5286676656508200821LL)) ? (4198103847335790233LL) : (-5286676656508200810LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 14780707396603062170ULL))))) : (((/* implicit */int) arr_4 [i_1]))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_4))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 2) 
            {
                var_27 = ((((/* implicit */_Bool) 5286676656508200809LL)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))));
                arr_15 [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) -1535915077988448059LL);
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_2] [i_5 + 1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_18))))) >= ((-(5286676656508200817LL)))));
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)237))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 3 */
        for (unsigned char i_8 = 4; i_8 < 12; i_8 += 1) 
        {
            arr_24 [i_1] [i_8 + 1] = -8377060662568203690LL;
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)223)), (arr_3 [i_1 - 3]))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_1] [i_1 + 1] [i_8] [i_8 - 1])))))))) ? (((((/* implicit */_Bool) 7406217854139409225LL)) ? ((-(7406217854139409225LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 2]))))) : (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)11)) ? (min((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) (signed char)-1))))), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)65534)))))));
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 4) 
                    {
                        {
                            arr_34 [i_1 - 3] [i_8] [i_10] [i_10] [i_11] [i_8] [i_8 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (var_16)))) ? ((+(6172212753291372102ULL))) : (((/* implicit */unsigned long long int) -5286676656508200825LL))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((-5286676656508200806LL) + (9223372036854775807LL))) << (((arr_32 [i_11 + 4] [i_8] [i_8 + 3] [i_10] [i_9 - 1]) - (13327740466949661969ULL)))))) ? (-4288023472573940257LL) : (max(((-(-5286676656508200821LL))), (((/* implicit */long long int) var_19)))))))));
                            arr_35 [i_1] [i_9] [i_10] [i_11 - 1] = ((/* implicit */long long int) arr_3 [i_1]);
                            arr_36 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)129))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            arr_39 [i_1] [i_12] [i_12] = ((/* implicit */unsigned long long int) 3222958389220586496LL);
            arr_40 [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)512))) != (5286676656508200817LL)));
            var_31 = ((/* implicit */long long int) min((var_31), ((((((_Bool)1) ? (4288023472573940286LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24484))))) << (((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)219)) : (1923701317))) - (218)))))));
            var_32 = ((/* implicit */unsigned char) -5011377618303084785LL);
        }
        for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            var_33 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((arr_32 [i_1 - 1] [i_1 - 1] [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) (short)488))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (signed char)-113))))));
            arr_43 [i_13] = ((/* implicit */_Bool) (unsigned short)18528);
            /* LoopNest 3 */
            for (unsigned short i_14 = 3; i_14 < 14; i_14 += 2) 
            {
                for (signed char i_15 = 1; i_15 < 11; i_15 += 2) 
                {
                    for (unsigned short i_16 = 1; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_34 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned short)57891)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18871)) || (((/* implicit */_Bool) var_13)))))))));
                            arr_53 [i_1 + 1] [i_1] &= ((/* implicit */short) (!(((/* implicit */_Bool) var_19))));
                            arr_54 [i_1] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */long long int) (signed char)-113);
                            var_35 = var_8;
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                var_36 = ((/* implicit */long long int) var_15);
                var_37 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_38 [i_1] [i_1 - 3]))))) ? ((+(4288023472573940286LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6165112495297488937LL)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) (unsigned char)241)))))));
            }
        }
    }
}
