/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169773
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
    var_20 = ((/* implicit */int) min((var_14), (((/* implicit */long long int) (unsigned char)11))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_19)), (var_10)))))) || (var_3)));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_15))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) min(((+(arr_1 [(_Bool)0]))), (((/* implicit */unsigned long long int) arr_0 [4]))))) ? (((/* implicit */unsigned long long int) var_6)) : (min((arr_1 [6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned char)12])))))))))));
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)19640))));
        arr_6 [13ULL] = ((/* implicit */short) arr_0 [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 7; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2 + 2]))));
        arr_11 [i_2] = ((/* implicit */_Bool) arr_3 [i_2]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5971876124276483922ULL)) ? ((+(1623344851620566123ULL))) : ((-(arr_20 [i_5] [i_4] [i_4 + 2] [i_5])))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_4 - 1] [i_5 - 1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3])))));
            }
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                var_27 = var_15;
                arr_25 [i_3] [i_3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_6])))) ? (((unsigned long long int) var_10)) : (arr_20 [(unsigned short)10] [i_3] [i_3] [i_6])));
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 - 1] [i_4 + 1]))) : ((-(arr_24 [i_3] [i_3] [i_6] [i_6]))))))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 1])))))));
            }
            var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_3] [i_4 - 1] [i_4 + 2] [i_4 - 1]))));
            var_31 = ((/* implicit */short) arr_24 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 2]);
            var_32 = ((/* implicit */short) (~(7749820942800959296ULL)));
            arr_26 [i_4] [7ULL] [i_3] = ((/* implicit */long long int) arr_17 [i_3]);
        }
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_33 = ((/* implicit */short) arr_18 [i_7] [i_3]);
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_28 [16LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33831))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_15 [i_3]))))))))));
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2713490867963272004LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3187164396U))))) : ((-(((/* implicit */int) var_18)))))))));
        }
        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            var_36 = ((/* implicit */int) max((var_36), ((-(((((/* implicit */_Bool) arr_22 [i_3] [i_8])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)0))))))));
            arr_32 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [(unsigned short)14]))));
            arr_33 [i_8] [i_8] = ((/* implicit */short) (-(var_15)));
            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)19))));
        }
        arr_34 [i_3] = ((/* implicit */unsigned char) arr_28 [i_3]);
    }
    var_38 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)33833)), (457084825)));
}
