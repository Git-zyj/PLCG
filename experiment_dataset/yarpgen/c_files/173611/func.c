/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173611
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
    var_11 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2147475456U)))) | (var_4))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 -= max((((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((((/* implicit */_Bool) 412206967428454997ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0]))))))), (((((/* implicit */_Bool) ((long long int) arr_6 [i_2] [(unsigned char)8]))) ? (var_7) : (var_7))));
                    var_13 = ((((/* implicit */_Bool) max((((unsigned int) (unsigned short)31090)), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (unsigned short)10194)))))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_1])), (var_10))) : (((/* implicit */unsigned long long int) var_9)));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) ((unsigned char) 11590335440609272716ULL))) - (((/* implicit */int) (!(((/* implicit */_Bool) -7342959307809600125LL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_14 -= ((/* implicit */unsigned char) ((((arr_10 [i_3 + 1] [i_1 - 2] [i_2] [i_3] [i_3 - 1]) & (arr_10 [i_3 - 1] [i_1 + 1] [i_2] [i_3] [i_1]))) << (((max((var_4), (((/* implicit */long long int) (unsigned short)34445)))) - (34407LL)))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((1936327418102019112LL) / (((/* implicit */long long int) 2842120445U)))), (1LL)))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))));
                    }
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(1452846846U)))))) ? (((arr_8 [i_0] [(_Bool)1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1LL)))) : (((arr_11 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) -2LL)))))) : (min((min((var_7), (16199491528480950415ULL))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_10)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_15 [i_0] [8U] [i_4] &= ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0]);
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned short)34445))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) (unsigned short)34446);
            var_18 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31115)) ? (2842120445U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10112)))))), (11LL))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((16199491528480950399ULL), (((/* implicit */unsigned long long int) arr_7 [i_5])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), ((-(arr_24 [i_7 - 1] [i_6] [i_7] [i_8])))));
                        var_21 |= ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_7 - 1])) ? ((~(var_10))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])));
                    }
                } 
            } 
            arr_25 [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) + (((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (arr_22 [i_6] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34420)))))));
            arr_26 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -655218977))));
        }
        arr_27 [i_0] = ((max((((/* implicit */long long int) ((var_3) ? (1322263734U) : (1452846855U)))), (((long long int) arr_13 [i_0] [i_0])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)31089)) : (478924802)))));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_2))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8))) >> (((var_5) + (1764739512)))))));
}
