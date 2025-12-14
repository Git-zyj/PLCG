/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156708
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
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (+(989312084U)))), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) -1248301965);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [6U] [6U] [i_2] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_14 = ((/* implicit */_Bool) ((((unsigned int) var_10)) << (1ULL)));
                                var_15 ^= (((!((_Bool)0))) ? (11681074698422755044ULL) : (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [4]))));
                                arr_15 [i_0] [i_1] [i_1] [10] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_3] [i_2] [i_4])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
            var_17 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0]);
        }
        var_18 = ((/* implicit */unsigned long long int) var_7);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_6] [i_6] [3LL] [6ULL] = ((/* implicit */long long int) (short)-4);
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1342373899)), (18446744073709551615ULL)))) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [(_Bool)1] [i_6])) && (((/* implicit */_Bool) arr_6 [i_6] [4]))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    var_20 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) max((arr_27 [i_10] [9ULL] [i_6]), (((/* implicit */unsigned int) arr_22 [10U]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10])) ? (((/* implicit */int) arr_23 [i_6] [(_Bool)1])) : (arr_12 [i_10] [i_10] [i_10] [i_10] [(_Bool)1])))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_10]))))));
                    arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_6]) / (18446744073709551604ULL)))) ? (((((/* implicit */_Bool) (short)11)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32476))))) : (((/* implicit */unsigned long long int) arr_30 [i_6])))));
                    arr_34 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 7289041156770921060LL)) ? (((/* implicit */unsigned long long int) arr_26 [i_10] [i_10] [i_6] [i_6])) : ((+(11489402130221898013ULL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_12 [i_6] [i_9] [0] [(_Bool)1] [i_6])))))))) : (min((((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (min((var_5), (((/* implicit */unsigned int) (_Bool)1))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) 1713469214U);
        arr_35 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_9)), (var_6))), (((/* implicit */unsigned long long int) (~(-7289041156770921050LL))))))) ? (((unsigned int) ((unsigned long long int) 7031153687990832608LL))) : (1401784302U)));
    }
    var_22 = ((/* implicit */_Bool) var_3);
}
