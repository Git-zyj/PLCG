/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146713
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [(_Bool)1] = (+(((/* implicit */int) (_Bool)1)));
        arr_4 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        arr_5 [i_0] [i_0] = ((16ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */signed char) arr_0 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2]))))), ((((~(((/* implicit */int) arr_11 [i_2])))) * (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-27353))))))));
        var_19 = ((/* implicit */unsigned long long int) (((((!(var_11))) ? (((((/* implicit */_Bool) (short)-27349)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (arr_10 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */long long int) arr_11 [(_Bool)1])), (var_10))))))));
        var_20 = ((unsigned long long int) max((((((((/* implicit */int) (signed char)-121)) + (2147483647))) >> (((((/* implicit */int) (short)1923)) - (1908))))), (((((/* implicit */int) (signed char)69)) | (((/* implicit */int) var_1))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41826)) | (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)60759)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41814)) ^ (((/* implicit */int) (short)-2432)))))))) ? (min((((/* implicit */unsigned int) -537363137)), (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12181))) : (arr_10 [i_3]))))) : (((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_13)))) ? ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -144753654)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_13 [i_3]))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)86))))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))) + (2430242865U))))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */int) arr_16 [i_4] [i_4] [i_3]))))) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_13 [i_3])))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
            var_24 = ((/* implicit */signed char) var_13);
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_21 [i_3] [i_3]), (arr_21 [i_3] [i_6]))))) * (((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-626968305)))) * (min((17717045346225405046ULL), (((/* implicit */unsigned long long int) (signed char)0))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 729698727484146561ULL)) ? (729698727484146582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) min((var_13), ((short)2543)))) ^ (((/* implicit */int) max((arr_23 [i_7] [i_6] [i_7]), (arr_23 [i_7] [(short)4] [i_7])))))))));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */short) ((((/* implicit */int) var_5)) == (((((/* implicit */int) ((_Bool) (unsigned short)30172))) * (((-626968305) - (((/* implicit */int) (_Bool)1))))))));
    var_29 |= ((/* implicit */int) ((var_10) / (((/* implicit */long long int) ((((/* implicit */int) (short)-32745)) - (max((1311835431), (626968304))))))));
}
