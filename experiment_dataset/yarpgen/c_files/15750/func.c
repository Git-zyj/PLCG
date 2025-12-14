/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15750
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */int) var_6);
            arr_5 [i_0] = ((/* implicit */int) var_2);
            arr_6 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) 1494257400))) : (var_5)))) ? (max((((((/* implicit */_Bool) (unsigned char)166)) ? (-1494257400) : (-1494257398))), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 1244613389U))))))) : (((/* implicit */int) ((_Bool) var_3)))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_2))) * (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */int) max((arr_0 [i_0]), ((_Bool)1)))) : (((/* implicit */int) ((short) arr_1 [1])))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) var_1);
            var_19 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (short)-448)))));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((+((+(arr_8 [i_0]))))) : (((/* implicit */unsigned int) -1494257400))));
            var_20 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) -1494257398)));
            arr_10 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned int) ((int) (_Bool)1));
        }
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (long long int i_5 = 4; i_5 < 10; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_0] [(unsigned char)10] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (((unsigned int) var_8)));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (var_0))))));
                        }
                    } 
                } 
            } 
            arr_23 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_13 [i_3] [i_0] [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) arr_2 [i_0]))))));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned char) ((signed char) (!(((/* implicit */_Bool) var_9)))))))));
            arr_27 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)27513)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27742))) : (9754940590751905963ULL)));
        }
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) -4270386129675472807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 - 1] [i_0 + 1]))) : ((((_Bool)1) ? (8ULL) : (((/* implicit */unsigned long long int) 1574684591U))))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_37 [5] [i_9] [9] [i_10] [i_8] [i_0] &= ((/* implicit */_Bool) 1494257398);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_8] [i_9])) ? (arr_14 [4ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : (max((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3041249717U)))), (max((var_10), (((/* implicit */unsigned long long int) var_7))))))));
                        var_25 *= ((/* implicit */unsigned char) (~(895101297U)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((int) max((var_15), (((/* implicit */unsigned char) var_7)))))), (((((/* implicit */_Bool) 2696349615508612297ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) ? ((+((~(var_0))))) : (((/* implicit */long long int) ((unsigned int) arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_11])))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_13))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((/* implicit */_Bool) ((unsigned char) (+(arr_35 [i_0] [i_8] [i_8] [i_0] [2LL] [i_8]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (3366670352055732540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_8] [i_8] [i_8] [10U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) ((_Bool) var_14));
        var_31 = ((/* implicit */unsigned short) var_13);
    }
    var_32 = var_5;
    var_33 = var_8;
    var_34 = ((/* implicit */unsigned char) var_4);
}
