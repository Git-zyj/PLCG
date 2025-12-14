/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157328
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
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3137188907U)) + (776957578774128309LL)))) ? ((-(((/* implicit */int) (unsigned short)653)))) : (((/* implicit */int) (short)2016))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) var_3))))) ? (8252544116890988966LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_7)), (4172221901839743292ULL))))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (max((min((((/* implicit */long long int) var_2)), (776957578774128296LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_3)))))))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_2))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)60292)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 776957578774128309LL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_1))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((-776957578774128284LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */_Bool) (unsigned short)653);
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
    {
        var_24 = ((/* implicit */_Bool) (-(((16062442886082671463ULL) - (((/* implicit */unsigned long long int) var_8))))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) ((arr_9 [i_2]) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))) >> (((((arr_12 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)13357))))) - (4280552375U)))));
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_24 [i_2] [i_2 + 2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) arr_22 [i_2] [i_3] [i_4] [i_5] [i_6]);
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6 - 3])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (unsigned short)64888))))) ? (((776957578774128296LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) arr_14 [i_2] [i_2 - 3]))));
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((arr_18 [i_2 - 1] [i_2 + 2] [i_2 + 1]) ? (((((/* implicit */_Bool) arr_17 [(short)16] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_2] [14U]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((arr_15 [i_2] [i_2]) - (2984338377U)))))))))));
                            }
                        } 
                    } 
                    var_28 = arr_22 [i_2] [i_2] [i_2 - 2] [i_3] [i_3 + 2];
                    var_29 = ((/* implicit */short) ((1621083671U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1])))));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (+(arr_15 [i_2] [i_2 + 2]))))));
                    var_31 = ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? ((~(2495951353U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_32 -= ((/* implicit */unsigned int) max((((unsigned long long int) arr_25 [i_7])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) (signed char)-117)))))));
        var_33 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7]))) : (var_16))), (((/* implicit */long long int) arr_25 [(short)14]))));
        arr_27 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7])))))) != (7947174230002714291ULL)));
        var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((-(((/* implicit */int) arr_25 [i_7]))))))) - ((((!((_Bool)1))) ? (((/* implicit */int) max((arr_26 [i_7]), (arr_25 [i_7])))) : (((/* implicit */int) arr_26 [i_7]))))));
    }
}
