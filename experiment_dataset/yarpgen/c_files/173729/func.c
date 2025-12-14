/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173729
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
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)6480)) >= (((/* implicit */int) (short)-28628)))))) ^ (((((/* implicit */_Bool) (+(var_6)))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((int) (short)-1))))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [(unsigned char)16])) ^ (max((((/* implicit */int) arr_3 [i_0] [i_1])), (var_1))))) ^ (min((((/* implicit */int) arr_1 [(unsigned short)14])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) var_2)))))))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((short) var_6)))))))));
                var_19 = var_12;
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (short)8037)) : (((/* implicit */int) (short)32756)))), ((+(arr_0 [6] [6])))))) ? (max((((/* implicit */int) ((short) (short)-12133))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-12133)) : (((/* implicit */int) (short)12133)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [(short)2])) : (((/* implicit */int) arr_1 [16U])))))))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [16U] [16U] [i_2])))))))))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)28627)) : ((-(((/* implicit */int) var_4))))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        var_23 = ((/* implicit */signed char) arr_8 [i_3 + 2] [i_3 + 2] [i_3 + 1]);
        arr_12 [i_3] = (+(((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7))));
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [7ULL] [i_3 - 2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 2]))))))));
            arr_15 [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_10 [i_4])))));
        }
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_25 = ((/* implicit */int) var_11);
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [2ULL])) : (((/* implicit */int) var_4)))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
                {
                    var_27 = ((/* implicit */int) (-(arr_22 [i_3] [i_3] [i_6] [3ULL])));
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [4] [4]))))) / (((/* implicit */int) var_2)))))));
                }
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((/* implicit */int) var_14)))))));
                var_30 = ((/* implicit */unsigned long long int) max((var_30), ((+(arr_22 [i_3 + 1] [i_6] [i_3] [i_3 - 2])))));
            }
            var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))));
        }
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_32 = ((/* implicit */short) var_2);
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((arr_13 [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 2] [i_8])))))));
            arr_28 [i_3 + 2] [i_3 + 2] [i_3] = ((/* implicit */signed char) (-(var_6)));
        }
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((((/* implicit */_Bool) var_10)) ? (arr_22 [i_3] [6ULL] [i_3] [6ULL]) : (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3 - 1])))))));
    }
    for (short i_9 = 2; i_9 < 21; i_9 += 2) 
    {
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((((/* implicit */_Bool) (-(var_9)))) ? (arr_29 [i_9 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9 - 2]))))), (((/* implicit */long long int) ((int) ((long long int) arr_30 [i_9])))))))));
        /* LoopSeq 3 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (~(max((min((-7847311859685687407LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))))))));
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) -7847311859685687407LL))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    {
                        var_38 = ((/* implicit */unsigned long long int) arr_29 [i_9 - 2]);
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (unsigned char)30))));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((short) arr_31 [i_9] [i_11]))))) ? (((/* implicit */unsigned long long int) (+(min((arr_34 [i_9] [i_10] [i_11]), (((/* implicit */int) (unsigned short)65529))))))) : (((min((((/* implicit */unsigned long long int) arr_30 [i_11])), (arr_37 [i_9 + 1] [i_9 + 3] [i_10] [i_11] [i_9 + 1] [i_12]))) & (((/* implicit */unsigned long long int) max((var_7), (-7847311859685687407LL)))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        arr_44 [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_9 + 2] [i_9 + 1] [i_9 + 2])) * (((/* implicit */int) var_14))))) < (min(((~(arr_37 [i_9] [i_10] [i_9] [i_13] [i_13] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_4)))))))));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_38 [i_9 + 1] [i_9 + 1] [i_9 + 1] [(unsigned short)1] [i_9 - 2]), (arr_38 [i_9 + 2] [i_9 + 2] [i_9 + 2] [(short)3] [i_9 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : ((+(((/* implicit */int) arr_33 [i_10] [i_13] [i_14]))))))) : (min((arr_29 [i_9 + 2]), (((((/* implicit */_Bool) arr_43 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_14])) ? (((/* implicit */long long int) var_1)) : (var_9))))))))));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (!(var_0))))));
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_13))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_32 [i_14]))))))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
        {
            var_45 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_37 [i_15] [0LL] [0LL] [i_9 + 2] [0LL] [0LL]) : (((/* implicit */unsigned long long int) -1820163760))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_13))))))), (((/* implicit */int) var_0)));
            var_46 = ((/* implicit */short) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) arr_33 [i_9 + 1] [i_9 + 2] [i_9 + 2]))))));
        }
        for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 3) 
        {
            arr_53 [i_16] [i_16] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)22))))), (((((2977867885U) > (((/* implicit */unsigned int) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_52 [i_16])) : (var_6)))))));
            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (~(arr_38 [i_9] [i_16 + 4] [i_16 - 2] [i_9 + 1] [i_9 + 1]))))));
            var_48 = ((/* implicit */unsigned long long int) min((var_48), ((((!(((/* implicit */_Bool) var_3)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_16 + 3] [i_9 - 1])) % (((/* implicit */int) arr_47 [i_9 + 3] [i_16 + 3])))))))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 2; i_17 < 22; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    {
                        var_49 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (-(1054360216U)))) / (max((((/* implicit */long long int) var_2)), (arr_38 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 2])))))));
                        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) arr_37 [i_18] [i_17] [i_17 - 2] [i_16 - 1] [i_16 - 1] [(short)1]))));
                    }
                } 
            } 
        }
    }
    for (short i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
    {
        var_51 = ((/* implicit */short) (+((~(var_7)))));
        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) ((((((/* implicit */_Bool) arr_38 [i_19] [i_19] [i_19] [(short)3] [i_19])) ? (arr_38 [1U] [i_19] [i_19] [i_19] [(_Bool)1]) : (var_9))) / (((/* implicit */long long int) arr_64 [i_19] [i_19])))))));
    }
    for (short i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
    {
        var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) (-(max((((((/* implicit */int) arr_47 [i_20] [i_20])) - (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) (short)-12152)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))))));
        arr_68 [i_20] [i_20] = ((/* implicit */int) max(((unsigned short)28855), (((/* implicit */unsigned short) (_Bool)1))));
        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((14310802521830027388ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((18446744073709551610ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)1)), ((unsigned short)65531)))))) : (((/* implicit */unsigned long long int) -7796178325817589489LL))));
    }
    var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) var_11))));
}
