/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115815
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
    var_18 -= ((/* implicit */unsigned char) var_5);
    var_19 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_5 [(signed char)14] [i_1] [4ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)30145)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((var_14) / (((/* implicit */long long int) arr_1 [i_0] [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) max((min((var_10), (((/* implicit */unsigned short) arr_0 [i_1])))), (((/* implicit */unsigned short) arr_0 [i_1]))))))));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_20 -= ((/* implicit */int) (signed char)-97);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_21 = ((((/* implicit */long long int) arr_13 [i_0])) & (3LL));
                        var_22 = ((/* implicit */unsigned int) 3LL);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) ((var_2) || (((/* implicit */_Bool) arr_6 [(unsigned short)13] [i_3] [i_1]))));
                        var_24 ^= ((/* implicit */unsigned int) (+((+(var_13)))));
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) max(((signed char)108), (max((arr_10 [i_0] [i_0] [i_0] [(short)8] [i_0]), (arr_10 [i_2] [i_3] [i_2] [14U] [14U])))));
                        arr_22 [i_0] [0] [(unsigned char)14] [i_1] [(unsigned char)14] [i_0] &= ((/* implicit */unsigned short) arr_10 [i_0] [(short)0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_26 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)1393))))));
                        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (signed char)-23))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-27))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)24083))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        var_29 = ((-2840743919649873105LL) / (((/* implicit */long long int) -969884455)));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_8])) - (((/* implicit */int) arr_14 [i_0] [i_0] [10] [i_3] [i_8]))));
                    }
                    arr_28 [i_0] = ((/* implicit */unsigned short) max(((+(arr_6 [i_0] [i_1] [i_2]))), ((-(arr_6 [11LL] [i_0] [i_0])))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_0] [(short)13] [i_2] [i_9] [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_9] [i_1] [i_1] [i_0])))) + (((/* implicit */int) ((_Bool) 21LL))))))));
                    var_32 -= ((/* implicit */signed char) (~(var_17)));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_33 -= ((/* implicit */long long int) 153378947U);
                        var_34 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_1]))) / (17857706474525975991ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_0 [i_10])))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_36 [i_0] [i_1] [i_0] [i_1] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [(unsigned char)12] [i_9] [15LL] [i_0] [i_0]))));
                        var_35 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                        var_36 = ((/* implicit */_Bool) var_5);
                        var_37 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(-38206897)))) / (arr_4 [i_2] [i_2])));
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_38 *= ((/* implicit */short) arr_24 [i_2] [i_1] [i_2]);
                        var_39 = ((((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [(unsigned short)4] [i_12])) * (((/* implicit */int) (_Bool)1)));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53312)) ? (var_13) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_12]))));
                        arr_40 [i_2] [4U] [i_2] [i_2] [4U] [4U] &= ((/* implicit */signed char) 3700328739812594404LL);
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_41 -= arr_30 [i_0] [i_0] [i_0] [i_0];
                    arr_43 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [(signed char)13] [i_13] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_13] [i_0] [i_13])) : (((/* implicit */int) var_15)))) - (((/* implicit */int) arr_23 [i_0] [i_0] [(_Bool)1] [i_2] [i_2] [i_13]))));
                    arr_44 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */long long int) (unsigned char)161);
                }
                arr_45 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)22)) : (var_16))) * (((((/* implicit */_Bool) (unsigned short)58110)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)62)))))))));
            }
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_3 [i_0] [i_0])));
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (((12140128466156450666ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (min((min((var_9), (((/* implicit */long long int) var_15)))), (var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [(short)9])))))));
                    arr_51 [i_0] [12U] = ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (short)6729)) : (((/* implicit */int) (short)24100)));
                }
                for (short i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) var_5))));
                    var_45 -= ((/* implicit */unsigned char) min((var_14), (((/* implicit */long long int) arr_13 [i_14]))));
                }
                arr_55 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) 707963004U);
            }
            for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) > (((/* implicit */int) min((arr_24 [i_0] [i_1] [i_17]), (((/* implicit */signed char) (_Bool)1)))))));
                var_47 = ((/* implicit */unsigned char) arr_2 [i_0]);
            }
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) /* same iter space */
            {
                var_48 &= ((/* implicit */unsigned int) (_Bool)0);
                var_49 = ((/* implicit */unsigned short) max((((arr_42 [i_0] [i_1] [i_18] [i_18]) - (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_18] [i_18] [(unsigned char)8]))))), (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_1] [i_18] [i_1]))));
                arr_62 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (5399900872395587231ULL)))) ? (6740382797872082589LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) (-(((/* implicit */int) arr_31 [(short)16] [i_1] [(short)16] [i_1] [i_1])))))));
            var_51 &= ((/* implicit */short) (unsigned short)64565);
        }
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 17; i_19 += 3) 
        {
            var_52 = ((/* implicit */_Bool) min((((/* implicit */int) var_12)), (max((((((/* implicit */_Bool) arr_29 [i_19] [i_0] [0LL] [i_0])) ? (var_16) : (((/* implicit */int) arr_11 [(signed char)5] [i_19] [i_19] [(unsigned char)11] [i_0] [i_0])))), ((-(((/* implicit */int) var_10))))))));
            var_53 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_0] [i_0]))) / (var_17))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_0]))))))));
        }
    }
    var_54 = ((/* implicit */unsigned char) var_0);
}
