/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13950
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
    var_16 += ((/* implicit */signed char) 8025377681548204350ULL);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 846419416681931482LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)12] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((+(var_4)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)0))));
        arr_2 [i_0] = ((/* implicit */unsigned char) 13U);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((signed char) var_0));
        var_19 = ((/* implicit */signed char) (short)6724);
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((arr_6 [i_2] [i_2] [i_2 + 1]) ? (417301710) : (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (((+(-4356949933142013837LL))) <= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((var_4) - (6759005287317531442LL))))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_3))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_16 [i_6] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((int) arr_4 [10ULL])) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_2] [i_6] [i_3] [4ULL] [i_2]) ? (((/* implicit */int) (unsigned short)37330)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (536376245U))) : (arr_9 [i_2] [(unsigned char)7] [i_2 + 1] [(short)0] [10])));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 4) 
                        {
                            var_25 *= ((/* implicit */unsigned int) var_0);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [(_Bool)1] [i_2] [i_2])) && (((/* implicit */_Bool) (signed char)0))));
                            var_27 |= ((/* implicit */short) (unsigned char)207);
                        }
                        for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_24 [i_2] [i_2] [i_2] = ((long long int) ((((/* implicit */_Bool) var_1)) ? (arr_18 [(unsigned short)10] [i_2] [i_3] [i_6] [(short)7] [(_Bool)1] [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) || (((/* implicit */_Bool) (unsigned char)193))));
                        }
                        arr_25 [i_2] [8LL] [i_3] [i_6] |= ((/* implicit */unsigned long long int) ((long long int) arr_17 [i_2 + 1] [i_2] [i_2 + 1] [i_3] [i_1]));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_27 [3] [2U] [(_Bool)1] [i_3] [i_2] [(unsigned short)15]))))));
                        var_30 = ((/* implicit */unsigned char) var_8);
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_2 - 1] [i_10] [(unsigned char)9] [i_1] [(_Bool)1] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2 - 1] [(unsigned short)15] [i_3] [i_10] [i_3] [8LL]))) : (var_15)));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1820140853)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) | (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)98)) % (((/* implicit */int) (unsigned short)12871)))))));
                            arr_31 [i_11] [9] [i_2] [(unsigned char)10] [i_11] = ((/* implicit */unsigned int) ((arr_10 [i_11] [i_3] [i_2] [i_1]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) > (-1903166941315808981LL)))) : (((/* implicit */int) arr_4 [i_2 + 1]))));
                        }
                    }
                    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2 - 1]))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2 + 1])) & (-1805390903)));
                    }
                    for (signed char i_13 = 2; i_13 < 17; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [(short)5] [(unsigned short)0] [(short)5])) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (unsigned short)52562)) * (((/* implicit */int) (unsigned char)0))))));
                        var_37 = ((/* implicit */int) var_6);
                    }
                }
            } 
        } 
        var_38 |= ((/* implicit */long long int) (-((~(2669241558568680433ULL)))));
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 17; i_16 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_6))))));
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (signed char)3))))))));
                            var_41 = ((/* implicit */unsigned char) arr_43 [(short)13] [i_16 - 1] [5U] [i_16]);
                            var_42 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_4 [i_17])) + (2147483647))) << (((3045954188845722148LL) - (3045954188845722148LL))))) << (((((/* implicit */int) var_13)) - (56392)))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_15])) : (((/* implicit */int) arr_5 [i_15]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned char) ((max((14513310249124477897ULL), (((/* implicit */unsigned long long int) (short)6728)))) << (((var_10) - (279168129574181322ULL)))));
}
