/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152904
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_18)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)10]))) : (arr_0 [7ULL] [(unsigned char)2])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 4; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_1 + 1])) + (34))) - (12))))))));
                        arr_11 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_10))))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [5LL] [i_0] [i_3 + 3]))))) ? (var_0) : (var_19))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]);
                            var_23 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) var_19))))))));
                            arr_17 [i_0] = ((((/* implicit */_Bool) (unsigned short)6765)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned short)48756)));
                            arr_18 [i_0] [i_0] [i_1 + 1] [(unsigned short)5] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) (!((!(((/* implicit */_Bool) arr_0 [i_1] [7LL])))))));
                            var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_3 - 3])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_3 - 3]))))));
                        }
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(var_16)));
                            arr_22 [i_0] [i_0] [(unsigned char)2] [16LL] [i_5] = ((/* implicit */int) (!((_Bool)1)));
                            arr_23 [i_5] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2 + 4] [i_0] [i_3 + 2])))))));
                            arr_24 [i_3] [i_0] [i_3] [i_3] [(unsigned char)16] [i_1] [i_0] |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_2 [i_2 + 1]))))));
                            arr_25 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-49)), (((((/* implicit */_Bool) 3431127146U)) ? (((/* implicit */int) (unsigned short)32768)) : (2147483645)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_16 [i_0] [i_1 + 1] [i_2 + 1] [i_3 - 1] [(_Bool)1] [i_5]))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((var_16) ? (arr_14 [i_0]) : (((/* implicit */int) var_7))))) : (min((((/* implicit */long long int) (unsigned char)215)), (arr_6 [(unsigned char)9] [i_2] [i_0] [i_3])))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_4))))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [(_Bool)1] [i_6]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_17)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_6] [(unsigned char)2])))))))));
        var_27 = ((/* implicit */unsigned short) var_13);
        var_28 = ((/* implicit */short) (-((+(((/* implicit */int) arr_5 [i_6] [i_6]))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        arr_32 [(unsigned char)10] = ((/* implicit */unsigned int) 1408253026322909266LL);
        var_29 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) var_16)))));
        arr_33 [i_7] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_9))))));
        var_30 = ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_7])) % (max((((/* implicit */int) (signed char)49)), (-2147483646))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)58276)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (signed char)-44))))))));
        arr_34 [i_7] [i_7] = ((/* implicit */long long int) var_18);
    }
    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
}
