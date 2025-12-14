/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139994
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_2 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_3] [i_3 - 1]))))))))));
                        arr_14 [i_0] [4LL] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)12459))))))) % (((/* implicit */int) (unsigned short)12458))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_4 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2214160602263818357LL)))) ? (((/* implicit */int) min(((short)7680), (((/* implicit */short) (signed char)-13))))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (short)-1914)))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53054)))));
                        arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)64543);
                        arr_20 [i_0] [i_0] [i_2] [(short)0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [2ULL]))))))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_1] [i_2] [i_4]))) > (((/* implicit */int) ((_Bool) (short)19363)))))) : (max((((/* implicit */int) arr_0 [i_1])), ((-(((/* implicit */int) arr_15 [8U]))))))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_4 - 1]) ? (((/* implicit */int) arr_15 [i_4 + 1])) : (((/* implicit */int) arr_15 [i_4 + 1]))))) ? (((/* implicit */int) (!(arr_15 [i_4 - 1])))) : (((/* implicit */int) ((-2466559694360413419LL) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)53077)) : (((/* implicit */int) arr_12 [i_2] [i_5 + 1] [i_5 + 1] [(short)3] [i_5 + 1]))));
                        arr_23 [i_0] [i_0] [i_2] [i_5 + 1] = ((/* implicit */short) arr_11 [i_0] [i_5] [i_0] [i_5]);
                        var_14 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned short)36192)) > (var_1)))));
                        var_15 = ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [(short)1] [i_1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))) : (6558348548129965619ULL)));
                    }
                    var_16 *= ((/* implicit */unsigned long long int) var_3);
                    arr_24 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_2]), (arr_0 [15U]))))))) <= (((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_2])) == (((/* implicit */int) var_2))))) & (((((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)0] [i_2])) % (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((int) var_2));
}
