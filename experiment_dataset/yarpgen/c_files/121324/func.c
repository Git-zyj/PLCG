/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121324
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : (((long long int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((0ULL) <= (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) 8LL)), (11ULL)))))));
                        var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 0LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_9)))) >> (((((/* implicit */_Bool) (short)-7)) ? (4LL) : (((/* implicit */long long int) var_1)))))) >> (((((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7))) : (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_2] [i_3])))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 17)), (arr_8 [i_0] [i_0] [i_3] [i_3] [i_2] [i_1])))) ? (4LL) : (16LL)));
                        var_17 = ((/* implicit */long long int) arr_0 [(_Bool)1]);
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 3; i_4 < 20; i_4 += 2) 
    {
        var_18 += ((/* implicit */unsigned char) var_6);
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) (~(arr_10 [i_4 - 3])))) & (((((/* implicit */long long int) arr_10 [i_4 - 1])) | (0LL)))));
        var_20 = ((/* implicit */unsigned short) arr_10 [i_4]);
        var_21 = ((/* implicit */unsigned char) arr_11 [i_4]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 18; i_6 += 4) 
            {
                {
                    var_22 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))));
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [(short)20] [i_6])) + (2147483647))) >> (((/* implicit */int) arr_11 [i_4]))));
                    var_24 = ((/* implicit */unsigned long long int) ((int) (+(((((/* implicit */int) arr_11 [i_4])) & (((/* implicit */int) arr_18 [i_4 + 1] [i_5] [i_4 + 1])))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 9U)))))))) - (4ULL)));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_17 [i_7])) ? ((-(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (0) : (((/* implicit */int) arr_14 [i_7]))))))));
        var_27 = ((/* implicit */unsigned long long int) -16LL);
    }
    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_11 [(unsigned short)20])) : ((-(arr_20 [i_8] [i_8])))))) - (max((((/* implicit */long long int) arr_21 [8ULL])), (arr_2 [i_8] [i_8] [i_8])))));
        var_29 = ((((/* implicit */_Bool) (unsigned char)253)) ? (0LL) : (((/* implicit */long long int) 0)));
        var_30 = ((((/* implicit */_Bool) max((((unsigned int) var_7)), (arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (max((((/* implicit */unsigned long long int) (~(var_2)))), (((unsigned long long int) var_3)))) : (((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_3 [i_8] [i_8] [i_8]))))));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_0 [i_8])), (arr_8 [i_8] [i_8] [i_8] [i_8] [(short)4] [i_8]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)30))))) <= (var_9))))))))));
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_8] [i_8] [i_8])) ? (arr_3 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
    }
    var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) -17LL)) > (0ULL))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) + (138))))))))) : (((((/* implicit */int) var_6)) / (((int) var_7))))));
    var_34 = ((/* implicit */unsigned int) ((signed char) (((+(0U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (-17) : (((/* implicit */int) (_Bool)1))))))));
}
