/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18151
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
    var_16 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (short)1521))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((6ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))) > (((arr_0 [i_0]) >> (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (6957778885638501332LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34921))))) - (6957778885638501313LL))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_19 += ((/* implicit */int) var_9);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9] = ((/* implicit */unsigned long long int) (((+(((2484437619U) >> (((var_1) + (1846893993))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60808))))))));
                    }
                } 
            } 
        } 
        var_20 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(3172406457901194235LL)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((8388096U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-6905)))))) : (((/* implicit */int) var_2))))) : (min((((/* implicit */long long int) arr_3 [i_0])), ((-(var_6)))))));
    }
    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 + 1] [i_4])) || (((/* implicit */_Bool) 758670345)))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 17844286092478035224ULL)) ? (((/* implicit */long long int) (+((~(((/* implicit */int) (short)30517))))))) : (arr_11 [i_4])));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min(((-(arr_2 [i_4] [i_4] [i_4 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1522)) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) min((var_11), (var_13)))) : (((/* implicit */int) ((unsigned char) var_14))))))))));
        var_23 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (~((-2147483647 - 1)))))))), (min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) arr_7 [i_4] [18ULL] [i_4 + 1] [i_4] [i_4] [i_4 - 2]))))));
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_5]), (arr_14 [i_5])))) ? (((/* implicit */int) arr_14 [i_5])) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_14 [i_5]))))));
        arr_17 [(short)14] [i_5] = ((/* implicit */short) max((min((((/* implicit */unsigned int) (short)-20561)), (min((((/* implicit */unsigned int) (unsigned short)40654)), (2510917359U))))), (((((/* implicit */_Bool) 2224688803U)) ? (543235480U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))))));
    }
}
