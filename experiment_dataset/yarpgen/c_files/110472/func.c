/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110472
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)14] [i_0]))) & (65520ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) ^ (((long long int) 3093817440U))));
        var_19 ^= ((/* implicit */unsigned int) ((short) ((arr_1 [i_0] [i_0]) ? (min((((/* implicit */unsigned long long int) var_7)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) var_12)))))))) ? ((+(((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))) : (((/* implicit */int) ((unsigned short) (unsigned short)61288)))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_20 &= ((/* implicit */signed char) var_11);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((long long int) var_6)))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9))))))) : (63U)));
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_13 [i_1] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_1])))));
            arr_14 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1])))))) == (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3])) < (((((/* implicit */int) var_17)) / (((/* implicit */int) arr_11 [i_3])))))))));
            var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) >> (((((/* implicit */int) arr_4 [i_3])) + (65)))))) : ((~(6236849920365323500LL)))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            var_23 = min((((var_16) & (((/* implicit */long long int) (+(((/* implicit */int) (short)26891))))))), (((/* implicit */long long int) ((signed char) arr_10 [i_4] [i_4 - 1]))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_17))))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        arr_21 [10U] = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */long long int) ((arr_17 [i_5]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))), (((long long int) -901346504)))));
        var_25 = ((/* implicit */unsigned int) arr_18 [i_5] [i_5]);
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) ((_Bool) ((int) arr_19 [i_5])));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_23 [i_6])) * (((((/* implicit */int) arr_23 [i_6])) / (((/* implicit */int) arr_20 [i_6])))))));
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 19; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_27 = (!(((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_8))), ((+(((/* implicit */int) var_11))))))));
                    arr_31 [i_6] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */int) (!(arr_27 [1] [(unsigned short)18])))) : (((/* implicit */int) var_7))))));
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) ((int) var_13));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (signed char i_10 = 2; i_10 < 21; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) var_15);
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) ((unsigned char) arr_28 [i_9]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_10 - 2])) : (arr_25 [i_10] [i_10] [i_10 - 1]))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 3; i_12 < 22; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((signed char) max((arr_35 [i_10]), (arr_35 [i_10]))));
                            var_32 = ((/* implicit */unsigned short) arr_39 [i_10]);
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            arr_47 [i_6] [i_10] [i_6] [i_11] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (arr_28 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_17 [i_13]))))));
                            var_33 = ((_Bool) ((unsigned short) arr_40 [i_10]));
                        }
                        for (int i_14 = 1; i_14 < 22; i_14 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((long long int) min(((+(var_14))), ((-(((/* implicit */int) (unsigned short)14871)))))));
                            var_35 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_14]))))) == (arr_35 [i_10]))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */signed char) ((unsigned char) (~(arr_38 [i_6] [i_6] [i_6] [(short)9] [i_6]))));
    }
    var_37 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 23; i_15 += 4) 
    {
        for (short i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            {
                var_38 ^= ((/* implicit */short) max((((/* implicit */int) ((short) arr_53 [i_16] [i_16] [i_16]))), (var_14)));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_16)))))) || (((/* implicit */_Bool) ((unsigned int) min((15773185010343107520ULL), (((/* implicit */unsigned long long int) 4294967291U))))))));
            }
        } 
    } 
}
