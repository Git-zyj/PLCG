/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184226
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)24211))))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-100)))))), (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-30)))) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)42)) > (((/* implicit */int) (_Bool)1))))))))))));
        var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_15 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [i_0])))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61441)) ^ (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned int) (unsigned short)13161)), (3568034751U)))))));
        var_16 = ((/* implicit */unsigned long long int) var_7);
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            arr_16 [14LL] [i_1] [14LL] [i_4] [14LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(18446744073709551603ULL)))) || (((/* implicit */_Bool) max((arr_6 [i_1 - 1] [i_1 + 3] [i_5 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)0))))))))));
                            var_17 = arr_5 [i_4];
                        }
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)117)))))));
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (arr_8 [i_1] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1]);
        var_20 ^= ((/* implicit */signed char) max((arr_9 [i_1] [i_1 + 2] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 4] [i_1 + 1])) && (((/* implicit */_Bool) var_8)))))));
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_7)))))))));
}
