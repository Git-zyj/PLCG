/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110313
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) (+(386552327)));
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0 + 1])))) ? (((/* implicit */int) ((arr_2 [i_0 - 2]) == (arr_2 [i_0 + 2])))) : (((arr_2 [i_0 - 1]) ^ (((/* implicit */int) (unsigned char)6))))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(max((7449912930502351745ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (+(((((/* implicit */_Bool) 15872U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-61))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> ((((-(((-962487810) / (((/* implicit */int) (short)768)))))) - (1253231)))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_8 [i_2] = var_3;
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 4) 
        {
            arr_13 [i_2] [12ULL] [i_3] = arr_12 [i_3];
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2088960U)), (var_4))))))), ((((-(var_8))) >> ((((~(((/* implicit */int) (short)27093)))) + (27100)))))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (short)32760))));
                        arr_21 [4ULL] [i_3] [8ULL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)768)), (1376258490U)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551604ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4668750719577039795ULL) <= (16128282587574650781ULL)))))));
                        var_16 = ((/* implicit */int) ((((13777993354132511836ULL) ^ (((/* implicit */unsigned long long int) arr_14 [(short)13] [(short)13])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_9 [(short)12] [i_2])))))));
                        var_17 = ((/* implicit */signed char) max((((unsigned int) (~(arr_9 [i_3] [i_3])))), (((/* implicit */unsigned int) -1))));
                    }
                } 
            } 
            arr_22 [i_2] = ((/* implicit */long long int) -19);
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_25 [i_2] = ((/* implicit */long long int) ((6877052815791002543LL) != (5342501853394129699LL)));
            arr_26 [i_2] = ((/* implicit */unsigned long long int) (~(((arr_4 [i_2]) | (arr_4 [i_2])))));
            var_18 = 1242183634U;
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                arr_33 [i_2] [i_2] [i_7] [i_8] = ((/* implicit */unsigned long long int) (((((+(arr_15 [i_2] [i_7] [(unsigned char)4] [i_8]))) - (((/* implicit */unsigned int) max((arr_11 [i_2] [i_2]), (((/* implicit */int) var_0))))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_42 [i_2] [i_2] [14ULL] [i_9] [i_10] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) var_2))))))), (((((/* implicit */_Bool) (~(arr_24 [i_2] [i_8] [i_10])))) ? (arr_9 [i_8] [i_10]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-17121)), (arr_2 [i_9])))))));
                            arr_43 [i_10] [i_7] [i_8] [i_9] [i_2] = ((/* implicit */unsigned short) (((~(arr_35 [i_2]))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_7] [i_8] [i_2])) && (((/* implicit */_Bool) ((arr_17 [i_2] [8LL] [i_2] [i_2]) << (((2755802947215713030LL) - (2755802947215712979LL)))))))))));
                            arr_44 [i_2] [i_2] [0U] [i_7] [i_10] [i_9 + 2] [(short)0] = ((/* implicit */unsigned long long int) arr_34 [i_8] [i_8] [i_8] [i_9 - 1] [i_9 - 1] [(short)11]);
                            arr_45 [i_2] [i_2] [i_9] = ((/* implicit */unsigned int) ((((arr_0 [i_9 - 1]) / (arr_0 [i_9 - 1]))) ^ (((/* implicit */long long int) arr_23 [i_9 + 2]))));
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(2943642593U)))) == (arr_12 [i_2])))), (5837335753891247771ULL)));
            arr_46 [i_2] [i_7] [i_2] = ((/* implicit */_Bool) (short)-8439);
        }
        arr_47 [i_2] = ((/* implicit */signed char) 1970585817);
    }
    var_20 = ((/* implicit */unsigned char) var_0);
}
