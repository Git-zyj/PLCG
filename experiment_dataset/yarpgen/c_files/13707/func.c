/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13707
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3782))))));
        var_21 = ((/* implicit */short) (_Bool)1);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_0 [i_0]))));
        var_23 &= ((/* implicit */_Bool) ((unsigned char) min((arr_1 [i_0 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_15 [(signed char)18] [(signed char)18] &= ((/* implicit */unsigned char) ((((arr_6 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13172))))) > (((/* implicit */long long int) (+(((/* implicit */int) (short)10049)))))));
                    var_24 = ((/* implicit */signed char) (+(187158436678229061ULL)));
                    arr_16 [(signed char)0] [i_2] [i_2] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44195))) : (arr_1 [i_1])))) ? (((/* implicit */int) ((((/* implicit */long long int) 0U)) == (411345090934447443LL)))) : (((/* implicit */int) (unsigned char)107))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_5 - 1])) >> (((/* implicit */int) arr_0 [4ULL]))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (unsigned short)2047))));
                    var_26 |= ((/* implicit */_Bool) (unsigned short)21340);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        arr_30 [(signed char)8] [i_6 + 1] [18] [i_7] [i_8] [i_8] |= ((/* implicit */short) (unsigned short)13172);
                        var_27 = ((short) -1951568698);
                        var_28 = ((/* implicit */signed char) ((arr_25 [i_1 + 1] [i_1] [17LL]) ? (((/* implicit */int) arr_25 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_25 [i_1 - 1] [9U] [i_1]))));
                        arr_31 [i_7] [i_6] [14U] [17] = ((/* implicit */signed char) ((arr_19 [i_6 + 1] [(short)0] [(short)0] [i_6]) / (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)138)))))));
                    }
                } 
            } 
        } 
        var_29 += ((/* implicit */signed char) (-(1224855682U)));
    }
    var_30 = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)2497))) * (2294904754U)))));
    var_31 = ((/* implicit */int) max((var_31), (((((int) min((((/* implicit */unsigned long long int) 2018981993U)), (var_0)))) ^ (((/* implicit */int) var_2))))));
    var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))))) ? (((/* implicit */int) ((_Bool) var_17))) : (((/* implicit */int) (signed char)115))));
}
