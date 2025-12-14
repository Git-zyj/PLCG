/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171469
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) 392573171244485527ULL)))), (((_Bool) arr_2 [i_0] [i_0]))));
            arr_6 [i_0] = ((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)1] [(short)1]))) : (arr_2 [i_0] [i_0])))))));
            var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((arr_0 [8LL] [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [7U] [(unsigned short)3])))), (arr_2 [(unsigned short)4] [(unsigned short)4])))) ? (((((/* implicit */_Bool) ((unsigned short) arr_1 [2LL] [2LL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (min((((/* implicit */unsigned int) var_9)), (arr_0 [(unsigned char)2] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
        }
        for (signed char i_2 = 1; i_2 < 6; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)71)) : (-775880351))) : ((~(((/* implicit */int) arr_1 [i_0] [i_2]))))))) ? (arr_0 [i_0] [i_2]) : (arr_2 [i_0] [i_0])));
            arr_10 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2]);
            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_2]))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 7; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((signed char) var_9)))));
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_2 + 3] [i_2]))), (((unsigned long long int) (_Bool)1)))))));
                    }
                } 
            } 
        }
        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)0])) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 8227968577559855519ULL)))) : (((unsigned long long int) arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_6] [i_0] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */short) (~(min((min((arr_3 [i_0] [1U] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [1ULL] [i_7])))), (((/* implicit */long long int) arr_1 [i_0] [i_6]))))));
                        var_18 = ((/* implicit */signed char) (~(arr_17 [i_0])));
                    }
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned char) arr_12 [i_5] [2LL])), (arr_7 [i_0] [i_6])))))), (var_8))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_0))), (var_0)));
}
