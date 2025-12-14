/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113286
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((6280886641137045333ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21522))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21523))))) & (((/* implicit */unsigned long long int) (~(var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21522)) & (arr_0 [i_0] [i_0])))) ? ((-(((/* implicit */int) (short)21505)))) : (((((/* implicit */int) arr_1 [i_0] [9LL])) - (var_6)))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (short)-21523)) - (((/* implicit */int) (short)21543)))) : (((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_0] [6]))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -5780853078519245418LL)) || ((_Bool)0)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((17122559531637305352ULL) ^ (((/* implicit */unsigned long long int) 0))))) && (((/* implicit */_Bool) arr_4 [i_1]))));
        var_19 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_3 [i_1])))) ^ (var_4)));
    }
    for (short i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((((/* implicit */int) arr_8 [i_2 + 1])) & (((/* implicit */int) (short)21543)))), (((/* implicit */int) (short)18)))))));
                        var_21 = ((/* implicit */long long int) (-(min((((/* implicit */int) (unsigned short)65515)), (arr_0 [i_2 - 1] [i_3 - 2])))));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) -9223372036854775805LL)), (arr_11 [1] [(_Bool)1] [1])))))) ? (((/* implicit */int) arr_1 [i_4] [i_2])) : ((~(-1545687790)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) min((1324184542072246264ULL), (17122559531637305351ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_2]))))) : (min((arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (6679847907476103329LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18)) ? (arr_0 [6] [i_2]) : (((/* implicit */int) (short)-21523))))))))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((673117864285421524ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))))))) : (var_11)))) ? (min((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) (-(var_7)))) ? ((-(var_3))) : (min((((/* implicit */int) (short)32760)), (1545687789)))))));
    var_25 = ((/* implicit */int) (unsigned char)224);
}
