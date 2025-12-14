/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1570
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
    var_11 -= ((/* implicit */signed char) ((var_9) << (((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_9))));
    var_13 = ((/* implicit */unsigned int) (short)-26798);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) & (var_9)))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-((((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) arr_2 [i_0])))))))));
        arr_3 [i_0] [(_Bool)1] = ((signed char) ((unsigned int) arr_2 [i_0]));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1 - 1] [i_1] = ((/* implicit */_Bool) arr_5 [i_1]);
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(10955449689548503824ULL)))) ? (7491294384161047792ULL) : (((/* implicit */unsigned long long int) 3624262084U)))) % (max((max((((/* implicit */unsigned long long int) 2834525891U)), (arr_7 [i_1 - 1] [16U] [i_1]))), (((7491294384161047792ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12408))))))))))));
                        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((unsigned int) (+(var_0)))) : (((140566483U) << (((((/* implicit */int) (signed char)79)) - (65)))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((91485812U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) >> (((max((((((/* implicit */int) var_4)) >> (0ULL))), ((+(((/* implicit */int) (_Bool)1)))))) - (24298)))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_7 [i_1 + 1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) max(((short)-32760), (((/* implicit */short) (signed char)-70)))))))) ? ((-(((/* implicit */int) arr_13 [(signed char)5] [(signed char)5] [i_1] [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967295U)))))))));
    }
    for (short i_5 = 2; i_5 < 7; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) var_0);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((arr_12 [i_5 + 2] [i_5 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))))), (arr_12 [i_5 + 2] [i_5 - 2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
        {
            var_22 = ((((/* implicit */_Bool) 595486535U)) ? (arr_23 [i_9 + 1]) : (arr_23 [i_9 + 1]));
            arr_25 [i_5] = ((/* implicit */_Bool) (~(3068783219U)));
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
        {
            arr_29 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (15267665950688077337ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_10] [i_10] [i_10] [i_10])))));
            var_23 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_21 [i_10] [i_10 + 1] [4ULL] [i_10 + 1] [i_10])), (var_5)))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_19 [i_5 - 1] [i_5] [2U])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) == (arr_20 [i_5] [i_10 + 1] [i_10 + 1] [i_5 + 2])));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)11))))), (((var_0) >> (((((/* implicit */int) arr_16 [i_5 + 3])) + (119)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 - 2]))) : (((((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25701))))));
                }
            } 
        } 
    }
}
