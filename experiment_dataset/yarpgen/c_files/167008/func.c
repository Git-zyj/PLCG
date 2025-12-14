/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167008
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_1 [i_0])))));
            var_12 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | ((-(((/* implicit */int) (unsigned short)0))))));
            var_13 ^= ((/* implicit */short) 1209755248U);
            var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((long long int) (short)3));
            var_16 = ((/* implicit */signed char) var_10);
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)3))));
            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) var_8)) : (((int) -1538531015))));
        }
        for (int i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            arr_14 [(short)12] |= ((/* implicit */long long int) (-(arr_13 [i_0 + 1] [i_0 - 1] [14LL])));
            arr_15 [i_0] [i_0] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_3]))) - (var_5));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8390407057638856621LL)) ? (((/* implicit */unsigned int) ((int) arr_6 [i_0] [(unsigned char)2]))) : (arr_6 [i_0] [i_0 - 1])));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) ((short) (unsigned char)48))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
    }
    for (int i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) ((long long int) arr_17 [i_4])))), ((((!((_Bool)1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))));
        arr_19 [(_Bool)0] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) var_8))), (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_17 [i_4 - 2]))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_4 - 2] [i_4]) >= (((/* implicit */long long int) 1725327349)))))) ^ (((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_18 [i_4 - 2] [i_4 + 1]) : (arr_18 [i_4 - 2] [i_4 - 2])))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_6)) ? (-725585532) : (((/* implicit */int) (short)2)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
    var_23 = ((/* implicit */_Bool) max((var_2), (var_2)));
    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)9)), ((~(((/* implicit */int) (signed char)109))))))) >= (((((/* implicit */_Bool) min(((unsigned short)65523), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)21)), ((unsigned short)65523))))) : (3357900058668078197LL)))));
}
