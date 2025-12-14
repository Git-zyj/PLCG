/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159053
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-32))))) | (min((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (9985867831291122572ULL))), (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) (unsigned char)158)))))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 8460876242418429043ULL))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 8460876242418429043ULL)) ? (((/* implicit */unsigned long long int) 3286294512U)) : (8460876242418429043ULL))), (((/* implicit */unsigned long long int) arr_1 [i_1])))) > (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_12))))));
                        var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_2 [i_2])))) / (((/* implicit */int) var_10))));
                        var_18 *= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_0]))) & (0LL))) % (min((var_8), (((/* implicit */long long int) var_13))))));
                        var_19 = max((((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_0])) ? (9985867831291122572ULL) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1008672783U)) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_10))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)104)) ? (4050493020147954451LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * (7964550638988799053ULL)));
                        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((min((6018465651779187739ULL), (((/* implicit */unsigned long long int) 2391313458U)))) > (9985867831291122572ULL)))) * (((/* implicit */int) (unsigned short)41270))));
                        arr_20 [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_4]))) % (((/* implicit */int) var_11))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 1818445126U))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_7] [(unsigned char)13] [i_7] [i_7])) + (((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_15 [i_7] [i_7] [i_7])) >> (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_2 [i_7]))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)20))));
        arr_25 [i_7] = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_7] [i_7]));
        var_24 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned char i_8 = 4; i_8 < 15; i_8 += 2) 
    {
        var_25 ^= ((/* implicit */long long int) (+(((/* implicit */int) min((arr_8 [i_8 - 1] [(short)4] [i_8 - 3] [i_8 + 2]), (arr_8 [i_8 - 2] [i_8] [i_8 + 2] [i_8 - 3]))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_17 [i_8 + 1]))) / (((var_3) ? (((/* implicit */int) arr_26 [i_8 + 2])) : (((((/* implicit */int) (signed char)-104)) * (((/* implicit */int) arr_2 [(_Bool)1]))))))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (((~(15554302945122915778ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-11165)))))))))));
        var_28 = ((/* implicit */_Bool) min((((var_10) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (((/* implicit */int) (unsigned char)216)))), ((+((+(((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 4; i_10 < 15; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    {
                        arr_40 [i_12] [i_12] = ((/* implicit */signed char) (+(arr_32 [i_10 - 2])));
                        var_29 = ((/* implicit */unsigned char) (_Bool)0);
                        var_30 = ((/* implicit */unsigned char) arr_12 [i_11] [i_10 - 1] [i_9]);
                    }
                } 
            } 
        } 
        arr_41 [i_9] = (~(((/* implicit */int) arr_22 [(_Bool)1] [i_9])));
        arr_42 [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51017))));
    }
    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        arr_45 [i_13] = ((/* implicit */unsigned char) arr_43 [i_13] [i_13]);
        arr_46 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) -3536749422386714328LL)) ? (9985867831291122572ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_31 += ((/* implicit */long long int) ((((((/* implicit */int) arr_43 [i_13] [i_13])) | (((/* implicit */int) var_3)))) * (((/* implicit */int) arr_43 [i_13] [i_13]))));
        var_32 = ((/* implicit */unsigned char) (!(arr_44 [i_13] [i_13])));
    }
    var_33 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24265))) + (var_12))))) - (8460876242418429043ULL)));
    var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((-105103315), (((/* implicit */int) (signed char)103))))) - (min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_7))))), (min((((/* implicit */unsigned int) (signed char)75)), (var_1)))))));
}
