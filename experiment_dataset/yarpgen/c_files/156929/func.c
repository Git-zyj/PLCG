/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156929
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
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_5))) : (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))))));
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_18)) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (var_11)))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned short) var_12)))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))), (var_12)));
        var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? ((~(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned int) (unsigned char)219))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_25 ^= ((/* implicit */signed char) ((int) min((var_8), (((/* implicit */long long int) (short)6662)))));
            var_26 = ((/* implicit */unsigned char) var_6);
            arr_7 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (((-(var_12))) != (((/* implicit */unsigned long long int) ((-2051611889) / (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
            var_27 -= ((/* implicit */unsigned short) var_4);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_3])) > (((/* implicit */int) arr_2 [i_1] [i_1])))))))) ? (max((((/* implicit */unsigned long long int) 242171102U)), (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_3]))) : (var_9))))))));
                var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) var_6))), ((+(((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                var_29 = ((/* implicit */unsigned int) var_11);
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) (short)-6662);
                        arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) var_7)) ? (418601575) : (((/* implicit */int) (short)4614)))) : (((/* implicit */int) (unsigned char)107)))), (((/* implicit */int) ((min((((/* implicit */long long int) arr_16 [i_1] [1] [i_4] [5])), (arr_14 [7LL] [i_2] [i_2]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) var_10))))))))));
                        arr_20 [i_1] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_17)), (max((var_12), (((/* implicit */unsigned long long int) var_3)))))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [(signed char)3] [5] [i_1] [i_5])))))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_23 [i_1] [i_1] [i_3 - 1] [i_4] [i_6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_3 - 2] [i_1] [i_6])) : (var_12))))), (((/* implicit */unsigned long long int) max((((unsigned int) (unsigned char)148)), (((/* implicit */unsigned int) var_4)))))));
                        var_31 = ((/* implicit */signed char) ((unsigned char) ((signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_4] [i_1] [(unsigned char)5])) ? (arr_4 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_3 - 1] [i_1])) ? (((/* implicit */int) arr_6 [9U] [i_3 - 2] [i_1])) : (((/* implicit */int) arr_6 [i_3] [i_3 - 2] [i_1]))))) ? (((/* implicit */int) max((arr_6 [i_2] [i_3 - 2] [i_1]), (arr_6 [(_Bool)1] [i_3 - 1] [i_1])))) : (((/* implicit */int) arr_6 [i_3] [i_3 - 2] [i_1])));
                        arr_27 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) arr_9 [i_1] [i_4])) : (((int) ((var_0) ? (var_11) : (((/* implicit */int) var_0)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_32 [(_Bool)1] [i_2] [i_3] [i_1] [i_8] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (0LL))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28737))) ^ (2351863733284141184LL)))));
                        var_33 = ((/* implicit */long long int) arr_26 [i_1]);
                    }
                    arr_33 [(unsigned char)6] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) var_4);
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    var_34 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41449)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (short)-32746)))))));
                    arr_36 [i_1] [i_9] [i_9] = ((/* implicit */int) var_16);
                    arr_37 [i_9] [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51340))))) ? (((/* implicit */int) max((arr_21 [i_1] [i_9]), (((/* implicit */short) (signed char)-33))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (short)-32750)))))), (((/* implicit */int) max(((unsigned short)44942), (((/* implicit */unsigned short) ((signed char) arr_6 [4] [3] [i_1])))))));
                    var_35 = ((/* implicit */unsigned char) var_8);
                }
            }
        }
    }
    for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        var_36 = ((/* implicit */short) (!((!((!(var_0)))))));
        var_37 *= ((/* implicit */short) max(((+(((((/* implicit */int) (signed char)37)) & (((/* implicit */int) arr_39 [(signed char)16] [(signed char)16])))))), (((/* implicit */int) (!(((/* implicit */_Bool) 30)))))));
    }
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        arr_53 [i_11] [i_14] = ((/* implicit */short) var_9);
                        arr_54 [i_11] [i_12] [i_11] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2351863733284141184LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4625))) : (4294967295U)))) ? (((/* implicit */int) max((arr_52 [i_14 + 1]), (((/* implicit */unsigned short) (short)4614))))) : (((/* implicit */int) (((+(var_9))) == (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_11] [i_11] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) (short)-30295)) ? (((/* implicit */unsigned int) arr_50 [i_11] [i_11] [(unsigned char)9] [i_11])) : (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_11] [(signed char)10]))) > (arr_38 [i_11] [i_11])))))))));
        var_39 &= ((/* implicit */signed char) arr_46 [i_11] [i_11] [i_11]);
        var_40 *= ((/* implicit */unsigned long long int) ((min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) arr_48 [i_11] [i_11])) : (((/* implicit */int) (short)4614))))))) <= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11]))))), (((/* implicit */unsigned int) ((int) (signed char)34))))))));
    }
    var_41 = ((/* implicit */int) var_13);
}
