/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108766
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) (~(661463942))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)18231)) < (((((/* implicit */_Bool) arr_6 [(unsigned char)10] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [16U] [i_1] [i_1])) : (var_17)))))), (((unsigned char) max((var_7), ((_Bool)1))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 4; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((signed char) (-(((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-7861)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((arr_13 [i_5 + 1] [(unsigned short)3] [i_3 - 2] [i_3 - 2]) * (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */_Bool) (short)-10970)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_4] [11ULL] [i_5] [i_3 - 1] [i_4])))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_3] [i_2] [i_2] [i_3] [i_6])) >= (((/* implicit */int) (_Bool)0))))))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((arr_12 [i_2 - 1] [i_2] [i_2 - 3] [i_2]) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) arr_12 [(unsigned short)1] [i_2 + 1] [i_3 - 1] [i_5 + 1])))))))));
                            var_24 = ((/* implicit */unsigned char) arr_13 [i_6] [i_5] [i_4] [i_3]);
                            var_25 = ((/* implicit */int) arr_14 [i_2]);
                        }
                    } 
                } 
            }
            arr_18 [i_2] [i_2 + 2] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 + 2])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 2] [i_2 - 4])) : (((/* implicit */int) (unsigned short)33516))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_3))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [(_Bool)1])))))))));
        }
        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2] [i_2])) != ((~(((/* implicit */int) arr_14 [i_2]))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_9 [(_Bool)1] [i_2 - 3]), (((/* implicit */unsigned short) arr_14 [(signed char)18])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [16LL] [16LL])) && (arr_12 [14] [14] [i_2] [i_2]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_2 + 3] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_24 [i_7] [7LL] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_23 [i_8])))) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_7] [i_8])), ((unsigned short)54333))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    {
                        arr_29 [i_9] [i_10] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_28 [i_9 - 2] [i_9 + 1] [i_10] [(_Bool)1])), (var_15)))) ? (((/* implicit */int) arr_28 [i_9 - 2] [i_9 + 1] [i_10] [(short)4])) : (((((/* implicit */int) arr_28 [i_9 - 2] [i_9 + 1] [i_10] [i_9])) + (((/* implicit */int) arr_28 [i_9 - 2] [i_9 + 1] [i_10] [(signed char)12]))))));
                        arr_30 [i_7] [i_7] [i_8] [i_7] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) max(((short)-30862), ((short)26358)))) > ((+((+(((/* implicit */int) (_Bool)0))))))));
                        var_28 -= (+(((max((arr_28 [i_10] [i_9] [i_9] [i_7]), (var_7))) ? (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [(short)10] [i_9] [(_Bool)1]))) : (arr_21 [i_7] [i_9] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_14), (var_13))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((arr_26 [i_8] [i_8] [i_7] [(unsigned char)3]), (((/* implicit */long long int) var_6))))))) && (((/* implicit */_Bool) arr_23 [i_8]))));
        }
        arr_31 [i_7] = ((/* implicit */signed char) (+(max((7526314749971906847LL), (((/* implicit */long long int) (short)26350))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 4; i_11 < 19; i_11 += 2) 
        {
            for (short i_12 = 2; i_12 < 20; i_12 += 3) 
            {
                {
                    var_30 = ((/* implicit */int) ((min((arr_36 [i_12 + 1] [(unsigned char)10] [i_11 - 1] [i_12]), ((~(arr_36 [19] [i_7] [i_11] [i_7]))))) == (min((((/* implicit */int) max((arr_32 [i_7]), (arr_32 [18U])))), ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))))));
                    var_31 |= ((/* implicit */_Bool) var_15);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_25 [i_14] [(_Bool)1] [i_7]), (((/* implicit */short) arr_32 [i_14])))))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        arr_43 [i_15] [i_14] [0ULL] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_42 [i_15] [i_14] [i_7]), (((/* implicit */unsigned short) arr_23 [i_7])))))) + (var_3)));
                        arr_44 [i_7] [i_13] [i_7] [i_15] = ((/* implicit */long long int) (~(arr_36 [i_7] [i_7] [i_14] [i_7])));
                    }
                    var_33 = ((/* implicit */long long int) min((max(((~(((/* implicit */int) arr_25 [i_7] [i_13] [(unsigned char)0])))), (-1355083448))), (max((((/* implicit */int) ((((/* implicit */int) (short)7858)) <= (((/* implicit */int) arr_32 [i_14]))))), (((((/* implicit */int) arr_42 [i_14] [i_13] [i_13])) % (((/* implicit */int) arr_40 [i_13] [i_13] [i_13] [16]))))))));
                    arr_45 [i_14] [i_13] [i_14] = ((/* implicit */unsigned short) arr_37 [i_7]);
                }
            } 
        } 
    }
    var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40479))))) ? ((~(var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), ((_Bool)1)))))))));
}
