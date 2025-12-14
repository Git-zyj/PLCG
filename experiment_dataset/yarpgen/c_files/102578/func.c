/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102578
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (14627443743349005519ULL)))) ? (min((max((14627443743349005539ULL), (((/* implicit */unsigned long long int) (short)32752)))), ((~(14627443743349005519ULL))))) : (max((((((/* implicit */_Bool) (unsigned short)11656)) ? (3819300330360546096ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53886))))), (((/* implicit */unsigned long long int) (short)127))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) var_9);
                    var_12 |= (((!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2 + 4])))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2 + 4])) : (-1723124236));
                    var_13 = ((/* implicit */unsigned short) max((((arr_7 [i_0] [i_1] [i_2 + 1]) ^ (var_3))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (arr_7 [i_1] [i_1] [i_2 - 1]) : (arr_7 [i_0] [i_1] [i_2])))));
                    var_14 = ((/* implicit */short) var_4);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) ((unsigned long long int) var_6));
            var_16 = arr_1 [i_0] [i_0];
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) arr_0 [i_3 + 1]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6293)) ? (((/* implicit */long long int) 3807551255U)) : (var_9)))) ? (((/* implicit */unsigned long long int) -7447734315277322953LL)) : (arr_7 [7ULL] [i_3] [i_3 - 1])))));
            var_18 = ((/* implicit */long long int) var_1);
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (3646593818U)))) ? (((arr_7 [14ULL] [(signed char)8] [i_3 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))))) : (((((/* implicit */_Bool) arr_4 [i_3] [i_3 + 1] [i_3 + 1] [i_0])) ? (arr_7 [i_3 - 1] [(signed char)14] [i_3 + 1]) : (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3 - 1] [i_3] [i_3])))))))));
        }
    }
    for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        var_20 = ((((/* implicit */long long int) max((784635124U), (arr_13 [i_4 - 1] [i_4 + 1])))) + (((((/* implicit */_Bool) 1267077270)) ? (8744329916692307308LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43576))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) * (14627443743349005539ULL))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_8]))))) ? (((((/* implicit */_Bool) (short)-14953)) ? (var_5) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) 648373472U))));
                            var_24 = ((/* implicit */long long int) arr_22 [i_8]);
                            var_25 = (~(((((/* implicit */_Bool) arr_16 [i_4] [i_8])) ? (531900823) : (((/* implicit */int) (unsigned short)65535)))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            var_26 = var_5;
                            var_27 = ((/* implicit */unsigned int) var_2);
                        }
                        var_28 = ((/* implicit */unsigned char) arr_12 [i_5]);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) (+(((int) ((((/* implicit */int) arr_22 [20ULL])) | (arr_12 [i_4]))))));
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 3; i_10 < 20; i_10 += 1) 
    {
        var_30 = ((/* implicit */short) var_9);
        var_31 += ((/* implicit */signed char) 3468286221U);
        var_32 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_23 [3LL] [i_10])), (3819300330360546090ULL)))))))) >= (var_5)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 19; i_11 += 2) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51807))))) ? (((/* implicit */int) arr_22 [i_11])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_10])))))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_18 [i_10] [i_11] [i_10] [i_11])) - (arr_12 [i_11])))));
        }
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_35 = ((short) arr_29 [i_10 - 2] [i_10 - 1] [i_10 + 1]);
            var_36 = ((/* implicit */unsigned long long int) (+(var_6)));
            /* LoopSeq 2 */
            for (signed char i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                var_37 = ((/* implicit */_Bool) ((unsigned long long int) 3646593812U));
                var_38 = ((((/* implicit */_Bool) arr_21 [i_10 - 3] [i_10 - 3] [i_12 - 1] [i_12 - 1] [i_13] [i_13])) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (short)0)));
                var_39 |= (+(var_3));
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                var_40 = ((/* implicit */unsigned long long int) 531900823);
                var_41 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) arr_32 [5U] [i_12 - 1])) : (arr_29 [i_12 - 1] [i_10] [i_10])));
                var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_20 [i_10] [i_12 - 1] [15] [i_10] [i_14]) | (((/* implicit */unsigned int) 1267077245)))))));
            }
            var_43 = ((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) && (arr_27 [i_12])))));
            var_44 = ((/* implicit */int) ((signed char) var_5));
        }
    }
    var_45 = ((/* implicit */unsigned short) (+((-(135107988821114880ULL)))));
}
