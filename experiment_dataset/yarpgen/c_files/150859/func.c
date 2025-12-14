/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150859
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_1)));
        var_18 = ((/* implicit */long long int) (!(((612004001) <= (1980097768)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = max((min((max((((/* implicit */long long int) (unsigned short)64366)), (arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16452))) : (3614702561U)))))), (max((((/* implicit */long long int) max(((short)31514), (((/* implicit */short) var_9))))), ((~(4863931461653295655LL))))));
        var_19 = ((/* implicit */short) min((511), (214146117)));
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) arr_9 [i_4] [i_3] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((max((arr_3 [i_2 + 1]), (arr_3 [i_2 - 1]))), (3546343617827124434ULL)));
                                arr_20 [i_2] [i_3] [i_2] [12LL] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_19 [i_6] [i_5] [i_4 + 2] [i_3] [i_2] [i_2])), (((((/* implicit */_Bool) (signed char)127)) ? (max((((/* implicit */unsigned int) arr_18 [i_2] [i_4 + 1] [i_3 + 1] [i_2])), (3894045604U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_2] [i_3] [i_2])), (2147483647))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((max((13540735979134578795ULL), (((/* implicit */unsigned long long int) arr_11 [i_3 - 3])))) > (((/* implicit */unsigned long long int) 4294967295U))));
                                var_23 = ((/* implicit */short) -2065429417);
                                arr_21 [i_2] [i_2] [(short)19] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_4] [i_6]))))), (2563707542429607971ULL))), (((/* implicit */unsigned long long int) (signed char)12))));
                            }
                        } 
                    } 
                    arr_22 [i_2 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_2 - 1]), (arr_2 [i_2 + 1])))) ? (max((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (2147483647) : (((/* implicit */int) var_14)))))));
                }
            } 
        } 
        arr_23 [i_2] [i_2 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) 17117559517721517159ULL)) ? (((/* implicit */unsigned long long int) 1498741355)) : (18446744073709551615ULL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_7] [i_7 + 1] [i_2]))));
            arr_27 [i_2] [i_2] [i_2] = ((/* implicit */int) 3ULL);
            arr_28 [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5615)) ? (((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2] [0] [i_2])) : (((((/* implicit */_Bool) -3039611689641121982LL)) ? (var_3) : (((/* implicit */long long int) var_4))))));
        }
        for (int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((max((arr_16 [i_2] [i_8 - 1] [i_2]), (arr_16 [i_2] [i_2] [i_2]))) / (arr_16 [i_8] [i_8] [i_2])));
            arr_31 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) -1)) : (14286677484295065238ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [5LL] [i_2 + 1] [i_8] [i_2 + 1] [i_2 - 2] [i_2]), (arr_19 [i_2] [i_2] [i_8] [(short)14] [i_2 + 1] [(short)14]))))) : (min((((/* implicit */long long int) var_4)), (-7846388178339833726LL)))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (unsigned short i_11 = 3; i_11 < 19; i_11 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((-1973330835), (((/* implicit */int) arr_38 [i_10] [i_11 - 1] [i_10] [i_11]))));
                        arr_41 [i_2] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */int) (signed char)-22);
                        arr_42 [i_2 + 1] [i_2 + 1] [i_10] [i_2] = ((/* implicit */signed char) 9223372036854775797LL);
                    }
                } 
            } 
            arr_43 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 698482381)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL))));
            var_27 = ((/* implicit */short) min((((((/* implicit */int) ((471560471) > (((/* implicit */int) var_10))))) * (((/* implicit */int) (signed char)-78)))), (((/* implicit */int) arr_19 [i_2] [8] [i_9] [i_9] [i_9] [8]))));
        }
    }
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        arr_46 [i_12] = ((/* implicit */unsigned short) min((9223372036854775784LL), (9223372036854775807LL)));
        var_28 = ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)102)), ((short)19886)));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_13), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (min((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_12]) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) 2147483647))))));
        var_30 = ((/* implicit */int) ((arr_17 [i_12] [i_12] [i_12] [i_12] [i_12]) + (min((arr_17 [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) arr_15 [i_12] [i_12] [i_12] [i_12]))))));
    }
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_0))));
    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) & (min((((/* implicit */unsigned long long int) (signed char)-92)), (14935065571241322271ULL)))))));
    var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_7)), (min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13))), (((/* implicit */unsigned long long int) ((-9223372036854775807LL) - (-9223372036854775802LL))))))));
}
