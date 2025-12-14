/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169372
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) var_11)) : (min((var_14), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_11)) : (16776704LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7195047062203651442LL)) || ((_Bool)1))))) : (arr_0 [i_0 + 1] [i_0 - 3])));
        var_18 = arr_1 [i_0];
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (7195047062203651442LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)63)), (3497279608U))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 + 2] [i_2 + 2])) || (var_16)));
            var_20 = ((/* implicit */signed char) ((arr_0 [i_2 + 2] [i_1]) | (var_14)));
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
            {
                for (short i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)-1))) ? (7195047062203651418LL) : (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_16)))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_13 [i_5] [i_1] [i_3] [i_2 - 2] [i_1] [i_1 - 1]) : (((/* implicit */long long int) ((int) (signed char)86)))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-7195047062203651434LL) ^ (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 1152921504604749824LL)) ? (267386880U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]))));
            var_24 = ((/* implicit */int) ((long long int) arr_11 [i_2 - 1] [i_2 + 2] [12U]));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 4) 
    {
        arr_18 [i_6 - 1] = ((arr_17 [i_6 - 3]) ? (((/* implicit */int) arr_17 [i_6 + 2])) : (((/* implicit */int) arr_17 [i_6 + 1])));
        arr_19 [0U] = ((((/* implicit */_Bool) 785167375U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)127)));
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_6 + 2])) ? (((/* implicit */int) arr_16 [i_6 + 1])) : (((/* implicit */int) arr_17 [i_6 - 4]))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 484402802)) ? (((/* implicit */long long int) -2147483629)) : (7195047062203651446LL)));
        arr_20 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [20U])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6])))))) : (203196423376882959LL)));
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((4294967285U) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) ? (min((((/* implicit */unsigned long long int) var_9)), (((var_7) % (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    var_28 = ((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((12488256285523534950ULL), (((/* implicit */unsigned long long int) var_13))))) ? (((var_15) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14)))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (var_3)))) | (min((var_7), (13005691266132272826ULL)))))));
}
