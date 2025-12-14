/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172392
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (arr_1 [i_0]) : (((/* implicit */int) var_0))))) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (var_6))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) && (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((12350135284910590655ULL), (arr_0 [i_0]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0]))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (_Bool)1);
                        arr_10 [i_2] = ((/* implicit */short) (~(((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_1] [i_2] [i_3]))))));
                        var_13 = ((/* implicit */int) min((min((((-8615299785307787994LL) + (((/* implicit */long long int) 536866816)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8146))))))), (((/* implicit */long long int) ((((-1) + (2147483647))) >> (((((/* implicit */int) var_5)) - (29990))))))));
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)5828)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1]))) : (arr_0 [i_0])))));
        }
    }
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_14 [i_4] [i_4 + 2]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) || (((/* implicit */_Bool) 3415233364U)))))))) & (((/* implicit */int) arr_13 [i_4] [i_4]))));
        arr_16 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (short)-1)))));
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 4658220084727654821LL))))) ^ (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_12 [i_4] [i_4]))) || (((/* implicit */_Bool) arr_14 [i_4] [i_4])))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((+(((/* implicit */int) ((_Bool) (unsigned char)208))))) | (110363809))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((arr_13 [i_4 - 1] [i_4 + 1]) ? (((/* implicit */int) (short)16482)) : (((/* implicit */int) var_2)))))));
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (min((((/* implicit */long long int) max((arr_13 [i_5] [i_5]), (arr_13 [i_5] [i_5])))), (min((((/* implicit */long long int) (_Bool)1)), (var_6)))))));
        arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */int) max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_5])))) : (((/* implicit */int) min((((/* implicit */short) var_8)), ((short)32767))))));
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) var_1)))));
}
