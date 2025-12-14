/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155884
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
    var_11 = ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    var_12 = ((/* implicit */signed char) 886191024867208135ULL);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_13 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-77))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
            {
                var_14 = (signed char)58;
                var_15 = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0] [i_0]));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_8))))));
            }
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
            {
                var_16 = (signed char)-21;
                arr_10 [i_0] [i_1] [2ULL] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
            }
            for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                var_17 = (-(arr_5 [i_4 + 1] [7ULL] [i_4 + 1]));
                var_18 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_4 + 1])) ? (arr_5 [i_0] [i_1] [i_4]) : (arr_5 [i_4 + 2] [i_4 + 2] [i_4]));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 7; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_0);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_5 + 1] [i_4 - 1] [i_6] [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) : (18446744073709551608ULL)));
                            var_21 = ((/* implicit */signed char) max((var_21), ((signed char)-105)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_7 = 3; i_7 < 8; i_7 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_2))));
                    var_23 |= ((/* implicit */unsigned long long int) var_5);
                    arr_20 [i_0] [i_0] [i_0] [i_0] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_7] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_0 [i_4 + 2])));
                }
                for (signed char i_8 = 3; i_8 < 8; i_8 += 4) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    var_24 = ((/* implicit */signed char) (+(((unsigned long long int) 8725575224669736478ULL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8725575224669736498ULL)) ? (arr_2 [i_0]) : (arr_4 [i_9] [(signed char)1])))) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) arr_24 [i_8] [i_8 - 3] [i_8] [i_8 - 1] [i_8 - 2]))));
                        var_26 = ((/* implicit */unsigned long long int) (signed char)-113);
                    }
                    arr_28 [i_0] [i_1] [i_4 - 1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_1] [i_1] [i_4 + 2] [i_4 + 2] [i_8 + 2]))));
                }
                for (signed char i_10 = 3; i_10 < 8; i_10 += 4) /* same iter space */
                {
                    arr_32 [i_4] [(signed char)1] [i_4 - 1] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34)))));
                    var_27 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_10]);
                }
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_28 = ((((/* implicit */_Bool) (signed char)-45)) ? (15967517652816642553ULL) : (8349856755448494391ULL));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 8; i_14 += 2) 
                    {
                        {
                            var_29 = (signed char)-36;
                            var_30 |= var_5;
                            var_31 = var_5;
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_34 [i_0]))));
                        var_33 = (signed char)71;
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned long long int) (signed char)-42);
        }
    }
}
