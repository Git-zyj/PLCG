/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120723
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
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3694483870U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3550483336U)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) 2081621141U)) : (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) 6182919708171692501LL)) : (var_8)))) ? (min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) 1694575361U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1)) == (1694575361U)))))))) ? ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (4080719248120580546ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (11ULL))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)86)), (1761675839))))))) ? (((/* implicit */long long int) 2081621162U)) : (max((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)22168))));
                        var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_3 - 1] [8LL] [i_3 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [6U] [i_1 + 2] [i_0] [i_3 + 2])) / (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_6 [i_1 + 1] [i_0] [i_3 - 1]))));
                        var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_9 [i_1 + 2] [i_1] [i_2] [i_2] [i_2 + 1]), (arr_9 [i_1 - 1] [i_1 + 1] [i_1] [(unsigned char)2] [i_2 - 1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */long long int) 2081621125U)) : (1152358554653425664LL)));
        var_22 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_12 [i_4 - 2])), (((arr_12 [i_4 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 1]))) : (6327592214100193411LL)))));
        arr_14 [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4])) | (((/* implicit */int) arr_8 [i_4 + 2] [i_4] [i_4] [i_4 + 1]))));
        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_24 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) 8229742379809352719LL)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_16 [i_5]) : (arr_16 [i_5])));
        var_26 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
    {
        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned char)27))) ? (((((/* implicit */_Bool) (short)32438)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_15 [i_6])))) : (((/* implicit */int) arr_18 [i_6 + 2]))));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_25 [(_Bool)1] [i_7 - 1] [i_8] = ((/* implicit */unsigned char) ((arr_17 [i_6] [(_Bool)1]) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_8])))))));
                    var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (var_11) : (arr_17 [i_6 - 2] [i_7 - 1])));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((392138141U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned short)6]))))) ? (arr_17 [i_6] [17ULL]) : (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (281474976710624ULL)))))));
    }
    var_30 = ((/* implicit */unsigned char) min((min((18446462598732840991ULL), (((/* implicit */unsigned long long int) max((var_3), (var_4)))))), (((/* implicit */unsigned long long int) var_0))));
    var_31 *= ((/* implicit */unsigned char) var_6);
}
