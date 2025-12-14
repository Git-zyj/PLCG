/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166567
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
    var_20 = ((/* implicit */short) min((var_20), (var_14)));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((signed char) (-(622434320)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((-1), (((/* implicit */int) (signed char)-52)))))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(min((((unsigned long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) 1269020337U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [22LL] [i_0]))) : (var_3))))))))));
        var_23 ^= ((/* implicit */short) (~(((unsigned int) arr_1 [i_0] [i_0]))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_7))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) -622434318)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (7639365602206145783ULL))))))));
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (4032U)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        arr_4 [2] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_7)))) % (arr_0 [i_1] [i_1 + 1])));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) var_9))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(((arr_1 [10ULL] [i_2]) ? (2151356096144292868ULL) : (13268017797038150715ULL))))))));
                            var_29 += ((((_Bool) var_18)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */long long int) -1237762428))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_2))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 2336403436U)) ^ (2151356096144292868ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 622434312)) | (-4888376115151212906LL)))))))));
                            var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_21 [i_1 + 2] [i_1 - 2]))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 1] [i_1] [i_1]))));
        }
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (127896332U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1]))))))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) 5127087763167653762ULL))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_0 [i_9] [i_9]))));
        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) -1576008378753460849LL)) ? (1809536556) : (arr_0 [i_9] [i_9])))))));
        arr_25 [i_9] [5] &= ((/* implicit */unsigned char) ((((5127087763167653762ULL) >> (((((/* implicit */int) (signed char)67)) - (33))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(short)14] [i_9])))));
    }
}
