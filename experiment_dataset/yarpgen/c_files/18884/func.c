/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18884
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
    var_12 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-37)), (991831581)))) + (min((((/* implicit */unsigned int) (signed char)-23)), (4263942286U)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 31025010U)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-59))));
        arr_4 [(signed char)10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_0 [6LL] [6LL])))))) ? (((/* implicit */int) (signed char)59)) : (((int) arr_0 [i_0 - 1] [i_0 + 2]))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                var_13 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_1] [i_1]))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_8 [6U]))))) ? (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_7 [i_1] [i_2 + 4] [i_3])) : (((/* implicit */int) (signed char)-50)))) : (((/* implicit */int) arr_8 [12LL])))))));
            }
            for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_2 - 1] [i_4 + 1] [i_5] [i_6 - 1] [i_6 - 1])) ? (arr_11 [i_1 - 1] [i_2 + 4] [i_4 - 2]) : (((/* implicit */int) arr_16 [i_1 + 1] [i_2 + 1] [i_4 - 2] [i_5] [i_6 - 1] [i_6])))));
                            var_16 = ((/* implicit */signed char) (((+(max((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) (unsigned short)23)))))) != (min((((/* implicit */int) ((((/* implicit */int) (signed char)-120)) == (((/* implicit */int) (unsigned short)32359))))), ((+(((/* implicit */int) (unsigned short)27389))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min(((-(((((/* implicit */int) arr_18 [(unsigned short)1] [i_5])) / (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1])))))), (((/* implicit */int) min((min(((unsigned short)16460), (((/* implicit */unsigned short) (signed char)-102)))), (((/* implicit */unsigned short) ((signed char) (signed char)3)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_18 = ((/* implicit */signed char) (+(((unsigned int) arr_18 [i_1] [i_2 - 3]))));
                    arr_22 [i_1] [i_1 - 1] [i_2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_2]))));
                    arr_23 [i_2] [(unsigned short)17] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 242019058)) ? (((/* implicit */int) (unsigned short)35735)) : (((/* implicit */int) (unsigned short)10136))))) ? (((/* implicit */int) ((signed char) (signed char)-99))) : (((-824731274) + (((/* implicit */int) (signed char)6))))));
                }
                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) (signed char)1))) ? (((/* implicit */int) ((unsigned short) (signed char)10))) : (((((/* implicit */_Bool) (signed char)114)) ? (1559214118) : (((/* implicit */int) (signed char)1)))))), (((/* implicit */int) min((arr_10 [i_4 - 3] [i_2 + 1] [i_1] [i_1 + 1]), (arr_10 [i_4 - 1] [i_2 + 1] [i_2] [i_1 - 1]))))));
            }
            arr_24 [(_Bool)1] [i_2] [i_2] = (+((-(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-7)))))));
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            var_20 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_20 [i_8] [i_8 - 1] [i_8] [i_8] [i_8])));
            arr_27 [i_8] [i_8 - 1] [i_1 + 1] = ((/* implicit */unsigned short) (-(arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
        }
        var_21 &= ((/* implicit */_Bool) min((((/* implicit */int) (!(((_Bool) 16383))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6874462292305660563LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))) ? (max((((/* implicit */int) (unsigned short)1286)), (824731274))) : (((/* implicit */int) arr_20 [(signed char)4] [i_1 + 1] [i_1 - 1] [i_1] [(signed char)4]))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 2; i_9 < 22; i_9 += 4) 
    {
        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [i_9]))) : (arr_29 [i_9] [i_9 + 3])))) ? (arr_29 [i_9 + 2] [i_9 - 2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))));
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9 - 2]))));
        var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) (unsigned short)11407)) ? (8437846719226400283LL) : (((/* implicit */long long int) 4294967281U)))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)50)) + (-1882030231))))));
        var_25 *= ((/* implicit */signed char) arr_29 [i_9] [i_9 + 1]);
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59783)) ? (((int) (unsigned short)14131)) : (((/* implicit */int) ((unsigned short) (signed char)-114)))));
    }
    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
    {
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((((((((/* implicit */_Bool) (unsigned short)11407)) ? (((/* implicit */int) arr_7 [i_10] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)39860)))) / ((~(((/* implicit */int) (_Bool)0)))))), (max((((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (_Bool)1)))), ((+(-272623725))))))))));
        var_27 = ((int) arr_17 [i_10] [i_10] [i_10] [i_10 + 1]);
    }
}
