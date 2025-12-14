/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182692
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1480624352U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) (unsigned short)31606)))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) (+(((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */long long int) (~(arr_1 [i_0]))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31606)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_16))))) : (((long long int) 1408275942))))) && (((/* implicit */_Bool) ((arr_1 [(unsigned char)4]) - (arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) max((1379846338172906107ULL), (((/* implicit */unsigned long long int) 288230376151646208LL))));
        var_24 = ((/* implicit */unsigned short) var_7);
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_25 = ((/* implicit */int) ((((17066897735536645524ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_2]), (((/* implicit */int) arr_0 [i_2]))))) : ((-(1379846338172906092ULL)))));
        var_26 = (+(((((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */long long int) arr_2 [(unsigned char)14]))))) ? (4225566493U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        var_27 = ((/* implicit */unsigned int) arr_0 [i_2]);
        var_28 = ((/* implicit */short) ((unsigned int) var_17));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((var_16) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)36765))))) : (((((/* implicit */_Bool) arr_10 [(_Bool)0])) ? (1379846338172906103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))))))));
        var_30 = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) + (arr_3 [(unsigned char)8] [i_3]));
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) && (((/* implicit */_Bool) 1379846338172906091ULL)))))));
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned short) 17066897735536645484ULL);
            var_32 = ((/* implicit */short) (((+(((/* implicit */int) var_19)))) ^ (((/* implicit */int) (short)96))));
            var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_11 [10])) : (((/* implicit */int) arr_8 [i_4])))) <= (((/* implicit */int) arr_10 [i_3]))));
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_5])))))));
                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                var_36 ^= ((((/* implicit */_Bool) (unsigned short)31606)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_17 [i_5])));
            }
            arr_19 [i_3] = ((/* implicit */long long int) arr_0 [i_3]);
            var_37 = ((/* implicit */unsigned char) (-((((_Bool)1) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
            arr_20 [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [(unsigned char)11] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) : (arr_9 [i_5])));
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_1 [i_3]) : (((/* implicit */int) (short)23380)))))));
            var_39 = ((/* implicit */unsigned long long int) (-(-1)));
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            var_40 += ((/* implicit */signed char) ((short) arr_24 [i_8]));
            var_41 = (~((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33921))) : (arr_9 [i_3]))));
            var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_24 [i_3]))));
            var_43 = ((/* implicit */int) arr_15 [i_3] [i_8]);
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_8])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_3] [i_3]))) - (131071LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)30977)))));
        }
    }
    for (short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] [i_9] = ((/* implicit */signed char) ((unsigned int) var_8));
        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(arr_21 [i_9] [i_9])))) ? (((/* implicit */int) var_7)) : (min((788881201), (((/* implicit */int) (unsigned char)9))))))))));
    }
}
