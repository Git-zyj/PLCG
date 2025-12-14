/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165685
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = (signed char)110;
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((max((14643969982495448121ULL), (((/* implicit */unsigned long long int) 764857825)))) - (14643969982495448116ULL)))))), (min((((/* implicit */unsigned long long int) -2560970130771546760LL)), (max((((/* implicit */unsigned long long int) 4294967285U)), (8433016934393524445ULL)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((unsigned int) (((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned char)0))))) - (2367981722U)));
                        arr_13 [i_0] [i_1] [i_2] [i_0] [(signed char)9] [i_0 - 3] = ((/* implicit */signed char) (short)-18621);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_0] [i_0] [i_5] = ((/* implicit */short) ((signed char) (+(0ULL))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(1071181040U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 3])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        var_10 = ((/* implicit */signed char) min((var_10), (((signed char) var_8))));
                        var_11 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 4294967286U)) ? (-3147053664715363726LL) : (4560851292935757649LL)))));
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_25 [i_0] [i_1] [i_4] [i_0] [i_5] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_5] [i_0])) < (((/* implicit */int) (short)1792))));
                        var_12 = ((/* implicit */unsigned int) 2560970130771546760LL);
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (18446744073709551613ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) : (((unsigned int) 1800827515U))));
                    }
                    arr_26 [i_0 + 2] [i_0 + 2] [i_4] [i_1] [i_4 - 1] |= ((/* implicit */short) (~(arr_8 [i_0] [i_1] [i_4 + 1] [i_5])));
                }
                for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    var_14 *= ((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0 - 2]);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) (signed char)0))))))));
                    arr_30 [i_0] [i_0] [i_4] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967285U), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) min((var_6), (((/* implicit */unsigned char) (signed char)28)))))));
                    arr_31 [i_0] [i_1] [i_1] [20LL] [i_4] [i_8] |= ((/* implicit */long long int) (signed char)0);
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_34 [i_0] [(signed char)23] [i_0] [i_4] [i_9] = min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)(-127 - 1)))))))), (var_8));
                    arr_35 [i_0 + 1] [i_0 + 3] [i_1] [i_0] [i_9] = ((((((/* implicit */long long int) var_4)) / (arr_11 [i_0] [i_0] [i_4 + 1] [i_9] [i_0 - 2]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_1)))) : (((/* implicit */int) arr_2 [i_9]))))));
                }
                arr_36 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1560288052)) && (((/* implicit */_Bool) (+(0ULL))))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((0ULL) >> (((/* implicit */int) var_7))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)201)), (min((((/* implicit */unsigned int) (short)5374)), (3257557452U))))))));
                        var_17 |= ((/* implicit */short) (~(((/* implicit */int) (signed char)24))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [12ULL] [12ULL] [12ULL] [i_11])) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38292))) ^ (18446744073709551594ULL))), (((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10334)))));
                        arr_43 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) ((short) (signed char)29))) % (((/* implicit */int) (signed char)-12))))));
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (var_9)));
                    arr_44 [i_10] [i_0] [i_0] [(_Bool)0] [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
                    arr_45 [i_0] [i_0] [i_4] [i_10] [i_1] [(short)20] = ((/* implicit */int) (+((+(arr_27 [i_0 - 1])))));
                }
            }
            for (unsigned int i_12 = 1; i_12 < 24; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    var_20 = ((/* implicit */short) arr_33 [i_1] [i_12 + 1] [i_13]);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1293027722))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 4)) < (1288321951U))))))) ? (((max((arr_33 [i_1] [i_12] [i_13]), (((/* implicit */unsigned int) var_9)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (signed char)(-127 - 1))))))))) : (((3666932614U) << (((((/* implicit */int) arr_32 [i_12] [i_12 + 1] [i_12] [i_12] [i_12])) - (41)))))));
                }
                arr_50 [i_12 + 1] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_1] [i_12] [i_1])) || (((/* implicit */_Bool) (short)18621))))), (((((/* implicit */_Bool) 1293027713)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)127)))))));
            }
        }
        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_22 = ((/* implicit */signed char) max((((/* implicit */int) min((var_7), (arr_14 [i_0 - 2] [i_0 - 2] [i_0])))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) 132120576LL)) <= (var_8)))) * (((/* implicit */int) var_1))))));
            arr_55 [i_0] = ((/* implicit */signed char) (short)-717);
            var_23 = ((/* implicit */signed char) ((unsigned short) var_8));
        }
    }
    for (long long int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_5))));
        var_25 ^= min(((~(var_8))), (((/* implicit */unsigned long long int) arr_41 [i_15] [3] [i_15] [(_Bool)1] [i_15])));
        arr_58 [i_15] = ((/* implicit */short) 6568747250403048693ULL);
        var_26 = ((/* implicit */signed char) (-(min((((((/* implicit */int) var_6)) << (((((/* implicit */int) (signed char)62)) - (44))))), (((/* implicit */int) min(((short)0), (((/* implicit */short) var_1)))))))));
    }
    for (long long int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
    {
        var_27 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)127)), (13590440773417903433ULL)))));
        arr_61 [8U] [(short)14] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)0)), (arr_21 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [7ULL])))))));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        for (int i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            {
                var_28 ^= ((signed char) ((((/* implicit */_Bool) arr_66 [i_17])) ? (arr_8 [i_17] [i_18] [i_17] [i_17]) : (((/* implicit */unsigned int) min((2100481359), (((/* implicit */int) (short)20075)))))));
                arr_67 [(signed char)5] [i_17] [i_18] = (!(((/* implicit */_Bool) var_8)));
            }
        } 
    } 
    var_29 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_2)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))))));
}
