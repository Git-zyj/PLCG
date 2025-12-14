/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176325
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] [7ULL] [9] = ((/* implicit */short) 288089638663356416ULL);
            arr_9 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1901707362U)) ? (1901707362U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))));
            arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [12U] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))) : (1901707341U)));
        }
        for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_20 [(_Bool)1] [(short)3] [i_3] [i_4] [i_4] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -240174185)) && (((/* implicit */_Bool) (short)27483)))))) + (max((arr_1 [0] [i_0]), (((/* implicit */unsigned long long int) 1901707350U))))))));
                            var_11 -= 1251835569297263515ULL;
                            arr_21 [i_0] [8ULL] [i_4] = 1443820924;
                            arr_22 [i_4] [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned int) arr_1 [i_0] [(short)16]);
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */_Bool) max((2393259933U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [(_Bool)1])) || (((/* implicit */_Bool) (short)-27484)))) ? (min((arr_18 [i_2] [2U] [2U] [i_0]), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0 + 2])))))));
            var_13 = ((/* implicit */int) max((var_13), (min((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (short)4095)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
            var_14 = ((/* implicit */short) var_5);
        }
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [(short)5]), (arr_0 [i_0])))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 2058888502)) ? (arr_6 [4ULL]) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0])))) & (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) (short)-10)))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-27483), ((short)27454)))) ? ((~(1443769066))) : (((int) 1901707357U))))) : (((((/* implicit */_Bool) (~(var_5)))) ? (var_10) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18184))) : (var_7)))))));
}
