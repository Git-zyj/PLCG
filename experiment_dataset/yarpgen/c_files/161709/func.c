/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161709
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
    var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)62907)));
    var_21 = (unsigned short)65522;
    var_22 = ((/* implicit */unsigned short) -6557252917724993892LL);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [12] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)120)) - (((/* implicit */int) (_Bool)1))));
        var_23 -= ((/* implicit */int) (((~(max((((/* implicit */long long int) var_9)), (-8017795167216345029LL))))) | ((+(((((/* implicit */_Bool) (short)-11937)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [(signed char)9])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_24 = ((/* implicit */long long int) arr_5 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned int) arr_4 [i_1]));
    }
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((int) var_14));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4])) || (((/* implicit */_Bool) arr_15 [(signed char)11] [(signed char)11] [7LL]))))), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_5]))) : (((((/* implicit */_Bool) (-(arr_9 [i_3] [i_3])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_4] [i_2] [i_2]))) / (arr_9 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((int) var_5)))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_5]))) % (arr_11 [(_Bool)1])))))));
                    }
                } 
            } 
        } 
        arr_18 [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20233)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */long long int) max((((/* implicit */int) max((max((((/* implicit */unsigned short) var_11)), (var_7))), (((/* implicit */unsigned short) ((unsigned char) var_7)))))), (((((/* implicit */_Bool) var_19)) ? (arr_20 [i_6]) : (-1477039756)))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_28 = ((/* implicit */_Bool) ((max((arr_13 [i_6]), (var_10))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_3) : (arr_14 [i_7] [i_6] [i_6]))))));
            arr_24 [i_7] [i_6] [i_6] &= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_16)), (arr_20 [i_6])))))));
            arr_25 [i_7] [i_7] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) var_6)))))));
        }
    }
}
