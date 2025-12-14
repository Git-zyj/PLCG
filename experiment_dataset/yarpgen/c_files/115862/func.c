/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115862
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
    var_11 = ((/* implicit */signed char) (-(33554431U)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_3 [i_0]))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 1631206619))))), (min((978728287), (890539433))))))));
        arr_4 [i_0] [i_0] = arr_1 [i_0];
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min(((((~(arr_1 [i_0]))) >> (((((/* implicit */int) var_3)) + (14821))))), ((~(min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_15 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-37))))) >> (((((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) 3131310736498403232ULL)))))))) + (21051)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-37))))) >> (((((((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) 3131310736498403232ULL)))))))) + (21051))) - (21043))))));
            arr_8 [i_0] [i_1] = ((/* implicit */short) (+((-((+(((/* implicit */int) arr_2 [i_0]))))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 -= ((/* implicit */short) ((((long long int) arr_7 [i_2 - 1] [i_2 - 1])) + (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            arr_12 [i_0] = ((/* implicit */_Bool) arr_5 [6] [12U]);
            var_17 -= ((/* implicit */short) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (93630416U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            arr_16 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (-978728290)));
            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_3]))));
            /* LoopSeq 2 */
            for (int i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
            {
                var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [i_4 + 1]))));
                arr_20 [i_0] [(signed char)4] [i_4 - 1] = ((/* implicit */_Bool) (short)-25352);
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (arr_11 [i_3 - 1] [i_3 - 1])));
                var_21 = ((/* implicit */signed char) ((unsigned int) arr_11 [i_3 + 2] [i_4 - 2]));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) arr_11 [i_0] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25352))) : ((+(arr_18 [i_0])))))));
            }
            for (int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_5] = (((+(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (signed char)15)));
                var_23 = ((/* implicit */long long int) arr_21 [i_0] [(signed char)11] [(_Bool)1]);
            }
            var_24 = ((/* implicit */signed char) 16777200U);
        }
    }
}
