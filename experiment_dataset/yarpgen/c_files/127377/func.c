/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127377
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18))))) >> (((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2] [i_2])) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) - (9543))))))))));
                    var_16 = ((((/* implicit */_Bool) 4294967289U)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-13576)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                    arr_10 [i_0] [i_2] [i_1] [i_2] |= (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)0] [i_0])) << (((/* implicit */int) (signed char)17))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [1ULL])) && (((/* implicit */_Bool) var_10))))) : (min((((/* implicit */int) arr_0 [i_1] [i_2])), (2055825955))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_17 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */int) (signed char)12)) != (((/* implicit */int) arr_7 [i_3] [8] [(short)12]))))) * (((((/* implicit */int) (unsigned char)231)) >> (((((/* implicit */int) arr_2 [i_3] [(unsigned char)13])) - (9527)))))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 7; i_4 += 2) 
        {
            var_18 = ((/* implicit */short) var_9);
            arr_15 [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), (arr_0 [i_3] [i_4])))), ((+(4832383356326310680ULL))))) << (((1936647718) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162)))))))));
        }
        arr_16 [(unsigned char)2] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) << (0)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127))))), (((unsigned long long int) (unsigned char)26))))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))) << (((((unsigned int) arr_17 [i_5] [i_5])) - (10755U)))));
    }
    var_21 = ((/* implicit */int) ((_Bool) var_5));
}
