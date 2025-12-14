/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1824
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
    var_13 ^= ((/* implicit */unsigned int) var_10);
    var_14 &= ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned short)65529)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) (short)30166)))) : (((/* implicit */int) ((unsigned short) (short)30166)))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_5), ((short)30140)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) (-(var_12)));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) min(((unsigned short)53891), (((/* implicit */unsigned short) arr_1 [(unsigned short)3])))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_17 *= ((/* implicit */short) var_6);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [2ULL] [i_1])) <= (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    for (short i_4 = 3; i_4 < 8; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (_Bool)1))))) & (((((unsigned int) var_12)) << ((((-(286047091083540308ULL))) - (18160696982626011278ULL)))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_12 [i_1] [i_2] [i_3]), (((/* implicit */short) (_Bool)0)))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [(short)3]))));
                        arr_17 [i_4 - 3] [i_1] [i_2] [i_1] &= ((/* implicit */short) (-(min(((-(((/* implicit */int) (short)4708)))), ((-(((/* implicit */int) var_10))))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (short)-30166))));
                        var_20 = ((/* implicit */unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)30156)))))))));
                        var_21 = var_1;
                    }
                    for (unsigned short i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) ((((_Bool) arr_22 [i_1] [i_2] [i_6 + 2] [i_6] [i_2] [(short)0])) ? (((((/* implicit */_Bool) max((arr_14 [i_1] [i_1] [i_2] [i_1] [i_3] [i_6]), (((/* implicit */unsigned int) arr_10 [i_1] [i_1]))))) ? (min((0ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)741)))))) : (((/* implicit */unsigned long long int) 3777255402U))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(arr_20 [i_1] [i_1]))))));
                        var_24 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) + (12380181121434324868ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26314))) : (arr_23 [i_6 + 1] [i_6] [i_6] [i_6 + 1])))) ? (arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_1] [i_1] [i_3] [i_7] [i_7] [i_8] [i_8] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 126100789566373888ULL)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_6 [i_2] [i_8]))))) ? (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (short)21842)) : (((/* implicit */int) arr_0 [i_2] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_8])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_6 [i_7] [i_8]))) && (((/* implicit */_Bool) ((short) arr_24 [i_1] [i_1]))))))) : (arr_18 [i_1] [i_2] [i_3] [i_7] [i_8] [i_8])));
                                arr_31 [i_1] [i_8] [i_3] [i_2] [i_1] [0U] [i_2] = ((/* implicit */short) (-((~(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)50511)))));
        var_27 += ((/* implicit */unsigned int) var_5);
    }
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) min((2117860948U), (((/* implicit */unsigned int) (unsigned short)31937))));
        var_29 = ((/* implicit */_Bool) (((~(((/* implicit */int) ((((/* implicit */int) (short)30180)) < (((/* implicit */int) var_5))))))) | (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9])))), ((_Bool)1))))));
        arr_34 [i_9] = ((/* implicit */short) 1655713344U);
        var_30 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14476829651394487582ULL)) ? (((/* implicit */int) (unsigned short)31927)) : (((/* implicit */int) (unsigned short)37914))))), ((-(var_3))))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_28 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) >> (((((/* implicit */int) arr_0 [i_9] [i_9])) + (28500))))), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (short)19901)))))))) : (var_3)));
    }
    var_32 = (((~(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_1))))))) != (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57500))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11)))));
}
