/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145377
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)6] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (4398046511103LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_5))))));
            var_12 = ((/* implicit */long long int) var_0);
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) (signed char)7))))) || (((/* implicit */_Bool) (-(var_1))))))), ((~((+(((/* implicit */int) (signed char)7))))))));
        arr_6 [2LL] = ((/* implicit */long long int) var_9);
        var_13 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_3 [(_Bool)1] [(_Bool)1] [i_0]) ? (2097151LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) var_7))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_7 [5ULL] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) (short)2047)) >> (((var_5) - (204026582U))))))) != (((((/* implicit */int) (!(arr_3 [i_2] [i_2] [i_2])))) & (max((((/* implicit */int) var_10)), (var_0)))))));
        arr_9 [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))))) + (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2] [(unsigned short)14])) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-4)) : (arr_8 [i_2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        arr_12 [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [(unsigned short)13] [(unsigned short)13])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_3]))) & (((/* implicit */unsigned long long int) arr_8 [i_3]))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_5))) == (arr_10 [i_3] [i_3])));
        var_15 = ((/* implicit */unsigned char) var_11);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((arr_17 [i_3] [i_3]) ^ (((/* implicit */unsigned long long int) (+(var_3))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_2))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        for (int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) arr_22 [i_6])) : (var_9))), ((+(((/* implicit */int) arr_22 [i_6]))))))) ? (((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) arr_26 [i_7])))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((-2097140LL) >= (arr_24 [i_6] [i_7] [i_6]))))));
                var_19 = ((/* implicit */int) 12LL);
                var_20 *= ((/* implicit */short) -2097166LL);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((var_0) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (var_10)))), (var_2))))));
}
