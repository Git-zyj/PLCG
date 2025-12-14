/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158329
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(var_0)));
        var_20 = var_17;
        arr_4 [i_0] = ((/* implicit */int) (signed char)4);
        arr_5 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-5)), (4294967295U)));
        var_21 = ((/* implicit */unsigned long long int) (~(((var_17) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_18 [i_5] = ((/* implicit */unsigned long long int) var_9);
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)5970)) : (((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_15))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? ((~(((/* implicit */int) (signed char)-6)))) : ((-(((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned int) var_0);
        }
        for (signed char i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            arr_23 [i_1] [i_6] = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_6] [i_1]);
            var_23 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)5970)))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_3)) : ((-(var_0)))))));
            arr_24 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)7))));
            var_24 = ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_1 [i_6 - 3])) ? (arr_6 [i_6 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59545)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)13342))))));
            arr_27 [i_7] = var_10;
            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_2 [i_1])))))));
            arr_28 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(0U)))) | (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))) ? (max((4067595894663676973LL), (((/* implicit */long long int) (signed char)-1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_1] [i_1])) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))) : ((+(var_11)))))));
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_9) : (var_13)))))));
        arr_29 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
        arr_30 [i_1] = ((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (long long int i_8 = 2; i_8 < 6; i_8 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]);
            var_29 = ((/* implicit */long long int) arr_34 [i_8] [i_8] [i_9]);
        }
        arr_36 [i_8] = ((/* implicit */short) var_7);
        arr_37 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_16 [i_8 + 2] [i_8] [i_8]);
        arr_38 [i_8] = ((/* implicit */unsigned long long int) var_19);
    }
    for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_18)), (((((/* implicit */_Bool) 743915096U)) ? (2040112504U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))));
        var_30 = ((/* implicit */short) var_8);
        var_31 = ((/* implicit */signed char) (-(2254854799U)));
        var_32 = ((/* implicit */signed char) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10]))) & (var_4))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)14)))))));
        var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_19)) >= (((/* implicit */int) (unsigned short)59564))))) : (((/* implicit */int) var_7))));
    var_35 = ((/* implicit */int) var_17);
    /* LoopSeq 1 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        arr_46 [i_11] = ((/* implicit */unsigned short) arr_43 [i_11] [i_11]);
        var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_11] [i_11]))));
    }
}
