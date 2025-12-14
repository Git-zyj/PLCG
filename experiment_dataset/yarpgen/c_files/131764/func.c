/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131764
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1LL)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) -328849661723406144LL)) || (((/* implicit */_Bool) var_4)))))))) ? (min(((-(((/* implicit */int) var_4)))), (max((var_5), ((-2147483647 - 1)))))) : (max((((((var_3) + (2147483647))) << (((var_8) - (3089484340439267014ULL))))), (((/* implicit */int) ((unsigned short) (_Bool)0)))))));
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -1036338662))) ? (((((/* implicit */_Bool) max((var_11), (var_5)))) ? (min((((/* implicit */long long int) var_11)), (var_7))) : (((/* implicit */long long int) (~(1242771150)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)16383))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */int) ((unsigned int) -800659772));
        var_18 = ((/* implicit */unsigned char) (~(var_13)));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(var_11))))));
        var_20 ^= ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1])) == (var_1)))), ((+(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 + 2])), (var_8)))));
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4800829894681109083ULL)))))) : (var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) | (4864666422582331948ULL))) : (((/* implicit */unsigned long long int) var_5))));
        var_22 = min((((/* implicit */long long int) var_11)), ((~(-388984105407872623LL))));
    }
    for (signed char i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 3318663121U)), (((((/* implicit */_Bool) 3080336616666692319LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))) : (max((13685627529669685832ULL), (((/* implicit */unsigned long long int) arr_1 [i_2]))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_10)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)239)) ^ (1582208500))))));
                                arr_22 [i_2 + 2] [(unsigned char)16] [i_4] [(unsigned char)16] [i_2 + 2] = min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44787))) / (1979875791U)))), (((((/* implicit */_Bool) arr_12 [13LL] [13LL] [i_4])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_9)) : (var_2))) : (((/* implicit */long long int) 2147483647)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 ^= ((/* implicit */int) ((long long int) var_12));
}
