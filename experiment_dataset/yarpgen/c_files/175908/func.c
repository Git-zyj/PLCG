/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175908
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((short) arr_2 [i_0] [i_0]));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) % (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_6))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((arr_4 [i_1] [i_2] [i_3]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-102)))));
                                var_20 = arr_10 [i_0] [i_1] [i_2] [i_3] [i_4];
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18259)) ? (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1]))) : ((~(((/* implicit */int) (short)-3498))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 15097625244149154762ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [(unsigned char)9] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0] [0LL]));
                                var_23 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))))))) + (arr_3 [i_0])));
                    arr_19 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_1] [i_1]))));
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), (min((((/* implicit */unsigned int) arr_22 [i_7] [i_7])), (var_17)))))) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7] [i_7])))));
        arr_24 [10U] [i_7] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_7] [i_7])))) - ((-(((/* implicit */int) arr_22 [i_7] [11ULL]))))));
    }
    for (short i_8 = 2; i_8 < 8; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)180)) >> (((((/* implicit */int) (unsigned char)205)) - (177)))))));
        var_26 = arr_25 [i_8] [4];
        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-62)) / (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) arr_15 [i_8] [(short)12] [i_8 + 2] [i_8] [(short)15])) : (((/* implicit */int) max((var_8), (arr_0 [i_8]))))))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_16)) != (((/* implicit */int) (unsigned char)205))))), (((((/* implicit */_Bool) arr_2 [i_8] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7489))) : (7822127978176984730LL)))))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) ((unsigned char) (signed char)-62))))) : (((/* implicit */int) (short)32757))));
        var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8])) ? (arr_13 [i_8 - 1] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_10 [i_8] [i_8 + 1] [i_8] [i_8 - 2] [i_8 + 1])) : (((/* implicit */int) var_14))))), (min((((/* implicit */long long int) min((arr_22 [i_8] [i_8]), (var_2)))), (min((((/* implicit */long long int) (_Bool)0)), (5407561923756161564LL)))))));
    }
    var_30 = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) <= (-7822127978176984731LL)))), (var_16))))));
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 960858678U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_5))))))) : ((+(((/* implicit */int) (signed char)103))))));
}
