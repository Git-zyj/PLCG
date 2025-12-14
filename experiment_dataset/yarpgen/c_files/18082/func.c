/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18082
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
    var_11 ^= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */short) var_4);
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9062496050439097481ULL)) ? ((-(((/* implicit */int) (unsigned short)7569)))) : (((/* implicit */int) arr_8 [i_0] [i_1]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) max(((~((+(var_6))))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (short)-31170))))) ? (((/* implicit */int) (unsigned short)7596)) : (arr_0 [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_0] [(unsigned char)2]), (((/* implicit */short) arr_2 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (var_10) : (((/* implicit */unsigned long long int) 1882642255U)))) : (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57967)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_10 [(unsigned char)6] [i_1] [(unsigned char)6])));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((var_4), (((/* implicit */int) min((arr_12 [i_0] [(unsigned short)4]), (arr_12 [i_1] [(short)6])))))))));
                        var_16 = ((/* implicit */_Bool) ((max((var_1), (arr_11 [i_0] [i_4 - 1] [i_4 - 1] [i_4 + 2]))) * (((unsigned long long int) (short)28466))));
                    }
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62508))))) ? (((/* implicit */long long int) min((((/* implicit */int) min(((unsigned short)57967), ((unsigned short)57971)))), (min((arr_0 [i_1]), (((/* implicit */int) var_9))))))) : (max((((/* implicit */long long int) var_8)), (arr_10 [i_0] [i_1] [i_3]))))))));
                    var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)9872))))), (((((/* implicit */_Bool) (unsigned short)15358)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) : (arr_1 [i_0]))))))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 7; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7416804753356754247LL)) ? (((/* implicit */int) (unsigned short)7568)) : (((/* implicit */int) (unsigned short)0))))) | ((((!(((/* implicit */_Bool) (unsigned short)57983)))) ? (var_10) : (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_1] [i_6] [i_6] [i_6] [i_7 - 1]) : (arr_1 [i_1]))))));
                                var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2383065477U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (2383065494U)))) ? ((+(arr_21 [(_Bool)1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)236))))));
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12271548197009942411ULL))))), (arr_4 [i_0] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2114668811460075471LL)), (5544696396712531470ULL))))));
                                arr_24 [i_1] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 4727491211253259979ULL)) ? (((/* implicit */int) (unsigned short)64108)) : (((/* implicit */int) (unsigned short)47401)))) : (((/* implicit */int) var_9))));
                                var_22 &= ((/* implicit */unsigned short) ((8594627800318133887ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                            }
                        } 
                    } 
                } 
                var_23 ^= ((max((max((arr_11 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) 2383065477U)))), ((-(9818202612961701248ULL))))) + (((/* implicit */unsigned long long int) max((max((arr_7 [6ULL] [6ULL] [i_1]), (((/* implicit */int) (unsigned short)1435)))), (((/* implicit */int) arr_20 [6] [i_1] [i_1] [(signed char)10]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), ((((+(((((/* implicit */unsigned long long int) var_5)) / (17946756753258020385ULL))))) * (((/* implicit */unsigned long long int) var_6))))));
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_4)), (var_10)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((((/* implicit */_Bool) 9146037989533476326LL)) ? (var_4) : (((/* implicit */int) (short)-7023)))))) : (var_5))))));
}
