/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179424
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
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4876))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_17)) >> (((/* implicit */int) arr_0 [i_0])))));
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) (short)3495))))) * (var_7))) >> (((((arr_1 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)17755)) <= (((/* implicit */int) var_3)))))))) - (10032044744614419483ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 -= ((((/* implicit */_Bool) ((arr_4 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) ((arr_1 [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) << (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_6)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (15392438592428141325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) var_14))))))))) ? ((-(arr_1 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_2 + 1] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 3026678333247042418ULL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4879)) ? (1120182391) : (((/* implicit */int) (_Bool)1))))) : (((12033954389549242845ULL) & (arr_1 [i_2 + 1] [i_2 + 1])))));
        var_22 = ((/* implicit */unsigned int) var_12);
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) max(((((_Bool)0) || (((/* implicit */_Bool) arr_7 [i_2 + 1])))), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_7 [i_2 + 1]))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_3 + 1])) ? (arr_1 [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) >> ((((~(((/* implicit */int) arr_11 [i_3 + 1])))) + (57)))));
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_3 + 1])) >= (((((arr_1 [(_Bool)1] [i_3]) == (var_2))) ? ((~(var_16))) : (((/* implicit */int) arr_0 [i_3]))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((arr_1 [i_6 - 1] [i_6]) << (((((arr_1 [i_6 - 1] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1]))))) - (10032044744614417363ULL)))));
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19421)) >> (((859260302) - (859260302)))));
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_6 - 1])) != (((/* implicit */int) arr_7 [i_3 + 1]))))) >= (((var_8) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_3]))))));
                        var_28 += ((/* implicit */short) min((((((/* implicit */int) var_3)) >> (((((/* implicit */int) (signed char)33)) - (14))))), (((/* implicit */int) (signed char)-34))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_29 -= ((/* implicit */unsigned int) 1139760826);
                            var_30 = ((/* implicit */signed char) (unsigned short)44246);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_31 [i_8] [i_3] = ((/* implicit */short) (unsigned short)28311);
                    var_31 = ((/* implicit */int) var_15);
                    var_32 += ((/* implicit */unsigned long long int) (unsigned short)58530);
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) 6444878478882246795ULL);
}
