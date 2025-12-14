/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145602
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
    var_16 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)144))))), (min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) (signed char)64)) ? (var_13) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))))));
                arr_10 [i_0] [i_1] [i_2] = (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_10))))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) var_11))))))) : (min((((/* implicit */int) var_10)), (arr_3 [i_1] [i_0])))));
            }
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_16 [(unsigned char)9] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) -1364009316);
                        arr_17 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 430857175U)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) * (((/* implicit */int) arr_0 [(short)5] [(short)5])))) / (arr_3 [2U] [2U])))) : (max((((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))), (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_4] [i_3])))))))));
                        arr_18 [i_0] [(short)21] [i_3] [i_0] = ((/* implicit */int) (((-(((((/* implicit */int) (signed char)-88)) / (((/* implicit */int) (unsigned char)150)))))) > (((/* implicit */int) (signed char)-87))));
                    }
                } 
            } 
            arr_19 [i_0] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1225114791)) : (((0ULL) | (15407826300782173322ULL))))));
            arr_20 [17LL] [17LL] [i_0] = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (2025820445U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))));
        }
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((-7175651311241262795LL), (arr_13 [i_0] [i_0] [13U] [i_0] [i_0])))));
            var_19 = ((/* implicit */unsigned char) var_15);
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)183))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_12)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_5])))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_21 = arr_21 [i_0] [i_0];
                            arr_30 [i_5] [i_7] [i_0] = ((/* implicit */short) ((int) arr_3 [20U] [20U]));
                            var_22 = ((/* implicit */long long int) arr_8 [i_8] [(unsigned char)2] [i_5] [i_5]);
                        }
                    } 
                } 
            } 
            arr_31 [20ULL] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((15407826300782173322ULL) < (((/* implicit */unsigned long long int) 144115188075855871LL))))))) >= (((max((((/* implicit */unsigned long long int) var_4)), (var_11))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((1942324300) > (((/* implicit */int) (unsigned char)195))))))))));
        }
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_42 [i_9] [(unsigned char)10] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_25 [i_0] [i_9] [i_10] [i_11] [i_12]) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12]) : (((/* implicit */long long int) 122496830U))))) : (((arr_15 [i_12] [i_0] [(signed char)8] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) arr_38 [i_0] [i_11] [(short)20])) - (30))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((7633919510371535380ULL), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_3 [i_0] [i_10]) : (((/* implicit */int) var_8))))) : (max((var_13), (534773760U))))))));
                            arr_43 [i_0] [i_11] = ((/* implicit */short) min((((unsigned long long int) (signed char)-64)), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_37 [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_11] [i_11] [i_10] [i_9])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)69))))))))));
                            var_23 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_11] [i_11]))))) ? (((arr_8 [i_0] [i_0] [i_10] [i_12]) ? (((/* implicit */int) arr_2 [12U] [i_12])) : (((/* implicit */int) arr_23 [i_0] [i_9] [i_10] [(_Bool)1])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))) * (((var_6) * (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((((((/* implicit */_Bool) ((var_0) & (2671870974805132074ULL)))) ? (((((/* implicit */long long int) 32736U)) / (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [i_0] [i_0]), (var_12))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (~(3456529360U)))) ? (((((/* implicit */_Bool) -1942324291)) ? (((/* implicit */int) arr_34 [i_9] [i_0])) : (((/* implicit */int) arr_39 [(unsigned char)2])))) : (((/* implicit */int) (!(arr_8 [22U] [22U] [22U] [i_9])))))))))));
            var_25 = ((/* implicit */long long int) ((unsigned long long int) (+(var_11))));
            arr_44 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 1048575)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_0] [i_9] [i_9])))))) : (((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
        }
        var_26 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) arr_1 [i_0]))))));
        var_27 = ((/* implicit */unsigned long long int) min((-7227174630277376328LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 1942324303)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26224))) : (987784585U))))));
    }
    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        arr_49 [i_13] = ((/* implicit */unsigned char) (signed char)-123);
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            arr_53 [i_13] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (var_13))), ((!(((/* implicit */_Bool) var_2))))))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)51116)) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187))))))))));
            arr_54 [i_13] [(_Bool)1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_36 [i_14] [(unsigned short)21] [i_13] [i_14])) | (((/* implicit */int) var_15)))));
        }
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) 1384789718U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_29 [i_13] [(signed char)7] [i_13] [i_13] [i_13] [i_13] [i_13])))))));
    }
}
