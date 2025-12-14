/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102652
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8605)) ? (((/* implicit */long long int) var_8)) : (var_12))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))))))))));
    var_15 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)32099)) ? (-7824869144637910977LL) : (((/* implicit */long long int) 2147483633)))) < (((/* implicit */long long int) ((((/* implicit */int) (signed char)-125)) ^ (((/* implicit */int) (short)-1247))))))) || (((((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((var_1) - (10444623609909277400ULL)))))) != (((((/* implicit */_Bool) (signed char)117)) ? (var_13) : (((/* implicit */long long int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((65011712U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))) ? (((arr_3 [i_0] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) & (((((/* implicit */long long int) ((-1115669794) & (((/* implicit */int) arr_0 [i_0] [i_0]))))) & ((~(var_13)))))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [(signed char)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))) % (((((/* implicit */_Bool) ((-6941753145577913491LL) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) arr_0 [i_2] [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)24]))) : (var_1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (70368744161280ULL)))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 2147483620))))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)13] [i_2] [(unsigned short)13])) ? (var_8) : (var_8)))))) : (((((/* implicit */_Bool) (~(var_8)))) ? ((~(arr_3 [i_0] [i_0]))) : (((/* implicit */long long int) (~(1342140627))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)31977)) || (((/* implicit */_Bool) 148548901U)))) ? (((((/* implicit */_Bool) -868850309)) ? (arr_9 [i_0] [i_0] [0LL] [0LL]) : (arr_1 [(short)9] [(short)9]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))) ? ((+((-(arr_1 [(signed char)17] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(982573289)))) ? ((+(var_8))) : (((/* implicit */unsigned int) (-(arr_7 [i_0] [i_1] [i_1] [i_0])))))))));
                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [8ULL] [i_1]))))) : ((+(((/* implicit */int) (unsigned short)48802))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (arr_7 [(unsigned short)24] [i_0] [(unsigned short)16] [i_1]) : (((/* implicit */int) (unsigned short)32109)))))))) : (((((/* implicit */_Bool) (~(-1034489437203295247LL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)16])) && (((/* implicit */_Bool) 11611881621333651268ULL)))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_7)))) ^ (((10138348446350884891ULL) - (((/* implicit */unsigned long long int) var_13))))))));
}
