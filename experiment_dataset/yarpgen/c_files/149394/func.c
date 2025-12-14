/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149394
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [5LL] [i_0] [i_1] = ((/* implicit */unsigned short) max(((-(14692782956576601687ULL))), (((/* implicit */unsigned long long int) var_2))));
            var_12 ^= ((/* implicit */long long int) ((unsigned short) arr_5 [i_1] [i_1] [i_0]));
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) var_7);
            arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -6717219410509720365LL)) && (((/* implicit */_Bool) 1430972002U)))))) | (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [10U] [4U]))) % (var_11))), (((/* implicit */unsigned int) ((arr_0 [i_1] [2U]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0 + 1]))))))))));
        }
        arr_9 [i_0] [i_0] = max((((((/* implicit */long long int) ((/* implicit */int) (short)-15336))) & (((arr_0 [i_0] [i_0]) ^ (((/* implicit */long long int) arr_2 [i_0 + 3])))))), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))));
    }
    for (long long int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_10))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(1277329244U))))));
    }
    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((arr_13 [0ULL]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) >= (458752ULL)))))))));
        arr_15 [8U] [i_3] = max((((/* implicit */unsigned int) var_6)), (min(((~(var_7))), (((/* implicit */unsigned int) arr_1 [i_3])))));
    }
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 23; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) var_4);
                var_17 = var_11;
                var_18 = ((/* implicit */int) max((max((max((((/* implicit */unsigned int) (unsigned short)30720)), (3017638076U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [(unsigned char)4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) var_9))))))), (min(((~(arr_18 [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)24407)) : (((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_23 [i_6])) ^ (var_1)));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) -1099511627776LL)), (15519223454542899348ULL))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(860006754U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((1711825870797052655LL) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : ((~(arr_24 [i_6]))))) : (((/* implicit */long long int) arr_23 [i_6]))));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) (-(((min((((/* implicit */long long int) var_4)), (arr_28 [12U]))) >> (((var_10) - (4045284624U)))))));
        arr_30 [i_7] [i_7] = ((/* implicit */int) (-(var_11)));
    }
}
