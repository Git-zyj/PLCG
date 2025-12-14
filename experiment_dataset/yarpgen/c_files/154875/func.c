/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154875
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)3] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (4013945763U))), (((((_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))))) : (max((((/* implicit */unsigned int) var_2)), (var_6)))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (15011369012956991566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && ((!(arr_0 [i_0] [i_0])))))) << ((((+(min((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])), (var_0))))) - (108ULL))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (+(max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_4)))), (((1809258162U) ^ (((/* implicit */unsigned int) -512588200)))))))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((min(((_Bool)0), ((_Bool)0))) ? (((-7689014894257769249LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))))))))));
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 3733388531U)) ? (((/* implicit */unsigned long long int) 4294967273U)) : (4965278592419460821ULL)))))));
        var_16 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) (~(((/* implicit */int) arr_5 [(_Bool)0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            arr_9 [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) arr_3 [i_2] [i_3]))) + (2147483647))) >> (((2183779993U) - (2183779974U)))));
            var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_2 + 1])) & (((int) (_Bool)0))));
            arr_10 [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (0U)))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) arr_6 [i_2] [i_3])))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_2 - 1])))))));
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))));
        }
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (+(((arr_4 [i_2 - 1]) ? (1809258162U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    arr_24 [i_2 - 1] [i_2] [i_6] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)103))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)113)))))))) : (((((((((/* implicit */int) arr_18 [i_6])) + (((/* implicit */int) (signed char)-69)))) + (2147483647))) >> (((/* implicit */int) min(((unsigned char)4), (((/* implicit */unsigned char) (signed char)-100)))))))));
                    arr_25 [i_2 - 1] [i_5] [i_2] = ((/* implicit */_Bool) ((3435375060752560047ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))));
                    arr_26 [i_2 - 1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (short)24689))));
                }
            } 
        } 
        var_20 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_29 [(_Bool)1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15011369012956991568ULL)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) min((var_11), (((/* implicit */short) var_9))))) : (((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) var_4))))))), (min((((/* implicit */int) min(((_Bool)1), (arr_28 [i_7])))), (min((((/* implicit */int) var_11)), (1151012122)))))));
        var_21 -= ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) arr_28 [i_7])), (var_10))))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_28 [i_7])))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)95))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2137066225U)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) arr_27 [i_7] [i_7]))))) : (min((15011369012956991585ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        var_22 ^= ((/* implicit */signed char) ((min((((unsigned int) var_2)), (((/* implicit */unsigned int) max((var_10), ((signed char)100)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_7] [i_7]), (((/* implicit */short) (signed char)-36)))))) - (((unsigned int) (signed char)16))))));
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((~(3603415491U))) >> (((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) & (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (6319688756181304670ULL))))) - (72ULL))))))));
    var_24 |= ((/* implicit */unsigned long long int) ((int) var_9));
}
