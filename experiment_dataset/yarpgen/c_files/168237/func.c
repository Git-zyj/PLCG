/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168237
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
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)62)), (-473227283681802597LL)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_4))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) (-(8772539793475588731LL)));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_8 [i_2] [i_0] [i_0] = ((/* implicit */int) var_5);
                var_16 = ((/* implicit */int) (unsigned char)179);
                arr_9 [3U] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_0 - 2] [i_1 - 1] [i_0 - 2] [2LL]));
                arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 4311904093825238033ULL))));
                arr_15 [i_3] [i_0] [i_0] [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) ^ (2162306689U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_10 [i_0]));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    arr_18 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [9LL] [4ULL] [i_0] [i_0] [i_1] [4ULL]))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))));
                    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (var_5)))) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                }
                for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        arr_25 [i_0] [(_Bool)1] [i_0] [(unsigned char)10] [i_1] [i_0] = ((((/* implicit */_Bool) (signed char)36)) ? (8772539793475588731LL) : (((/* implicit */long long int) 1620652934)));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_3] [0LL] [i_1 - 2] [10ULL] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_7 [i_0 + 1] [i_0] [i_0 + 1])));
                        var_19 = ((unsigned int) (!(((/* implicit */_Bool) 6242042288224385111ULL))));
                    }
                    arr_27 [i_1] [i_0] = ((/* implicit */short) ((_Bool) 1041057280391134708LL));
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) var_11);
                    var_20 *= ((/* implicit */unsigned long long int) var_0);
                    arr_32 [i_0] [i_0] = arr_3 [i_0 - 2];
                }
            }
            arr_33 [i_0] [3ULL] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62029))) / (8772539793475588705LL)));
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0]);
    }
    var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_6))))) ? ((+(((/* implicit */int) (unsigned char)148)))) : (min((((/* implicit */int) (unsigned short)62044)), (var_2)))))) != (((((/* implicit */_Bool) var_8)) ? ((-(var_5))) : (max((((/* implicit */unsigned long long int) var_12)), (var_10))))));
}
